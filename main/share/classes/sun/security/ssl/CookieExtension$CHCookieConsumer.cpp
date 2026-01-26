#include <sun/security/ssl/CookieExtension$CHCookieConsumer.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/Map.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/CookieExtension$CookieSpec.h>
#include <sun/security/ssl/CookieExtension.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <jcpp.h>

#undef CH_COOKIE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Map = ::java::util::Map;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $CookieExtension$CookieSpec = ::sun::security::ssl::CookieExtension$CookieSpec;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CookieExtension$CHCookieConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(CookieExtension$CHCookieConsumer, init$, void)},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(CookieExtension$CHCookieConsumer, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*, $ByteBuffer*), "java.io.IOException"},
	{}
};

$InnerClassInfo _CookieExtension$CHCookieConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CookieExtension$CHCookieConsumer", "sun.security.ssl.CookieExtension", "CHCookieConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CookieExtension$CHCookieConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CookieExtension$CHCookieConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_CookieExtension$CHCookieConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_CookieExtension$CHCookieConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CookieExtension"
};

$Object* allocate$CookieExtension$CHCookieConsumer($Class* clazz) {
	return $of($alloc(CookieExtension$CHCookieConsumer));
}

void CookieExtension$CHCookieConsumer::init$() {
}

void CookieExtension$CHCookieConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::CH_COOKIE)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Ignore unavailable cookie extension"_s, $$new($ObjectArray, 0));
		}
		return;
	}
	$var($CookieExtension$CookieSpec, spec, $new($CookieExtension$CookieSpec, shc, buffer));
	$nc($nc(shc)->handshakeExtensions)->put($SSLExtension::CH_COOKIE, spec);
}

CookieExtension$CHCookieConsumer::CookieExtension$CHCookieConsumer() {
}

$Class* CookieExtension$CHCookieConsumer::load$($String* name, bool initialize) {
	$loadClass(CookieExtension$CHCookieConsumer, name, initialize, &_CookieExtension$CHCookieConsumer_ClassInfo_, allocate$CookieExtension$CHCookieConsumer);
	return class$;
}

$Class* CookieExtension$CHCookieConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun