#include <sun/security/ssl/SupportedVersionsExtension$SHSupportedVersionsProducer.h>
#include <java/util/Map.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/SupportedVersionsExtension$CHSupportedVersionsSpec.h>
#include <sun/security/ssl/SupportedVersionsExtension$SHSupportedVersionsSpec.h>
#include <sun/security/ssl/SupportedVersionsExtension.h>
#include <jcpp.h>

#undef CH_SUPPORTED_VERSIONS
#undef SH_SUPPORTED_VERSIONS

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $SupportedVersionsExtension$CHSupportedVersionsSpec = ::sun::security::ssl::SupportedVersionsExtension$CHSupportedVersionsSpec;
using $SupportedVersionsExtension$SHSupportedVersionsSpec = ::sun::security::ssl::SupportedVersionsExtension$SHSupportedVersionsSpec;

namespace sun {
	namespace security {
		namespace ssl {

void SupportedVersionsExtension$SHSupportedVersionsProducer::init$() {
}

$bytes* SupportedVersionsExtension$SHSupportedVersionsProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	$var($SupportedVersionsExtension$CHSupportedVersionsSpec, svs, $cast($SupportedVersionsExtension$CHSupportedVersionsSpec, $nc($nc(shc)->handshakeExtensions)->get($SSLExtension::CH_SUPPORTED_VERSIONS)));
	if (svs == nullptr) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::warning("Ignore unavailable supported_versions extension"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	if (!$nc(shc->sslConfig)->isAvailable($SSLExtension::SH_SUPPORTED_VERSIONS)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine($$str({"Ignore unavailable extension: "_s, $SSLExtension::SH_SUPPORTED_VERSIONS->name$}), $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($bytes, extData, $new($bytes, 2));
	extData->set(0, $nc(shc->negotiatedProtocol)->major);
	extData->set(1, shc->negotiatedProtocol->minor);
	shc->handshakeExtensions->put($SSLExtension::SH_SUPPORTED_VERSIONS, $$new($SupportedVersionsExtension$SHSupportedVersionsSpec, shc->negotiatedProtocol));
	return extData;
}

SupportedVersionsExtension$SHSupportedVersionsProducer::SupportedVersionsExtension$SHSupportedVersionsProducer() {
}

$Class* SupportedVersionsExtension$SHSupportedVersionsProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SupportedVersionsExtension$SHSupportedVersionsProducer, init$, void)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(SupportedVersionsExtension$SHSupportedVersionsProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SupportedVersionsExtension$SHSupportedVersionsProducer", "sun.security.ssl.SupportedVersionsExtension", "SHSupportedVersionsProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SupportedVersionsExtension$SHSupportedVersionsProducer",
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
	$loadClass(SupportedVersionsExtension$SHSupportedVersionsProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SupportedVersionsExtension$SHSupportedVersionsProducer);
	});
	return class$;
}

$Class* SupportedVersionsExtension$SHSupportedVersionsProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun