#include <LingerOnClose.h>

#include <LingerOnClose$TestMode.h>
#include <java/io/IOException.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketOption.h>
#include <java/net/StandardSocketOptions.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

#undef BLOCKING
#undef NON_BLOCKING
#undef NON_BLOCKING_AND_REGISTERED
#undef OP_READ
#undef SO_LINGER

using $LingerOnClose$TestMode = ::LingerOnClose$TestMode;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $StandardSocketOptions = ::java::net::StandardSocketOptions;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;

$MethodInfo _LingerOnClose_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LingerOnClose, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LingerOnClose, main, void, $StringArray*), "java.io.IOException"},
	{"test", "(LLingerOnClose$TestMode;I)V", nullptr, $STATIC, $staticMethod(LingerOnClose, test, void, $LingerOnClose$TestMode*, int32_t), "java.io.IOException"},
	{}
};

$InnerClassInfo _LingerOnClose_InnerClassesInfo_[] = {
	{"LingerOnClose$TestMode", "LingerOnClose", "TestMode", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _LingerOnClose_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LingerOnClose",
	"java.lang.Object",
	nullptr,
	nullptr,
	_LingerOnClose_MethodInfo_,
	nullptr,
	nullptr,
	_LingerOnClose_InnerClassesInfo_,
	nullptr,
	nullptr,
	"LingerOnClose$TestMode"
};

$Object* allocate$LingerOnClose($Class* clazz) {
	return $of($alloc(LingerOnClose));
}

void LingerOnClose::init$() {
}

void LingerOnClose::main($StringArray* args) {
	$init($LingerOnClose$TestMode);
	test($LingerOnClose$TestMode::BLOCKING, -1);
	test($LingerOnClose$TestMode::BLOCKING, 0);
	test($LingerOnClose$TestMode::BLOCKING, 1);
	test($LingerOnClose$TestMode::NON_BLOCKING, -1);
	test($LingerOnClose$TestMode::NON_BLOCKING, 0);
	test($LingerOnClose$TestMode::NON_BLOCKING, 1);
	test($LingerOnClose$TestMode::NON_BLOCKING_AND_REGISTERED, -1);
	test($LingerOnClose$TestMode::NON_BLOCKING_AND_REGISTERED, 0);
	test($LingerOnClose$TestMode::NON_BLOCKING_AND_REGISTERED, 1);
}

void LingerOnClose::test($LingerOnClose$TestMode* mode, int32_t interval) {
	$useLocalCurrentObjectStackCache();
	$var($SocketChannel, sc, nullptr);
	$var($SocketChannel, peer, nullptr);
	$var($Selector, sel, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($ServerSocketChannel, ssc, $ServerSocketChannel::open());
			{
				$var($Throwable, var$1, nullptr);
				try {
					try {
						$nc(ssc)->bind($$new($InetSocketAddress, $($InetAddress::getLocalHost()), 0));
						$assign(sc, $SocketChannel::open($(ssc->getLocalAddress())));
						$assign(peer, ssc->accept());
						$init($LingerOnClose$TestMode);
						if (mode != $LingerOnClose$TestMode::BLOCKING) {
							$nc(sc)->configureBlocking(false);
						}
						if (mode == $LingerOnClose$TestMode::NON_BLOCKING_AND_REGISTERED) {
							$assign(sel, $Selector::open());
							$nc(sc)->register$(sel, $SelectionKey::OP_READ);
							$nc(sel)->selectNow();
						}
						$init($StandardSocketOptions);
						$nc(sc)->setOption($StandardSocketOptions::SO_LINGER, $($Integer::valueOf(interval)));
						sc->close();
						if (mode == $LingerOnClose$TestMode::NON_BLOCKING_AND_REGISTERED) {
							$nc(sel)->selectNow();
						}
						$var($ByteBuffer, bb, $ByteBuffer::allocate(100));
						try {
							int32_t n = $nc(peer)->read(bb);
							if (interval == 0) {
								$throwNew($RuntimeException, "RST expected"_s);
							} else if (n != -1) {
								$throwNew($RuntimeException, "EOF expected"_s);
							}
						} catch ($IOException& ioe) {
							if (interval != 0) {
								$throw(ioe);
							}
						}
					} catch ($Throwable& t$) {
						if (ssc != nullptr) {
							try {
								ssc->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					if (ssc != nullptr) {
						ssc->close();
					}
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			if (sc != nullptr) {
				sc->close();
			}
			if (peer != nullptr) {
				peer->close();
			}
			if (sel != nullptr) {
				sel->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

LingerOnClose::LingerOnClose() {
}

$Class* LingerOnClose::load$($String* name, bool initialize) {
	$loadClass(LingerOnClose, name, initialize, &_LingerOnClose_ClassInfo_, allocate$LingerOnClose);
	return class$;
}

$Class* LingerOnClose::class$ = nullptr;