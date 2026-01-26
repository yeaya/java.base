#include <LotsOfCancels$ClientThread.h>

#include <LotsOfCancels.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef OP_CONNECT

using $LotsOfCancels = ::LotsOfCancels;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketAddress = ::java::net::SocketAddress;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

$FieldInfo _LotsOfCancels$ClientThread_FieldInfo_[] = {
	{"address", "Ljava/net/SocketAddress;", nullptr, $PRIVATE | $FINAL, $field(LotsOfCancels$ClientThread, address)},
	{"selector", "Ljava/nio/channels/Selector;", nullptr, $PRIVATE | $FINAL, $field(LotsOfCancels$ClientThread, selector)},
	{"connectionsNeeded", "I", nullptr, $PRIVATE, $field(LotsOfCancels$ClientThread, connectionsNeeded)},
	{"totalCreated", "I", nullptr, $PRIVATE, $field(LotsOfCancels$ClientThread, totalCreated)},
	{}
};

$MethodInfo _LotsOfCancels$ClientThread_MethodInfo_[] = {
	{"<init>", "(Ljava/net/SocketAddress;)V", nullptr, 0, $method(LotsOfCancels$ClientThread, init$, void, $SocketAddress*), "java.lang.Exception"},
	{"connectClients", "(I)V", nullptr, 0, $virtualMethod(LotsOfCancels$ClientThread, connectClients, void, int32_t), "java.lang.Exception"},
	{"handleClients", "()V", nullptr, $PRIVATE, $method(LotsOfCancels$ClientThread, handleClients, void), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LotsOfCancels$ClientThread, run, void)},
	{}
};

$InnerClassInfo _LotsOfCancels$ClientThread_InnerClassesInfo_[] = {
	{"LotsOfCancels$ClientThread", "LotsOfCancels", "ClientThread", $STATIC},
	{}
};

$ClassInfo _LotsOfCancels$ClientThread_ClassInfo_ = {
	$ACC_SUPER,
	"LotsOfCancels$ClientThread",
	"java.lang.Thread",
	nullptr,
	_LotsOfCancels$ClientThread_FieldInfo_,
	_LotsOfCancels$ClientThread_MethodInfo_,
	nullptr,
	nullptr,
	_LotsOfCancels$ClientThread_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LotsOfCancels"
};

$Object* allocate$LotsOfCancels$ClientThread($Class* clazz) {
	return $of($alloc(LotsOfCancels$ClientThread));
}

void LotsOfCancels$ClientThread::init$($SocketAddress* address) {
	$Thread::init$();
	$set(this, address, address);
	$set(this, selector, $Selector::open());
	setDaemon(true);
}

void LotsOfCancels$ClientThread::connectClients(int32_t count) {
	$synchronized(this) {
		this->connectionsNeeded += count;
	}
	$nc(this->selector)->wakeup();
}

void LotsOfCancels$ClientThread::run() {
	try {
		handleClients();
	} catch ($Throwable& e) {
		e->printStackTrace();
		$System::exit(1);
	}
}

void LotsOfCancels$ClientThread::handleClients() {
	$useLocalCurrentObjectStackCache();
	int32_t selectCount = 0;
	while (true) {
		int32_t createdCount = 0;
		$synchronized(this) {
			if (this->connectionsNeeded > 0) {
				while (this->connectionsNeeded > 0 && createdCount < 20) {
					--this->connectionsNeeded;
					++createdCount;
					++this->totalCreated;
					$var($SocketChannel, channel, $SocketChannel::open());
					$nc(channel)->configureBlocking(false);
					channel->connect(this->address);
					if (!channel->finishConnect()) {
						channel->register$(this->selector, $SelectionKey::OP_CONNECT);
					}
				}
				$LotsOfCancels::log($$str({"Started total of "_s, $$str(this->totalCreated), " client connections"_s}));
				$Thread::sleep(200);
			}
		}
		if (createdCount > 0) {
			$nc(this->selector)->selectNow();
		} else {
			++selectCount;
			int64_t startTime = $System::nanoTime();
			$nc(this->selector)->select();
			int64_t duration = $LotsOfCancels::durationMillis(startTime);
			$LotsOfCancels::log($$str({"Exited clientSelector.select(), loop #"_s, $$str(selectCount), ", duration = "_s, $$str(duration), "ms"_s}));
		}
		int32_t keyCount = -1;
		$var($Iterator, keys, $nc($($nc(this->selector)->selectedKeys()))->iterator());
		while ($nc(keys)->hasNext()) {
			$var($SelectionKey, key, $cast($SelectionKey, keys->next()));
			$synchronized(key) {
				++keyCount;
				keys->remove();
				if (!$nc(key)->isValid()) {
					$LotsOfCancels::log($$str({"Ignoring client key #"_s, $$str(keyCount)}));
					continue;
				}
				int32_t readyOps = $nc(key)->readyOps();
				if (readyOps == $SelectionKey::OP_CONNECT) {
					key->interestOps(0);
					$nc(($cast($SocketChannel, $(key->channel()))))->finishConnect();
				} else {
					$LotsOfCancels::log($$str({"readyOps() on client key #"_s, $$str(keyCount), " returned "_s, $$str(readyOps)}));
				}
			}
		}
	}
}

LotsOfCancels$ClientThread::LotsOfCancels$ClientThread() {
}

$Class* LotsOfCancels$ClientThread::load$($String* name, bool initialize) {
	$loadClass(LotsOfCancels$ClientThread, name, initialize, &_LotsOfCancels$ClientThread_ClassInfo_, allocate$LotsOfCancels$ClientThread);
	return class$;
}

$Class* LotsOfCancels$ClientThread::class$ = nullptr;