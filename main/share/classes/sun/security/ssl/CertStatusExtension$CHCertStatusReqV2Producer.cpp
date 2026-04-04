#include <sun/security/ssl/CertStatusExtension$CHCertStatusReqV2Producer.h>
#include <java/util/Map.h>
#include <sun/security/ssl/CertStatusExtension$CertStatusRequestV2Spec.h>
#include <sun/security/ssl/CertStatusExtension.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

#undef CH_STATUS_REQUEST_V2
#undef DEFAULT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertStatusExtension$CertStatusRequestV2Spec = ::sun::security::ssl::CertStatusExtension$CertStatusRequestV2Spec;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

void CertStatusExtension$CHCertStatusReqV2Producer::init$() {
}

$bytes* CertStatusExtension$CHCertStatusReqV2Producer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	if (!$nc($nc(chc)->sslContext)->isStaplingEnabled(true)) {
		return nullptr;
	}
	$init($SSLExtension);
	if (!$nc(chc->sslConfig)->isAvailable($SSLExtension::CH_STATUS_REQUEST_V2)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::finest("Ignore unavailable status_request_v2 extension"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($bytes, extData, $new($bytes, {
		0,
		7,
		2,
		0,
		4,
		0,
		0,
		0,
		0
	}));
	$init($CertStatusExtension$CertStatusRequestV2Spec);
	$nc(chc->handshakeExtensions)->put($SSLExtension::CH_STATUS_REQUEST_V2, $CertStatusExtension$CertStatusRequestV2Spec::DEFAULT);
	return extData;
}

CertStatusExtension$CHCertStatusReqV2Producer::CertStatusExtension$CHCertStatusReqV2Producer() {
}

$Class* CertStatusExtension$CHCertStatusReqV2Producer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CertStatusExtension$CHCertStatusReqV2Producer, init$, void)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(CertStatusExtension$CHCertStatusReqV2Producer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CertStatusExtension$CHCertStatusReqV2Producer", "sun.security.ssl.CertStatusExtension", "CHCertStatusReqV2Producer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.CertStatusExtension$CHCertStatusReqV2Producer",
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
		"sun.security.ssl.CertStatusExtension"
	};
	$loadClass(CertStatusExtension$CHCertStatusReqV2Producer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertStatusExtension$CHCertStatusReqV2Producer);
	});
	return class$;
}

$Class* CertStatusExtension$CHCertStatusReqV2Producer::class$ = nullptr;

		} // ssl
	} // security
} // sun