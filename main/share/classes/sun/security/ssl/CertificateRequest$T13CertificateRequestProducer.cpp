#include <sun/security/ssl/CertificateRequest$T13CertificateRequestProducer.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <sun/security/ssl/CertificateRequest$T13CertificateRequestMessage.h>
#include <sun/security/ssl/CertificateRequest.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLExtensions.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <jcpp.h>

#undef CERTIFICATE
#undef CERTIFICATE_REQUEST
#undef CERTIFICATE_VERIFY

using $SSLExtensionArray = $Array<::sun::security::ssl::SSLExtension>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertificateRequest$T13CertificateRequestMessage = ::sun::security::ssl::CertificateRequest$T13CertificateRequestMessage;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void CertificateRequest$T13CertificateRequestProducer::init$() {
}

$bytes* CertificateRequest$T13CertificateRequestProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$var($CertificateRequest$T13CertificateRequestMessage, crm, $new($CertificateRequest$T13CertificateRequestMessage, shc));
	$init($SSLHandshake);
	$var($SSLExtensionArray, extTypes, $nc($nc(shc)->sslConfig)->getEnabledExtensions($SSLHandshake::CERTIFICATE_REQUEST, $nc(shc)->negotiatedProtocol));
	$nc(crm->extensions)->produce(shc, extTypes);
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced CertificateRequest message"_s, $$new($ObjectArray, {crm}));
	}
	crm->write(shc->handshakeOutput);
	$nc(shc->handshakeOutput)->flush();
	$set(shc, certRequestContext, $cast($bytes, $nc(crm->requestContext)->clone()));
	$nc(shc->handshakeConsumers)->put($($Byte::valueOf($SSLHandshake::CERTIFICATE->id)), $SSLHandshake::CERTIFICATE);
	shc->handshakeConsumers->put($($Byte::valueOf($SSLHandshake::CERTIFICATE_VERIFY->id)), $SSLHandshake::CERTIFICATE_VERIFY);
	return nullptr;
}

CertificateRequest$T13CertificateRequestProducer::CertificateRequest$T13CertificateRequestProducer() {
}

$Class* CertificateRequest$T13CertificateRequestProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CertificateRequest$T13CertificateRequestProducer, init$, void)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(CertificateRequest$T13CertificateRequestProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CertificateRequest$T13CertificateRequestProducer", "sun.security.ssl.CertificateRequest", "T13CertificateRequestProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.CertificateRequest$T13CertificateRequestProducer",
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
		"sun.security.ssl.CertificateRequest"
	};
	$loadClass(CertificateRequest$T13CertificateRequestProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertificateRequest$T13CertificateRequestProducer);
	});
	return class$;
}

$Class* CertificateRequest$T13CertificateRequestProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun