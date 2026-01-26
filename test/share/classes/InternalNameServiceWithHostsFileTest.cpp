#include <InternalNameServiceWithHostsFileTest.h>

#include <java/net/InetAddress.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $Arrays = ::java::util::Arrays;

$MethodInfo _InternalNameServiceWithHostsFileTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(InternalNameServiceWithHostsFileTest, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(InternalNameServiceWithHostsFileTest, main, void, $StringArray*), "java.lang.Exception"},
	{"testHostsMapping", "([BLjava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(InternalNameServiceWithHostsFileTest, testHostsMapping, void, $bytes*, $String*), "java.net.UnknownHostException"},
	{"testReverseLookup", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(InternalNameServiceWithHostsFileTest, testReverseLookup, void, $String*, $String*), "java.net.UnknownHostException"},
	{}
};

$ClassInfo _InternalNameServiceWithHostsFileTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"InternalNameServiceWithHostsFileTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_InternalNameServiceWithHostsFileTest_MethodInfo_
};

$Object* allocate$InternalNameServiceWithHostsFileTest($Class* clazz) {
	return $of($alloc(InternalNameServiceWithHostsFileTest));
}

void InternalNameServiceWithHostsFileTest::init$() {
}

void InternalNameServiceWithHostsFileTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, expectedIpv6Address, $new($bytes, {
		(int8_t)254,
		(int8_t)128,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)1
	}));
	$var($bytes, expectedIpv6LocalAddress, $new($bytes, {
		(int8_t)254,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0
	}));
	$var($bytes, expectedIpv4Address, $new($bytes, {
		(int8_t)10,
		(int8_t)2,
		(int8_t)3,
		(int8_t)4
	}));
	$var($bytes, expectedIpv6LocalhostAddress, $new($bytes, {
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)1
	}));
	testHostsMapping(expectedIpv4Address, "testHost.testDomain"_s);
	testHostsMapping(expectedIpv6LocalhostAddress, "ip6-localhost"_s);
	testHostsMapping(expectedIpv6LocalAddress, "ip6-localnet"_s);
	testHostsMapping(expectedIpv6Address, "link-local-host"_s);
	testReverseLookup("10.2.3.4"_s, "testHost.testDomain"_s);
	testReverseLookup("::1"_s, "ip6-localhost"_s);
	testReverseLookup("0:0:0:0:0:0:0:1"_s, "ip6-localhost"_s);
	testReverseLookup("0000:0000:0000:0000:0000:0000:0000:0001"_s, "ip6-localhost"_s);
	testReverseLookup("fe00::0"_s, "ip6-localnet"_s);
	testReverseLookup("fe00:0:0:0:0:0:0:0"_s, "ip6-localnet"_s);
	testReverseLookup("fe00:0000:0000:0000:0000:0000:0000:0000"_s, "ip6-localnet"_s);
	testReverseLookup("fe80::1"_s, "link-local-host"_s);
	testReverseLookup("fe80:000:0:00:0:000:00:1"_s, "link-local-host"_s);
	testReverseLookup("fe80:0000:0000:0000:0000:0000:0000:0001"_s, "link-local-host"_s);
}

void InternalNameServiceWithHostsFileTest::testHostsMapping($bytes* expectedIpAddress, $String* hostName) {
	$useLocalCurrentObjectStackCache();
	$var($InetAddress, testAddress, nullptr);
	$var($bytes, rawIpAddress, nullptr);
	$assign(testAddress, $InetAddress::getByName(hostName));
	$nc($System::out)->println($$str({"############################  InetAddress == "_s, testAddress}));
	$assign(rawIpAddress, $nc(testAddress)->getAddress());
	if (!$Arrays::equals(rawIpAddress, expectedIpAddress)) {
		$var($String, var$0, $$str({"retrieved address == "_s, $($Arrays::toString(rawIpAddress)), " not equal to expected address == "_s}));
		$nc($System::out)->println($$concat(var$0, $($Arrays::toString(expectedIpAddress))));
		$throwNew($RuntimeException, "retrieved address not equal to expected address"_s);
	}
	$var($String, var$1, $$str({"retrieved address == "_s, $($Arrays::toString(rawIpAddress)), " equal to expected address == "_s}));
	$nc($System::out)->println($$concat(var$1, $($Arrays::toString(expectedIpAddress))));
}

void InternalNameServiceWithHostsFileTest::testReverseLookup($String* numericHost, $String* expectedName) {
	$useLocalCurrentObjectStackCache();
	$var($String, lookupResult, $nc($($InetAddress::getByName(numericHost)))->getHostName());
	if (!$nc(expectedName)->equals(lookupResult)) {
		$throwNew($RuntimeException, $($String::format("reverse lookup of \"%s\" is \"%s\", should be \"%s\"\n"_s, $$new($ObjectArray, {
			$of(numericHost),
			$of(lookupResult),
			$of(expectedName)
		}))));
	}
}

InternalNameServiceWithHostsFileTest::InternalNameServiceWithHostsFileTest() {
}

$Class* InternalNameServiceWithHostsFileTest::load$($String* name, bool initialize) {
	$loadClass(InternalNameServiceWithHostsFileTest, name, initialize, &_InternalNameServiceWithHostsFileTest_ClassInfo_, allocate$InternalNameServiceWithHostsFileTest);
	return class$;
}

$Class* InternalNameServiceWithHostsFileTest::class$ = nullptr;