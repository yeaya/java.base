#include <sun/security/ssl/CertStatusExtension$CHCertStatusReqProducer.h>
#include <java/util/Map.h>
#include <sun/security/ssl/CertStatusExtension$CertStatusRequestSpec.h>
#include <sun/security/ssl/CertStatusExtension.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

#undef CH_STATUS_REQUEST
#undef DEFAULT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertStatusExtension$CertStatusRequestSpec = ::sun::security::ssl::CertStatusExtension$CertStatusRequestSpec;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

void CertStatusExtension$CHCertStatusReqProducer::init$() {
}

$bytes* CertStatusExtension$CHCertStatusReqProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	if (!$nc($nc(chc)->sslContext)->isStaplingEnabled(true)) {
		return nullptr;
	}
	$init($SSLExtension);
	if (!$nc(chc->sslConfig)->isAvailable($SSLExtension::CH_STATUS_REQUEST)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine($$str({"Ignore unavailable extension: "_s, $SSLExtension::CH_STATUS_REQUEST->name$}), $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($bytes, extData, $new($bytes, {
		1,
		0,
		0,
		0,
		0
	}));
	$init($CertStatusExtension$CertStatusRequestSpec);
	$nc(chc->handshakeExtensions)->put($SSLExtension::CH_STATUS_REQUEST, $CertStatusExtension$CertStatusRequestSpec::DEFAULT);
	return extData;
}

CertStatusExtension$CHCertStatusReqProducer::CertStatusExtension$CHCertStatusReqProducer() {
}

$Class* CertStatusExtension$CHCertStatusReqProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CertStatusExtension$CHCertStatusReqProducer, init$, void)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(CertStatusExtension$CHCertStatusReqProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CertStatusExtension$CHCertStatusReqProducer", "sun.security.ssl.CertStatusExtension", "CHCertStatusReqProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.CertStatusExtension$CHCertStatusReqProducer",
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
	$loadClass(CertStatusExtension$CHCertStatusReqProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertStatusExtension$CHCertStatusReqProducer);
	});
	return class$;
}

$Class* CertStatusExtension$CHCertStatusReqProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun