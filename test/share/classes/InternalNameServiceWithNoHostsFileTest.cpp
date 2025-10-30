#include <InternalNameServiceWithNoHostsFileTest.h>

#include <java/net/InetAddress.h>
#include <java/net/UnknownHostException.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $UnknownHostException = ::java::net::UnknownHostException;

$MethodInfo _InternalNameServiceWithNoHostsFileTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InternalNameServiceWithNoHostsFileTest::*)()>(&InternalNameServiceWithNoHostsFileTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&InternalNameServiceWithNoHostsFileTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _InternalNameServiceWithNoHostsFileTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"InternalNameServiceWithNoHostsFileTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_InternalNameServiceWithNoHostsFileTest_MethodInfo_
};

$Object* allocate$InternalNameServiceWithNoHostsFileTest($Class* clazz) {
	return $of($alloc(InternalNameServiceWithNoHostsFileTest));
}

void InternalNameServiceWithNoHostsFileTest::init$() {
}

void InternalNameServiceWithNoHostsFileTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(InternalNameServiceWithNoHostsFileTest, name, initialize, &_InternalNameServiceWithNoHostsFileTest_ClassInfo_, allocate$InternalNameServiceWithNoHostsFileTest);
	return class$;
}

$Class* InternalNameServiceWithNoHostsFileTest::class$ = nullptr;