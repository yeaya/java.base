#include <SetReceiveBufferSize.h>

#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;

$MethodInfo _SetReceiveBufferSize_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SetReceiveBufferSize::*)()>(&SetReceiveBufferSize::init$)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SetReceiveBufferSize::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _SetReceiveBufferSize_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SetReceiveBufferSize",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SetReceiveBufferSize_MethodInfo_
};

$Object* allocate$SetReceiveBufferSize($Class* clazz) {
	return $of($alloc(SetReceiveBufferSize));
}

void SetReceiveBufferSize::main($StringArray* args) {
	$var(SetReceiveBufferSize, s, $new(SetReceiveBufferSize));
}

void SetReceiveBufferSize::init$() {
	$useLocalCurrentObjectStackCache();
	$var($ServerSocket, ss, $new($ServerSocket));
	$var($InetAddress, loopback, $InetAddress::getLoopbackAddress());
	ss->bind($$new($InetSocketAddress, loopback, 0));
	$var($Socket, s, $new($Socket, loopback, ss->getLocalPort()));
	$var($Socket, accepted, ss->accept());
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			try {
				s->setReceiveBufferSize(0);
			} catch ($IllegalArgumentException& e) {
				return$1 = true;
				goto $finally;
			} catch ($Exception& ex) {
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			ss->close();
			s->close();
			$nc(accepted)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
	$throwNew($RuntimeException, "IllegalArgumentException not thrown!"_s);
}

SetReceiveBufferSize::SetReceiveBufferSize() {
}

$Class* SetReceiveBufferSize::load$($String* name, bool initialize) {
	$loadClass(SetReceiveBufferSize, name, initialize, &_SetReceiveBufferSize_ClassInfo_, allocate$SetReceiveBufferSize);
	return class$;
}

$Class* SetReceiveBufferSize::class$ = nullptr;