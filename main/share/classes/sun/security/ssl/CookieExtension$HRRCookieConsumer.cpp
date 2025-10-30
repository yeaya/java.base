#include <sun/security/ssl/CookieExtension$HRRCookieConsumer.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/Map.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/CookieExtension$CookieSpec.h>
#include <sun/security/ssl/CookieExtension.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

#undef HRR_COOKIE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Map = ::java::util::Map;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $CookieExtension = ::sun::security::ssl::CookieExtension;
using $CookieExtension$CookieSpec = ::sun::security::ssl::CookieExtension$CookieSpec;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CookieExtension$HRRCookieConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CookieExtension$HRRCookieConsumer::*)()>(&CookieExtension$HRRCookieConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CookieExtension$HRRCookieConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CookieExtension$HRRCookieConsumer", "sun.security.ssl.CookieExtension", "HRRCookieConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CookieExtension$HRRCookieConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CookieExtension$HRRCookieConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_CookieExtension$HRRCookieConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_CookieExtension$HRRCookieConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CookieExtension"
};

$Object* allocate$CookieExtension$HRRCookieConsumer($Class* clazz) {
	return $of($alloc(CookieExtension$HRRCookieConsumer));
}

void CookieExtension$HRRCookieConsumer::init$() {
}

void CookieExtension$HRRCookieConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::HRR_COOKIE)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Ignore unavailable cookie extension"_s, $$new($ObjectArray, 0));
		}
		return;
	}
	$var($CookieExtension$CookieSpec, spec, $new($CookieExtension$CookieSpec, chc, buffer));
	$nc($nc(chc)->handshakeExtensions)->put($SSLExtension::HRR_COOKIE, spec);
}

CookieExtension$HRRCookieConsumer::CookieExtension$HRRCookieConsumer() {
}

$Class* CookieExtension$HRRCookieConsumer::load$($String* name, bool initialize) {
	$loadClass(CookieExtension$HRRCookieConsumer, name, initialize, &_CookieExtension$HRRCookieConsumer_ClassInfo_, allocate$CookieExtension$HRRCookieConsumer);
	return class$;
}

$Class* CookieExtension$HRRCookieConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun