#include <sun/security/ssl/HelloCookieManager$D13HelloCookieManager.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _HelloCookieManager$D13HelloCookieManager_MethodInfo_[] = {
	{"<init>", "(Ljava/security/SecureRandom;)V", nullptr, 0, $method(static_cast<void(HelloCookieManager$D13HelloCookieManager::*)($SecureRandom*)>(&HelloCookieManager$D13HelloCookieManager::init$))},
	{"createCookie", "(Lsun/security/ssl/ServerHandshakeContext;Lsun/security/ssl/ClientHello$ClientHelloMessage;)[B", nullptr, 0, nullptr, "java.io.IOException"},
	{"isCookieValid", "(Lsun/security/ssl/ServerHandshakeContext;Lsun/security/ssl/ClientHello$ClientHelloMessage;[B)Z", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _HelloCookieManager$D13HelloCookieManager_InnerClassesInfo_[] = {
	{"sun.security.ssl.HelloCookieManager$D13HelloCookieManager", "sun.security.ssl.HelloCookieManager", "D13HelloCookieManager", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _HelloCookieManager$D13HelloCookieManager_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.HelloCookieManager$D13HelloCookieManager",
	"sun.security.ssl.HelloCookieManager",
	nullptr,
	nullptr,
	_HelloCookieManager$D13HelloCookieManager_MethodInfo_,
	nullptr,
	nullptr,
	_HelloCookieManager$D13HelloCookieManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.HelloCookieManager"
};

$Object* allocate$HelloCookieManager$D13HelloCookieManager($Class* clazz) {
	return $of($alloc(HelloCookieManager$D13HelloCookieManager));
}

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
	$loadClass(HelloCookieManager$D13HelloCookieManager, name, initialize, &_HelloCookieManager$D13HelloCookieManager_ClassInfo_, allocate$HelloCookieManager$D13HelloCookieManager);
	return class$;
}

$Class* HelloCookieManager$D13HelloCookieManager::class$ = nullptr;

		} // ssl
	} // security
} // sun