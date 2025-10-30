#include <IsReachableViaLoopbackTest.h>

#include <java/io/IOException.h>
#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $NetworkInterface = ::java::net::NetworkInterface;

$MethodInfo _IsReachableViaLoopbackTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IsReachableViaLoopbackTest::*)()>(&IsReachableViaLoopbackTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&IsReachableViaLoopbackTest::main))},
	{}
};

$ClassInfo _IsReachableViaLoopbackTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IsReachableViaLoopbackTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_IsReachableViaLoopbackTest_MethodInfo_
};

$Object* allocate$IsReachableViaLoopbackTest($Class* clazz) {
	return $of($alloc(IsReachableViaLoopbackTest));
}

void IsReachableViaLoopbackTest::init$() {
}

void IsReachableViaLoopbackTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($InetAddress, addr, $InetAddress::getByName("localhost"_s));
		$var($InetAddress, remoteAddr, $InetAddress::getByName("bugs.openjdk.java.net"_s));
		if (!$nc(addr)->isReachable(10000)) {
			$throwNew($RuntimeException, "Localhost should always be reachable"_s);
		}
		$var($NetworkInterface, inf, $NetworkInterface::getByInetAddress(addr));
		if (inf != nullptr) {
			if (!$nc(addr)->isReachable(inf, 20, 10000)) {
				$throwNew($RuntimeException, "Localhost should always be reachable"_s);
			} else {
				$nc($System::out)->println($$str({addr, "  is reachable"_s}));
			}
			if ($nc(remoteAddr)->isReachable(inf, 20, 10000)) {
				$throwNew($RuntimeException, $$str({remoteAddr, " is reachable"_s}));
			} else {
				$nc($System::out)->println($$str({remoteAddr, "  is NOT reachable"_s}));
			}
		} else {
			$nc($System::out)->println("inf == null"_s);
		}
	} catch ($IOException& e) {
		$throwNew($RuntimeException, $$str({"Unexpected exception:"_s, e}));
	}
	$nc($System::out)->println("IsReachableViaLoopbackTest EXIT"_s);
}

IsReachableViaLoopbackTest::IsReachableViaLoopbackTest() {
}

$Class* IsReachableViaLoopbackTest::load$($String* name, bool initialize) {
	$loadClass(IsReachableViaLoopbackTest, name, initialize, &_IsReachableViaLoopbackTest_ClassInfo_, allocate$IsReachableViaLoopbackTest);
	return class$;
}

$Class* IsReachableViaLoopbackTest::class$ = nullptr;