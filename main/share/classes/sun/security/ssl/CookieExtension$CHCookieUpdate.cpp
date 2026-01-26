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
using $Map = ::java::util::Map;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHello$ClientHelloMessage = ::sun::security::ssl::ClientHello$ClientHelloMessage;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $CookieExtension$CookieSpec = ::sun::security::ssl::CookieExtension$CookieSpec;
using $HelloCookieManager = ::sun::security::ssl::HelloCookieManager;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CookieExtension$CHCookieUpdate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(CookieExtension$CHCookieUpdate, init$, void)},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $virtualMethod(CookieExtension$CHCookieUpdate, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
	{}
};

$InnerClassInfo _CookieExtension$CHCookieUpdate_InnerClassesInfo_[] = {
	{"sun.security.ssl.CookieExtension$CHCookieUpdate", "sun.security.ssl.CookieExtension", "CHCookieUpdate", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CookieExtension$CHCookieUpdate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CookieExtension$CHCookieUpdate",
	"java.lang.Object",
	"sun.security.ssl.HandshakeConsumer",
	nullptr,
	_CookieExtension$CHCookieUpdate_MethodInfo_,
	nullptr,
	nullptr,
	_CookieExtension$CHCookieUpdate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CookieExtension"
};

$Object* allocate$CookieExtension$CHCookieUpdate($Class* clazz) {
	return $of($alloc(CookieExtension$CHCookieUpdate));
}

void CookieExtension$CHCookieUpdate::init$() {
}

void CookieExtension$CHCookieUpdate::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(CookieExtension$CHCookieUpdate, name, initialize, &_CookieExtension$CHCookieUpdate_ClassInfo_, allocate$CookieExtension$CHCookieUpdate);
	return class$;
}

$Class* CookieExtension$CHCookieUpdate::class$ = nullptr;

		} // ssl
	} // security
} // sun