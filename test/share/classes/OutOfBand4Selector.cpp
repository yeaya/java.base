#include <OutOfBand4Selector.h>

#include <java/io/OutputStream.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
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

using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

$MethodInfo _OutOfBand4Selector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(OutOfBand4Selector, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(OutOfBand4Selector, main, void, $StringArray*), "java.lang.Exception"},
	{"test", "(Ljava/net/Socket;ZIILjava/nio/channels/Selector;)V", nullptr, $STATIC, $staticMethod(OutOfBand4Selector, test, void, $Socket*, bool, int32_t, int32_t, $Selector*), "java.io.IOException"},
	{}
};

$ClassInfo _OutOfBand4Selector_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"OutOfBand4Selector",
	"java.lang.Object",
	nullptr,
	nullptr,
	_OutOfBand4Selector_MethodInfo_
};

$Object* allocate$OutOfBand4Selector($Class* clazz) {
	return $of($alloc(OutOfBand4Selector));
}

void OutOfBand4Selector::init$() {
}

void OutOfBand4Selector::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($ServerSocketChannel, ssc, nullptr);
	$var($SocketChannel, sc, nullptr);
	$var($Selector, sel, nullptr);
	$var($Socket, s, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$assign(ssc, $cast($ServerSocketChannel, $nc($($ServerSocketChannel::open()))->bind($$new($InetSocketAddress, 0))));
			$var($InetAddress, var$1, $InetAddress::getLocalHost());
			$assign(s, $new($Socket, var$1, $nc($($nc(ssc)->socket()))->getLocalPort()));
			$assign(sc, $nc(ssc)->accept());
			$assign(sel, $Selector::open());
			$nc(sc)->configureBlocking(false);
			sc->register$(sel, $SelectionKey::OP_READ);
			if ($nc($(sc->socket()))->getOOBInline()) {
				$throwNew($RuntimeException, "SO_OOBINLINE enabled"_s);
			}
			test(s, false, 0, 0, sel);
			test(s, false, 512, 0, sel);
			test(s, false, 0, 512, sel);
			test(s, false, 512, 512, sel);
			$nc($(sc->socket()))->setOOBInline(true);
			test(s, true, 0, 0, sel);
			test(s, true, 512, 0, sel);
			test(s, true, 0, 512, sel);
			test(s, true, 512, 512, sel);
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			if (sel != nullptr) {
				sel->close();
			}
			if (sc != nullptr) {
				sc->close();
			}
			if (ssc != nullptr) {
				ssc->close();
			}
			if (s != nullptr) {
				$nc(sc)->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void OutOfBand4Selector::test($Socket* s, bool urgentExpected, int32_t bytesBefore, int32_t bytesAfter, $Selector* sel) {
	$useLocalCurrentObjectStackCache();
	int32_t bytesExpected = 0;
	if (bytesBefore > 0) {
		$nc($($nc(s)->getOutputStream()))->write($$new($bytes, bytesBefore));
		bytesExpected += bytesBefore;
	}
	$nc(s)->sendUrgentData(255);
	if (urgentExpected) {
		++bytesExpected;
	}
	if (bytesAfter > 0) {
		$nc($(s->getOutputStream()))->write($$new($bytes, bytesAfter));
		bytesExpected += bytesAfter;
	}
	int32_t spuriousWakeups = 0;
	int32_t spuriousReads = 0;
	int32_t bytesRead = 0;
	$var($ByteBuffer, bb, $ByteBuffer::allocate(100));
	for (;;) {
		int32_t n = $nc(sel)->select((int64_t)2000);
		if (n == 0) {
			if (bytesRead == bytesExpected) {
				$nc($System::out)->format("Selector wakeups %d\tSpurious reads %d%n"_s, $$new($ObjectArray, {
					$($of($Integer::valueOf(spuriousWakeups))),
					$($of($Integer::valueOf(spuriousReads)))
				}));
				return;
			}
			if (++spuriousWakeups >= 3) {
				$throwNew($RuntimeException, "Selector appears to be spinning or data not received"_s);
			}
			continue;
		}
		if (n > 1) {
			$throwNew($RuntimeException, "More than one key selected????"_s);
		}
		$var($SelectionKey, key, $cast($SelectionKey, $nc($($nc($(sel->selectedKeys()))->iterator()))->next()));
		$nc(bb)->clear();
		n = $nc(($cast($SocketChannel, $($nc(key)->channel()))))->read(bb);
		if (n == 0) {
			if (++spuriousReads >= 3) {
				$throwNew($RuntimeException, "Too many spurious reads"_s);
			}
		} else {
			bytesRead += n;
			if (bytesRead > bytesExpected) {
				$throwNew($RuntimeException, "Received more than expected"_s);
			}
		}
		$nc($(sel->selectedKeys()))->clear();
	}
}

OutOfBand4Selector::OutOfBand4Selector() {
}

$Class* OutOfBand4Selector::load$($String* name, bool initialize) {
	$loadClass(OutOfBand4Selector, name, initialize, &_OutOfBand4Selector_ClassInfo_, allocate$OutOfBand4Selector);
	return class$;
}

$Class* OutOfBand4Selector::class$ = nullptr;