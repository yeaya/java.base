#include <TestIPv6Addresses.h>

#include <java/lang/SecurityManager.h>
#include <java/net/InetAddress.h>
#include <java/net/SocketPermission.h>
#include <java/net/URL.h>
#include <java/net/UnknownHostException.h>
#include <java/security/AccessControlException.h>
#include <java/security/Permission.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $InetAddress = ::java::net::InetAddress;
using $SocketPermission = ::java::net::SocketPermission;
using $URL = ::java::net::URL;
using $UnknownHostException = ::java::net::UnknownHostException;
using $AccessControlException = ::java::security::AccessControlException;
using $Permission = ::java::security::Permission;

$MethodInfo _TestIPv6Addresses_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestIPv6Addresses::*)()>(&TestIPv6Addresses::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestIPv6Addresses::main))},
	{}
};

$ClassInfo _TestIPv6Addresses_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestIPv6Addresses",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestIPv6Addresses_MethodInfo_
};

$Object* allocate$TestIPv6Addresses($Class* clazz) {
	return $of($alloc(TestIPv6Addresses));
}

void TestIPv6Addresses::init$() {
}

void TestIPv6Addresses::main($StringArray* args) {
	$load(TestIPv6Addresses);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$var($InetAddress, ia1, $InetAddress::getByName("fe80::a00:20ff:feae:45c9"_s));
		$var($InetAddress, ia2, $InetAddress::getByName("[fe80::a00:20ff:feae:45c9]"_s));
		$nc($System::out)->println($$str({"InetAddress: "_s, ia1, " , "_s, ia2}));
		if (!$nc(ia1)->equals(ia2)) {
			$throwNew($RuntimeException, "InetAddress.getByName failed forliteral IPv6 addresses"_s);
		}
		$var($URL, u1, $new($URL, "http"_s, "fe80::a00:20ff:feae:45c9"_s, 80, "/index.html"_s));
		$var($URL, u2, $new($URL, "http"_s, "[fe80::a00:20ff:feae:45c9]"_s, 80, "/index.html"_s));
		if (!u1->equals(u2)) {
			$throwNew($RuntimeException, "URL constructor failed forliteral IPv6 addresses"_s);
		}
		bool var$0 = !$nc($(u1->getHost()))->equals($(u2->getHost()));
		if (var$0 || !$nc($(u1->getHost()))->equals("[fe80::a00:20ff:feae:45c9]"_s)) {
			$throwNew($RuntimeException, "URL.getHost() failed forliteral IPv6 addresses"_s);
		}
		if (!$nc($(u1->getAuthority()))->equals("[fe80::a00:20ff:feae:45c9]:80"_s)) {
			$throwNew($RuntimeException, "URL.getAuthority() failed forliteral IPv6 addresses"_s);
		}
		$var($SocketPermission, sp1, $new($SocketPermission, $$str({$(u1->getHost()), ":80-"_s}), "resolve"_s));
		$var($SocketPermission, sp2, $new($SocketPermission, $$str({$($nc(ia1)->getHostAddress()), ":8080"_s}), "resolve"_s));
		if (!sp1->implies(sp2)) {
			$throwNew($RuntimeException, "SocketPermission implies doesn\'t work for literal IPv6 addresses"_s);
		}
	} catch ($Exception& e) {
		$throwNew($RuntimeException, $(e->getMessage()));
	}
	$var($SecurityManager, sm, $new($SecurityManager));
	$var($String, strAddr, "::FFFF:127.0.0.1.2"_s);
	try {
		$var($InetAddress, addr, $InetAddress::getByName(strAddr));
	} catch ($UnknownHostException& e) {
	}
	$System::setSecurityManager(sm);
	try {
		$var($InetAddress, addr, $InetAddress::getByName(strAddr));
	} catch ($AccessControlException& e) {
	} catch ($UnknownHostException& e) {
	}
}

TestIPv6Addresses::TestIPv6Addresses() {
}

$Class* TestIPv6Addresses::load$($String* name, bool initialize) {
	$loadClass(TestIPv6Addresses, name, initialize, &_TestIPv6Addresses_ClassInfo_, allocate$TestIPv6Addresses);
	return class$;
}

$Class* TestIPv6Addresses::class$ = nullptr;