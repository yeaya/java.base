#include <sun/security/ssl/HelloCookieManager.h>
#include <sun/security/ssl/ClientHello$ClientHelloMessage.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClientHello$ClientHelloMessage = ::sun::security::ssl::ClientHello$ClientHelloMessage;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void HelloCookieManager::init$() {
}

HelloCookieManager::HelloCookieManager() {
}

$Class* HelloCookieManager::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HelloCookieManager, init$, void)},
		{"createCookie", "(Lsun/security/ssl/ServerHandshakeContext;Lsun/security/ssl/ClientHello$ClientHelloMessage;)[B", nullptr, $ABSTRACT, $virtualMethod(HelloCookieManager, createCookie, $bytes*, $ServerHandshakeContext*, $ClientHello$ClientHelloMessage*), "java.io.IOException"},
		{"isCookieValid", "(Lsun/security/ssl/ServerHandshakeContext;Lsun/security/ssl/ClientHello$ClientHelloMessage;[B)Z", nullptr, $ABSTRACT, $virtualMethod(HelloCookieManager, isCookieValid, bool, $ServerHandshakeContext*, $ClientHello$ClientHelloMessage*, $bytes*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.HelloCookieManager$T13HelloCookieManager", "sun.security.ssl.HelloCookieManager", "T13HelloCookieManager", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.HelloCookieManager$D13HelloCookieManager", "sun.security.ssl.HelloCookieManager", "D13HelloCookieManager", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.HelloCookieManager$D10HelloCookieManager", "sun.security.ssl.HelloCookieManager", "D10HelloCookieManager", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.HelloCookieManager$Builder", "sun.security.ssl.HelloCookieManager", "Builder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"sun.security.ssl.HelloCookieManager",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.ssl.HelloCookieManager$T13HelloCookieManager,sun.security.ssl.HelloCookieManager$D13HelloCookieManager,sun.security.ssl.HelloCookieManager$D10HelloCookieManager,sun.security.ssl.HelloCookieManager$Builder"
	};
	$loadClass(HelloCookieManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HelloCookieManager);
	});
	return class$;
}

$Class* HelloCookieManager::class$ = nullptr;

		} // ssl
	} // security
} // sun