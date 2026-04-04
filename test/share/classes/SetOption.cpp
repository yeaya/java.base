#include <SetOption.h>
#include <java/net/InetAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketException = ::java::net::SocketException;

void SetOption::init$() {
}

void SetOption::main($StringArray* args) {
	$useLocalObjectStack();
	$var($InetAddress, loopback, $InetAddress::getLoopbackAddress());
	$var($ServerSocket, ss, $new($ServerSocket, 0, 0, loopback));
	$var($Socket, s1, $new($Socket, loopback, ss->getLocalPort()));
	$var($Socket, s2, ss->accept());
	s1->close();
	bool exc_thrown = false;
	try {
		s1->setSoTimeout(1000);
	} catch ($SocketException& e) {
		exc_thrown = true;
	}
	if (!exc_thrown) {
		$throwNew($Exception, "SocketException not thrown on closed socket"_s);
	}
}

SetOption::SetOption() {
}

$Class* SetOption::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SetOption, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SetOption, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SetOption",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SetOption, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SetOption);
	});
	return class$;
}

$Class* SetOption::class$ = nullptr;