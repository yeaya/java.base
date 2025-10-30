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

$MethodInfo _HelloCookieManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HelloCookieManager::*)()>(&HelloCookieManager::init$))},
	{"createCookie", "(Lsun/security/ssl/ServerHandshakeContext;Lsun/security/ssl/ClientHello$ClientHelloMessage;)[B", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{"isCookieValid", "(Lsun/security/ssl/ServerHandshakeContext;Lsun/security/ssl/ClientHello$ClientHelloMessage;[B)Z", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _HelloCookieManager_InnerClassesInfo_[] = {
	{"sun.security.ssl.HelloCookieManager$T13HelloCookieManager", "sun.security.ssl.HelloCookieManager", "T13HelloCookieManager", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.HelloCookieManager$D13HelloCookieManager", "sun.security.ssl.HelloCookieManager", "D13HelloCookieManager", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.HelloCookieManager$D10HelloCookieManager", "sun.security.ssl.HelloCookieManager", "D10HelloCookieManager", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.HelloCookieManager$Builder", "sun.security.ssl.HelloCookieManager", "Builder", $STATIC},
	{}
};

$ClassInfo _HelloCookieManager_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.security.ssl.HelloCookieManager",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HelloCookieManager_MethodInfo_,
	nullptr,
	nullptr,
	_HelloCookieManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.HelloCookieManager$T13HelloCookieManager,sun.security.ssl.HelloCookieManager$D13HelloCookieManager,sun.security.ssl.HelloCookieManager$D10HelloCookieManager,sun.security.ssl.HelloCookieManager$Builder"
};

$Object* allocate$HelloCookieManager($Class* clazz) {
	return $of($alloc(HelloCookieManager));
}

void HelloCookieManager::init$() {
}

HelloCookieManager::HelloCookieManager() {
}

$Class* HelloCookieManager::load$($String* name, bool initialize) {
	$loadClass(HelloCookieManager, name, initialize, &_HelloCookieManager_ClassInfo_, allocate$HelloCookieManager);
	return class$;
}

$Class* HelloCookieManager::class$ = nullptr;

		} // ssl
	} // security
} // sun