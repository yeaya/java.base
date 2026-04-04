#include <InternalNameServiceWithNoHostsFileTest.h>
#include <java/net/InetAddress.h>
#include <java/net/UnknownHostException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $UnknownHostException = ::java::net::UnknownHostException;

void InternalNameServiceWithNoHostsFileTest::init$() {
}

void InternalNameServiceWithNoHostsFileTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($InetAddress, testAddress, nullptr);
	try {
		$assign(testAddress, $InetAddress::getByName("host.sample-domain"_s));
		$throwNew($RuntimeException, "UnknownHostException expected"_s);
	} catch ($UnknownHostException& uhEx) {
		$nc($System::out)->println($$str({"UHE caught as expected == "_s, $(uhEx->getMessage())}));
	}
}

InternalNameServiceWithNoHostsFileTest::InternalNameServiceWithNoHostsFileTest() {
}

$Class* InternalNameServiceWithNoHostsFileTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InternalNameServiceWithNoHostsFileTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(InternalNameServiceWithNoHostsFileTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"InternalNameServiceWithNoHostsFileTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(InternalNameServiceWithNoHostsFileTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InternalNameServiceWithNoHostsFileTest);
	});
	return class$;
}

$Class* InternalNameServiceWithNoHostsFileTest::class$ = nullptr;