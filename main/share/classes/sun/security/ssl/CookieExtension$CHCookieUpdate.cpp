#include <sun/security/ssl/CookieExtension$CHCookieUpdate.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientHello$ClientHelloMessage.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/CookieExtension$CookieSpec.h>
#include <sun/security/ssl/CookieExtension.h>
#include <sun/security/ssl/HelloCookieManager.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_COOKIE
#undef UNEXPECTED_MESSAGE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHello$ClientHelloMessage = ::sun::security::ssl::ClientHello$ClientHelloMessage;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $CookieExtension$CookieSpec = ::sun::security::ssl::CookieExtension$CookieSpec;
using $HelloCookieManager = ::sun::security::ssl::HelloCookieManager;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void CookieExtension$CHCookieUpdate::init$() {
}

void CookieExtension$CHCookieUpdate::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$var($ClientHello$ClientHelloMessage, clientHello, $cast($ClientHello$ClientHelloMessage, message));
	$init($SSLExtension);
	$var($CookieExtension$CookieSpec, spec, $cast($CookieExtension$CookieSpec, $nc($nc(shc)->handshakeExtensions)->get($SSLExtension::CH_COOKIE)));
	if (spec == nullptr) {
		return;
	}
	$var($HelloCookieManager, hcm, $nc(shc->sslContext)->getHelloCookieManager(shc->negotiatedProtocol));
	if (!$nc(hcm)->isCookieValid(shc, clientHello, $nc(spec)->cookie)) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "unrecognized cookie"_s)));
	}
}

CookieExtension$CHCookieUpdate::CookieExtension$CHCookieUpdate() {
}

$Class* CookieExtension$CHCookieUpdate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CookieExtension$CHCookieUpdate, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $virtualMethod(CookieExtension$CHCookieUpdate, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CookieExtension$CHCookieUpdate", "sun.security.ssl.CookieExtension", "CHCookieUpdate", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.CookieExtension$CHCookieUpdate",
		"java.lang.Object",
		"sun.security.ssl.HandshakeConsumer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.CookieExtension"
	};
	$loadClass(CookieExtension$CHCookieUpdate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CookieExtension$CHCookieUpdate);
	});
	return class$;
}

$Class* CookieExtension$CHCookieUpdate::class$ = nullptr;

		} // ssl
	} // security
} // sun