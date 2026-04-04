#include <InternalNameServiceTest.h>
#include <java/io/BufferedWriter.h>
#include <java/io/FileWriter.h>
#include <java/io/PrintWriter.h>
#include <java/net/InetAddress.h>
#include <java/net/UnknownHostException.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef HOSTS_FILE_NAME

using $BufferedWriter = ::java::io::BufferedWriter;
using $FileWriter = ::java::io::FileWriter;
using $PrintWriter = ::java::io::PrintWriter;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $UnknownHostException = ::java::net::UnknownHostException;
using $Arrays = ::java::util::Arrays;

$String* InternalNameServiceTest::HOSTS_FILE_NAME = nullptr;

void InternalNameServiceTest::init$() {
}

void InternalNameServiceTest::main($StringArray* args) {
	$init(InternalNameServiceTest);
	testHostToIPAddressMappings(InternalNameServiceTest::HOSTS_FILE_NAME);
	testIpAddressToHostNameMappings(InternalNameServiceTest::HOSTS_FILE_NAME);
}

void InternalNameServiceTest::testHostToIPAddressMappings($String* hostsFileName) {
	$init(InternalNameServiceTest);
	$useLocalObjectStack();
	$nc($System::out)->println(" TEST HOST TO  IP ADDRESS MAPPINGS "_s);
	$var($InetAddress, testAddress, nullptr);
	$var($bytes, retrievedIpAddr, nullptr);
	$var($bytes, expectedIpAddr1, $new($bytes, {
		1,
		2,
		3,
		4
	}));
	$var($bytes, expectedIpAddr2, $new($bytes, {
		5,
		6,
		7,
		8
	}));
	$var($bytes, expectedIpAddrIpv6_1, $new($bytes, {
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		1
	}));
	addMappingToHostsFile("test hosts file for internal NameService "_s, "#"_s, hostsFileName, false);
	addMappingToHostsFile("host.sample-domain"_s, "1.2.3.4"_s, hostsFileName, true);
	$assign(testAddress, $InetAddress::getByName("host.sample-domain"_s));
	$assign(retrievedIpAddr, $nc(testAddress)->getAddress());
	if (!$Arrays::equals(retrievedIpAddr, expectedIpAddr1)) {
		$throwNew($RuntimeException, "retrievedIpAddr not equal to expectedipAddr"_s);
	}
	addMappingToHostsFile("host1.sample-domain"_s, "5.6.7.8"_s, hostsFileName, true);
	addMappingToHostsFile("host2.sample-domain"_s, "1.2.3.4"_s, hostsFileName, true);
	$assign(testAddress, $InetAddress::getByName("host1.sample-domain"_s));
	$assign(retrievedIpAddr, $nc(testAddress)->getAddress());
	if (!$Arrays::equals(retrievedIpAddr, expectedIpAddr2)) {
		$throwNew($RuntimeException, "retrievedIpAddr not equal to expectedIpAddr"_s);
	}
	$assign(testAddress, $InetAddress::getByName("host2.sample-domain"_s));
	$assign(retrievedIpAddr, $nc(testAddress)->getAddress());
	if (!$Arrays::equals(retrievedIpAddr, expectedIpAddr1)) {
		$throwNew($RuntimeException, "retrievedIpAddr not equal to expectedIpAddr"_s);
	}
	try {
		addMappingToHostsFile("host3.sample-domain"_s, ""_s, hostsFileName, true);
		$assign(testAddress, $InetAddress::getByName("host3.sample-domain"_s));
		$throwNew($RuntimeException, "Expected UnknownHostException not thrown"_s);
	} catch ($UnknownHostException& uhEx) {
		$System::out->println("UnknownHostException as expected for host host3.sample-domain"_s);
	}
	try {
		addMappingToHostsFile("host4.sample-domain"_s, " "_s, hostsFileName, true);
		$assign(testAddress, $InetAddress::getByName("host4.sample-domain"_s));
		$throwNew($RuntimeException, "Expected UnknownHostException not thrown"_s);
	} catch ($UnknownHostException& uhEx) {
		$System::out->println("UnknownHostException as expected for host host4.sample-domain"_s);
	}
	try {
		addMappingToHostsFile("host5.sample-domain"_s, "  "_s, hostsFileName, true);
		$assign(testAddress, $InetAddress::getByName("host4.sample-domain"_s));
		$throwNew($RuntimeException, "Expected UnknownHostException not thrown"_s);
	} catch ($UnknownHostException& uhEx) {
		$System::out->println("UnknownHostException as expected for host host5.sample-domain"_s);
	}
	addMappingToHostsFile("host-ipv6.sample-domain"_s, "::1"_s, hostsFileName, true);
	$assign(testAddress, $InetAddress::getByName("host-ipv6.sample-domain"_s));
	$assign(retrievedIpAddr, $nc(testAddress)->getAddress());
	if (!$Arrays::equals(retrievedIpAddr, expectedIpAddrIpv6_1)) {
		$System::out->println($$str({"retrieved ipv6 addr == "_s, $($Arrays::toString(retrievedIpAddr))}));
		$System::out->println($$str({"expected ipv6 addr == "_s, $($Arrays::toString(expectedIpAddrIpv6_1))}));
		$throwNew($RuntimeException, "retrieved IPV6 Addr not equal to expected IPV6 Addr"_s);
	}
}

void InternalNameServiceTest::testIpAddressToHostNameMappings($String* hostsFileName) {
	$init(InternalNameServiceTest);
	$useLocalObjectStack();
	$nc($System::out)->println(" TEST IP ADDRESS TO HOST MAPPINGS "_s);
	$var($InetAddress, testAddress, nullptr);
	$var($String, retrievedHost, nullptr);
	$var($String, expectedHost, "testHost.testDomain"_s);
	$var($bytes, testHostIpAddr, $new($bytes, {
		10,
		2,
		3,
		4
	}));
	$var($bytes, testHostIpAddr2, $new($bytes, {
		10,
		5,
		6,
		7
	}));
	$var($bytes, testHostIpAddr3, $new($bytes, {
		10,
		8,
		9,
		10
	}));
	$var($bytes, testHostIpAddr4, $new($bytes, {
		10,
		8,
		9,
		11
	}));
	addMappingToHostsFile("test hosts file for internal NameService "_s, "#"_s, hostsFileName, false);
	addMappingToHostsFile("testHost.testDomain"_s, "10.2.3.4"_s, hostsFileName, true);
	$assign(testAddress, $InetAddress::getByAddress(testHostIpAddr));
	$System::out->println($$str({"*******   testAddress == "_s, testAddress}));
	$assign(retrievedHost, $nc(testAddress)->getHostName());
	if (!expectedHost->equals(retrievedHost)) {
		$throwNew($RuntimeException, "retrieved host name not equal to expected host name"_s);
	}
	addMappingToHostsFile("testHost.testDomain"_s, "10.5.6.7"_s, hostsFileName, true);
	$assign(testAddress, $InetAddress::getByAddress(testHostIpAddr2));
	$System::out->println($$str({"*******   testAddress == "_s, testAddress}));
	$assign(retrievedHost, $nc(testAddress)->getHostName());
	$System::out->println($$str({"*******   retrievedHost == "_s, retrievedHost}));
	if (!expectedHost->equals(retrievedHost)) {
		$throwNew($RuntimeException, $$str({"retrieved host name "_s, retrievedHost, " not equal to expected host name"_s, expectedHost}));
	}
	$assign(testAddress, $InetAddress::getByAddress(testHostIpAddr4));
	$System::out->println($$str({"*******   testAddress == "_s, testAddress}));
	if ("10.8.9.11"_s->equalsIgnoreCase($($nc(testAddress)->getCanonicalHostName()))) {
		$System::out->println($$str({"addr = "_s, $(addrToString(testHostIpAddr4)), "  resolve to a host address as expected"_s}));
	} else {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("addr = "_s);
		var$0->append($(addrToString(testHostIpAddr4)));
		var$0->append(" does not resolve as expected, testAddress == "_s);
		var$0->append($(testAddress->getCanonicalHostName()));
		$System::out->println($$str(var$0));
		$throwNew($RuntimeException, $$str({"problem with resolving "_s, $(addrToString(testHostIpAddr4))}));
	}
	try {
		addMappingToHostsFile(""_s, "10.8.9.10"_s, hostsFileName, true);
		$assign(testAddress, $InetAddress::getByAddress(testHostIpAddr3));
		$System::out->println($$str({"*******   testAddress == "_s, testAddress}));
		$assign(retrievedHost, $nc(testAddress)->getCanonicalHostName());
	} catch ($Throwable& t) {
		$throwNew($RuntimeException, $$str({"problem with resolving "_s, $(addrToString(testHostIpAddr3))}));
	}
}

$String* InternalNameServiceTest::addrToString($bytes* addr) {
	$init(InternalNameServiceTest);
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($Byte::toString($nc(addr)->get(0))));
	var$0->append("."_s);
	var$0->append($($Byte::toString(addr->get(1))));
	var$0->append("."_s);
	var$0->append($($Byte::toString(addr->get(2))));
	var$0->append("."_s);
	var$0->append($($Byte::toString(addr->get(3))));
	return $str(var$0);
}

void InternalNameServiceTest::addMappingToHostsFile($String* host, $String* addr, $String* hostsFileName, bool append) {
	$init(InternalNameServiceTest);
	$useLocalObjectStack();
	$var($String, mapping, $str({addr, " "_s, host}));
	{
		$var($PrintWriter, hfPWriter, $new($PrintWriter, $$new($BufferedWriter, $$new($FileWriter, hostsFileName, append))));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				hfPWriter->println(mapping);
			} catch ($Throwable& t$) {
				try {
					hfPWriter->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			hfPWriter->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void InternalNameServiceTest::clinit$($Class* clazz) {
	$assignStatic(InternalNameServiceTest::HOSTS_FILE_NAME, $System::getProperty("jdk.net.hosts.file"_s));
}

InternalNameServiceTest::InternalNameServiceTest() {
}

$Class* InternalNameServiceTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"HOSTS_FILE_NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(InternalNameServiceTest, HOSTS_FILE_NAME)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InternalNameServiceTest, init$, void)},
		{"addMappingToHostsFile", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PRIVATE | $STATIC, $staticMethod(InternalNameServiceTest, addMappingToHostsFile, void, $String*, $String*, $String*, bool), "java.lang.Exception"},
		{"addrToString", "([B)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(InternalNameServiceTest, addrToString, $String*, $bytes*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(InternalNameServiceTest, main, void, $StringArray*), "java.lang.Exception"},
		{"testHostToIPAddressMappings", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(InternalNameServiceTest, testHostToIPAddressMappings, void, $String*), "java.lang.Exception,java.net.UnknownHostException"},
		{"testIpAddressToHostNameMappings", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(InternalNameServiceTest, testIpAddressToHostNameMappings, void, $String*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"InternalNameServiceTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InternalNameServiceTest, name, initialize, &classInfo$$, InternalNameServiceTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(InternalNameServiceTest);
	});
	return class$;
}

$Class* InternalNameServiceTest::class$ = nullptr;