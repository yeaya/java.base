#include <ShutdownBoth.h>
#include <java/net/InetAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;

void ShutdownBoth::init$() {
}

void ShutdownBoth::main($StringArray* args) {
	$useLocalObjectStack();
	$var($InetAddress, loopback, $InetAddress::getLoopbackAddress());
	$var($ServerSocket, ss, $new($ServerSocket, 0, 50, loopback));
	$var($InetAddress, var$0, ss->getInetAddress());
	$var($Socket, s1, $new($Socket, var$0, ss->getLocalPort()));
	$var($Socket, s2, ss->accept());
	$var($Throwable, var$1, nullptr);
	try {
		s1->shutdownInput();
		s1->shutdownOutput();
	} catch ($Throwable& var$2) {
		$assign(var$1, var$2);
	} /*finally*/ {
		s1->close();
		$nc(s2)->close();
		ss->close();
	}
	if (var$1 != nullptr) {
		$throw(var$1);
	}
}

ShutdownBoth::ShutdownBoth() {
}

$Class* ShutdownBoth::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ShutdownBoth, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ShutdownBoth, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ShutdownBoth",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ShutdownBoth, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShutdownBoth);
	});
	return class$;
}

$Class* ShutdownBoth::class$ = nullptr;