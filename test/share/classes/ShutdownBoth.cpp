#include <ShutdownBoth.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;

$MethodInfo _ShutdownBoth_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ShutdownBoth::*)()>(&ShutdownBoth::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ShutdownBoth::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ShutdownBoth_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ShutdownBoth",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ShutdownBoth_MethodInfo_
};

$Object* allocate$ShutdownBoth($Class* clazz) {
	return $of($alloc(ShutdownBoth));
}

void ShutdownBoth::init$() {
}

void ShutdownBoth::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($InetAddress, loopback, $InetAddress::getLoopbackAddress());
	$var($ServerSocket, ss, $new($ServerSocket, 0, 50, loopback));
	$var($InetAddress, var$0, ss->getInetAddress());
	$var($Socket, s1, $new($Socket, var$0, ss->getLocalPort()));
	$var($Socket, s2, ss->accept());
	{
		$var($Throwable, var$1, nullptr);
		try {
			s1->shutdownInput();
			s1->shutdownOutput();
		} catch ($Throwable&) {
			$assign(var$1, $catch());
		} /*finally*/ {
			s1->close();
			$nc(s2)->close();
			ss->close();
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
	}
}

ShutdownBoth::ShutdownBoth() {
}

$Class* ShutdownBoth::load$($String* name, bool initialize) {
	$loadClass(ShutdownBoth, name, initialize, &_ShutdownBoth_ClassInfo_, allocate$ShutdownBoth);
	return class$;
}

$Class* ShutdownBoth::class$ = nullptr;