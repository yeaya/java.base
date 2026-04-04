#include <sun/security/ssl/ECPointFormatsExtension$CHECPointFormatsProducer.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ECPointFormatsExtension$ECPointFormatsSpec.h>
#include <sun/security/ssl/ECPointFormatsExtension.h>
#include <sun/security/ssl/NamedGroup$NamedGroupSpec.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

#undef CH_EC_POINT_FORMATS
#undef DEFAULT
#undef NAMED_GROUP_ECDHE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ECPointFormatsExtension$ECPointFormatsSpec = ::sun::security::ssl::ECPointFormatsExtension$ECPointFormatsSpec;
using $NamedGroup$NamedGroupSpec = ::sun::security::ssl::NamedGroup$NamedGroupSpec;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

void ECPointFormatsExtension$CHECPointFormatsProducer::init$() {
}

$bytes* ECPointFormatsExtension$CHECPointFormatsProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::CH_EC_POINT_FORMATS)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Ignore unavailable ec_point_formats extension"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$init($NamedGroup$NamedGroupSpec);
	if ($NamedGroup$NamedGroupSpec::NAMED_GROUP_ECDHE->isSupported(chc->activeCipherSuites)) {
		$var($bytes, extData, $new($bytes, {
			1,
			0
		}));
		$init($ECPointFormatsExtension$ECPointFormatsSpec);
		$nc(chc->handshakeExtensions)->put($SSLExtension::CH_EC_POINT_FORMATS, $ECPointFormatsExtension$ECPointFormatsSpec::DEFAULT);
		return extData;
	}
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Need no ec_point_formats extension"_s, $$new($ObjectArray, 0));
	}
	return nullptr;
}

ECPointFormatsExtension$CHECPointFormatsProducer::ECPointFormatsExtension$CHECPointFormatsProducer() {
}

$Class* ECPointFormatsExtension$CHECPointFormatsProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ECPointFormatsExtension$CHECPointFormatsProducer, init$, void)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(ECPointFormatsExtension$CHECPointFormatsProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ECPointFormatsExtension$CHECPointFormatsProducer", "sun.security.ssl.ECPointFormatsExtension", "CHECPointFormatsProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ECPointFormatsExtension$CHECPointFormatsProducer",
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
		"sun.security.ssl.ECPointFormatsExtension"
	};
	$loadClass(ECPointFormatsExtension$CHECPointFormatsProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ECPointFormatsExtension$CHECPointFormatsProducer);
	});
	return class$;
}

$Class* ECPointFormatsExtension$CHECPointFormatsProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun