#include <Bind4SocketChannel.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/BindException.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BindException = ::java::net::BindException;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;

$MethodInfo _Bind4SocketChannel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bind4SocketChannel::*)()>(&Bind4SocketChannel::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bind4SocketChannel::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Bind4SocketChannel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bind4SocketChannel",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Bind4SocketChannel_MethodInfo_
};

$Object* allocate$Bind4SocketChannel($Class* clazz) {
	return $of($alloc(Bind4SocketChannel));
}

void Bind4SocketChannel::init$() {
}

void Bind4SocketChannel::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($SocketChannel, sc1, $SocketChannel::open());
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(sc1)->bind($$new($InetSocketAddress, 0));
				int32_t port = $nc($(sc1->socket()))->getLocalPort();
				$var($SocketChannel, sc2, $SocketChannel::open());
				{
					$var($Throwable, var$1, nullptr);
					try {
						$nc(sc2)->bind($$new($InetSocketAddress, port));
					} catch ($Throwable&) {
						$assign(var$1, $catch());
					} /*finally*/ {
						$nc(sc2)->close();
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
				}
			} catch ($BindException&) {
				$var($BindException, be, $catch());
				be->printStackTrace();
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(sc1)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

Bind4SocketChannel::Bind4SocketChannel() {
}

$Class* Bind4SocketChannel::load$($String* name, bool initialize) {
	$loadClass(Bind4SocketChannel, name, initialize, &_Bind4SocketChannel_ClassInfo_, allocate$Bind4SocketChannel);
	return class$;
}

$Class* Bind4SocketChannel::class$ = nullptr;