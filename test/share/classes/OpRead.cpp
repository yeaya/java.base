#include <OpRead.h>

#include <java/lang/AssertionError.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef OP_READ
#undef OP_WRITE

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

$FieldInfo _OpRead_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(OpRead, $assertionsDisabled)},
	{}
};

$MethodInfo _OpRead_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(OpRead::*)()>(&OpRead::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&OpRead::main)), "java.lang.Exception"},
	{"test", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&OpRead::test)), "java.lang.Exception"},
	{}
};

$ClassInfo _OpRead_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"OpRead",
	"java.lang.Object",
	nullptr,
	_OpRead_FieldInfo_,
	_OpRead_MethodInfo_
};

$Object* allocate$OpRead($Class* clazz) {
	return $of($alloc(OpRead));
}

bool OpRead::$assertionsDisabled = false;

void OpRead::init$() {
}

void OpRead::test() {
	$init(OpRead);
	$useLocalCurrentObjectStackCache();
	$var($ServerSocketChannel, ssc, nullptr);
	$var($SocketChannel, sc, nullptr);
	$var($SocketChannel, peer, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$assign(ssc, $cast($ServerSocketChannel, $nc($($ServerSocketChannel::open()))->bind($$new($InetSocketAddress, 0))));
			$var($InetAddress, lh, $InetAddress::getLocalHost());
			$assign(sc, $SocketChannel::open(static_cast<$SocketAddress*>($$new($InetSocketAddress, lh, $nc($($nc(ssc)->socket()))->getLocalPort()))));
			$assign(peer, $nc(ssc)->accept());
			int32_t n = $nc(peer)->write($($ByteBuffer::wrap($("Hello"_s->getBytes()))));
			if (!OpRead::$assertionsDisabled && !(n > 0)) {
				$throwNew($AssertionError);
			}
			$nc(sc)->configureBlocking(false);
			$var($Selector, selector, $Selector::open());
			$var($SelectionKey, key, sc->register$(selector, $SelectionKey::OP_READ | $SelectionKey::OP_WRITE));
			bool done = false;
			int32_t failCount = 0;
			while (!done) {
				int32_t nSelected = $nc(selector)->select();
				if (nSelected > 0) {
					if (nSelected > 1) {
						$throwNew($RuntimeException, "More than one channel selected"_s);
					}
					$var($Set, keys, selector->selectedKeys());
					$var($Iterator, iterator, $nc(keys)->iterator());
					while ($nc(iterator)->hasNext()) {
						$assign(key, $cast($SelectionKey, iterator->next()));
						iterator->remove();
						if ($nc(key)->isWritable()) {
							++failCount;
							if (failCount > 10) {
								$throwNew($RuntimeException, "Test failed"_s);
							}
							$Thread::sleep(250);
						}
						if ($nc(key)->isReadable()) {
							done = true;
						}
					}
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (peer != nullptr) {
				peer->close();
			}
			if (sc != nullptr) {
				sc->close();
			}
			if (ssc != nullptr) {
				ssc->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void OpRead::main($StringArray* args) {
	$init(OpRead);
	test();
}

void clinit$OpRead($Class* class$) {
	OpRead::$assertionsDisabled = !OpRead::class$->desiredAssertionStatus();
}

OpRead::OpRead() {
}

$Class* OpRead::load$($String* name, bool initialize) {
	$loadClass(OpRead, name, initialize, &_OpRead_ClassInfo_, clinit$OpRead, allocate$OpRead);
	return class$;
}

$Class* OpRead::class$ = nullptr;