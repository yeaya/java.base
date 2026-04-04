#include <IsReachableViaLoopbackTest.h>
#include <java/io/IOException.h>
#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $NetworkInterface = ::java::net::NetworkInterface;

void IsReachableViaLoopbackTest::init$() {
}

void IsReachableViaLoopbackTest::main($StringArray* args) {
	$useLocalObjectStack();
	try {
		$var($InetAddress, addr, $InetAddress::getByName("localhost"_s));
		$var($InetAddress, remoteAddr, $InetAddress::getByName("bugs.openjdk.java.net"_s));
		if (!$nc(addr)->isReachable(10000)) {
			$throwNew($RuntimeException, "Localhost should always be reachable"_s);
		}
		$var($NetworkInterface, inf, $NetworkInterface::getByInetAddress(addr));
		if (inf != nullptr) {
			if (!addr->isReachable(inf, 20, 10000)) {
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IsReachableViaLoopbackTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(IsReachableViaLoopbackTest, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"IsReachableViaLoopbackTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(IsReachableViaLoopbackTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IsReachableViaLoopbackTest);
	});
	return class$;
}

$Class* IsReachableViaLoopbackTest::class$ = nullptr;