#include <BigBacklog.h>

#include <java/net/InetAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <jcpp.h>

#undef MAX_VALUE

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;

$MethodInfo _BigBacklog_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(BigBacklog, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BigBacklog, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _BigBacklog_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"BigBacklog",
	"java.lang.Object",
	nullptr,
	nullptr,
	_BigBacklog_MethodInfo_
};

$Object* allocate$BigBacklog($Class* clazz) {
	return $of($alloc(BigBacklog));
}

void BigBacklog::init$() {
}

void BigBacklog::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($ServerSocket, soc, nullptr);
	$var($Socket, csoc, nullptr);
	int32_t port = 0;
	try {
		$assign(soc, $new($ServerSocket, port, $Integer::MAX_VALUE));
		port = soc->getLocalPort();
	} catch ($Exception& e) {
		$nc($System::err)->println($$str({"Failed. Unexpected exception:"_s, e}));
		$throw(e);
	}
	try {
		$assign(csoc, $new($Socket, $($InetAddress::getLocalHost()), port));
	} catch ($Exception& e) {
		$nc($System::err)->println($$str({"Failed. Unexpected exception:"_s, e}));
		$throw(e);
	}
	try {
		$nc(soc)->close();
		$nc(csoc)->close();
	} catch ($Exception& e) {
	}
	$nc($System::err)->println("Passed. OKAY"_s);
}

BigBacklog::BigBacklog() {
}

$Class* BigBacklog::load$($String* name, bool initialize) {
	$loadClass(BigBacklog, name, initialize, &_BigBacklog_ClassInfo_, allocate$BigBacklog);
	return class$;
}

$Class* BigBacklog::class$ = nullptr;