#include <sun/security/ssl/SupportedVersionsExtension$HRRSupportedVersionsReproducer.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/SupportedVersionsExtension.h>
#include <jcpp.h>

#undef HRR_SUPPORTED_VERSIONS

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void SupportedVersionsExtension$HRRSupportedVersionsReproducer::init$() {
}

$bytes* SupportedVersionsExtension$HRRSupportedVersionsReproducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::HRR_SUPPORTED_VERSIONS)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine($$str({"[Reproduce] Ignore unavailable extension: "_s, $SSLExtension::HRR_SUPPORTED_VERSIONS->name$}), $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($bytes, extData, $new($bytes, 2));
	extData->set(0, $nc(shc->negotiatedProtocol)->major);
	extData->set(1, shc->negotiatedProtocol->minor);
	return extData;
}

SupportedVersionsExtension$HRRSupportedVersionsReproducer::SupportedVersionsExtension$HRRSupportedVersionsReproducer() {
}

$Class* SupportedVersionsExtension$HRRSupportedVersionsReproducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SupportedVersionsExtension$HRRSupportedVersionsReproducer, init$, void)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(SupportedVersionsExtension$HRRSupportedVersionsReproducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SupportedVersionsExtension$HRRSupportedVersionsReproducer", "sun.security.ssl.SupportedVersionsExtension", "HRRSupportedVersionsReproducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SupportedVersionsExtension$HRRSupportedVersionsReproducer",
		"java.lang.Object",
		"sun.security.ssl.HandshakeProducer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.SupportedVersionsExtension"
	};
	$loadClass(SupportedVersionsExtension$HRRSupportedVersionsReproducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SupportedVersionsExtension$HRRSupportedVersionsReproducer);
	});
	return class$;
}

$Class* SupportedVersionsExtension$HRRSupportedVersionsReproducer::class$ = nullptr;

		} // ssl
	} // security
} // sun