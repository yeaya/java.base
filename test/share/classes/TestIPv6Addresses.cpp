#include <TestIPv6Addresses.h>
#include <java/lang/SecurityManager.h>
#include <java/net/InetAddress.h>
#include <java/net/SocketPermission.h>
#include <java/net/URL.h>
#include <java/net/UnknownHostException.h>
#include <java/security/AccessControlException.h>
#include <jcpp.h>

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

void TestIPv6Addresses::init$() {
}

void TestIPv6Addresses::main($StringArray* args) {
	$useLocalObjectStack();
	$load(TestIPv6Addresses);
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
		bool var$0 = !$$nc(u1->getHost())->equals($(u2->getHost()));
		if (var$0 || !$$nc(u1->getHost())->equals("[fe80::a00:20ff:feae:45c9]"_s)) {
			$throwNew($RuntimeException, "URL.getHost() failed forliteral IPv6 addresses"_s);
		}
		if (!$$nc(u1->getAuthority())->equals("[fe80::a00:20ff:feae:45c9]:80"_s)) {
			$throwNew($RuntimeException, "URL.getAuthority() failed forliteral IPv6 addresses"_s);
		}
		$var($SocketPermission, sp1, $new($SocketPermission, $$str({$(u1->getHost()), ":80-"_s}), "resolve"_s));
		$var($SocketPermission, sp2, $new($SocketPermission, $$str({$(ia1->getHostAddress()), ":8080"_s}), "resolve"_s));
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestIPv6Addresses, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestIPv6Addresses, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestIPv6Addresses",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TestIPv6Addresses, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestIPv6Addresses);
	});
	return class$;
}

$Class* TestIPv6Addresses::class$ = nullptr;