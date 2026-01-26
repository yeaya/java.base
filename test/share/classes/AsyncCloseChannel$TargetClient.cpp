#include <AsyncCloseChannel$TargetClient.h>

#include <AsyncCloseChannel$SensorClient.h>
#include <AsyncCloseChannel$TargetClient$1.h>
#include <AsyncCloseChannel.h>
#include <java/io/IOException.h>
#include <java/lang/InterruptedException.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <jcpp.h>

using $AsyncCloseChannel = ::AsyncCloseChannel;
using $AsyncCloseChannel$SensorClient = ::AsyncCloseChannel$SensorClient;
using $AsyncCloseChannel$TargetClient$1 = ::AsyncCloseChannel$TargetClient$1;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketChannel = ::java::nio::channels::SocketChannel;

$FieldInfo _AsyncCloseChannel$TargetClient_FieldInfo_[] = {
	{"ready", "Z", nullptr, $VOLATILE, $field(AsyncCloseChannel$TargetClient, ready)},
	{}
};

$MethodInfo _AsyncCloseChannel$TargetClient_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(AsyncCloseChannel$TargetClient, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AsyncCloseChannel$TargetClient, run, void)},
	{}
};

$InnerClassInfo _AsyncCloseChannel$TargetClient_InnerClassesInfo_[] = {
	{"AsyncCloseChannel$TargetClient", "AsyncCloseChannel", "TargetClient", $STATIC},
	{"AsyncCloseChannel$TargetClient$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AsyncCloseChannel$TargetClient_ClassInfo_ = {
	$ACC_SUPER,
	"AsyncCloseChannel$TargetClient",
	"java.lang.Thread",
	nullptr,
	_AsyncCloseChannel$TargetClient_FieldInfo_,
	_AsyncCloseChannel$TargetClient_MethodInfo_,
	nullptr,
	nullptr,
	_AsyncCloseChannel$TargetClient_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"AsyncCloseChannel"
};

$Object* allocate$AsyncCloseChannel$TargetClient($Class* clazz) {
	return $of($alloc(AsyncCloseChannel$TargetClient));
}

void AsyncCloseChannel$TargetClient::init$() {
	$Thread::init$();
	this->ready = false;
}

void AsyncCloseChannel$TargetClient::run() {
	$useLocalCurrentObjectStackCache();
	$init($AsyncCloseChannel);
	while ($AsyncCloseChannel::keepGoing) {
		try {
			$var($SocketChannel, s, $SocketChannel::open(static_cast<$SocketAddress*>($$new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), $AsyncCloseChannel::targetPort))));
			$nc(s)->finishConnect();
			$nc($(s->socket()))->setSoLinger(false, 0);
			this->ready = false;
			$var($Thread, t, $new($AsyncCloseChannel$TargetClient$1, this, s));
			t->start();
			while (!this->ready && $AsyncCloseChannel::keepGoing) {
				try {
					$Thread::sleep(10);
				} catch ($InterruptedException& ex) {
				}
			}
			s->close();
			$AsyncCloseChannel$SensorClient::wakeMe();
			t->join();
		} catch ($IOException& ex) {
			$nc($System::err)->println($$str({"Exception in target client parent "_s, $(ex->getMessage())}));
		} catch ($InterruptedException& ex) {
		}
	}
}

AsyncCloseChannel$TargetClient::AsyncCloseChannel$TargetClient() {
}

$Class* AsyncCloseChannel$TargetClient::load$($String* name, bool initialize) {
	$loadClass(AsyncCloseChannel$TargetClient, name, initialize, &_AsyncCloseChannel$TargetClient_ClassInfo_, allocate$AsyncCloseChannel$TargetClient);
	return class$;
}

$Class* AsyncCloseChannel$TargetClient::class$ = nullptr;