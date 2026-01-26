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

$MethodInfo _SetOption_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SetOption, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SetOption, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _SetOption_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SetOption",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SetOption_MethodInfo_
};

$Object* allocate$SetOption($Class* clazz) {
	return $of($alloc(SetOption));
}

void SetOption::init$() {
}

void SetOption::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(SetOption, name, initialize, &_SetOption_ClassInfo_, allocate$SetOption);
	return class$;
}

$Class* SetOption::class$ = nullptr;