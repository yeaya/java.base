#include <sun/security/ssl/HelloCookieManager$D13HelloCookieManager.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/security/SecureRandom.h>
#include <sun/security/ssl/ClientHello$ClientHelloMessage.h>
#include <sun/security/ssl/HelloCookieManager.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $SecureRandom = ::java::security::SecureRandom;
using $ClientHello$ClientHelloMessage = ::sun::security::ssl::ClientHello$ClientHelloMessage;
using $HelloCookieManager = ::sun::security::ssl::HelloCookieManager;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void HelloCookieManager$D13HelloCookieManager::init$($SecureRandom* secureRandom) {
	$HelloCookieManager::init$();
}

$bytes* HelloCookieManager$D13HelloCookieManager::createCookie($ServerHandshakeContext* context, $ClientHello$ClientHelloMessage* clientHello) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

bool HelloCookieManager$D13HelloCookieManager::isCookieValid($ServerHandshakeContext* context, $ClientHello$ClientHelloMessage* clientHello, $bytes* cookie) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

HelloCookieManager$D13HelloCookieManager::HelloCookieManager$D13HelloCookieManager() {
}

$Class* HelloCookieManager$D13HelloCookieManager::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/SecureRandom;)V", nullptr, 0, $method(HelloCookieManager$D13HelloCookieManager, init$, void, $SecureRandom*)},
		{"createCookie", "(Lsun/security/ssl/ServerHandshakeContext;Lsun/security/ssl/ClientHello$ClientHelloMessage;)[B", nullptr, 0, $virtualMethod(HelloCookieManager$D13HelloCookieManager, createCookie, $bytes*, $ServerHandshakeContext*, $ClientHello$ClientHelloMessage*), "java.io.IOException"},
		{"isCookieValid", "(Lsun/security/ssl/ServerHandshakeContext;Lsun/security/ssl/ClientHello$ClientHelloMessage;[B)Z", nullptr, 0, $virtualMethod(HelloCookieManager$D13HelloCookieManager, isCookieValid, bool, $ServerHandshakeContext*, $ClientHello$ClientHelloMessage*, $bytes*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.HelloCookieManager$D13HelloCookieManager", "sun.security.ssl.HelloCookieManager", "D13HelloCookieManager", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.HelloCookieManager$D13HelloCookieManager",
		"sun.security.ssl.HelloCookieManager",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.HelloCookieManager"
	};
	$loadClass(HelloCookieManager$D13HelloCookieManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HelloCookieManager$D13HelloCookieManager);
	});
	return class$;
}

$Class* HelloCookieManager$D13HelloCookieManager::class$ = nullptr;

		} // ssl
	} // security
} // sun