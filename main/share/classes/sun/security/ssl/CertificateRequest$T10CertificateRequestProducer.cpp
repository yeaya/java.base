#include <sun/security/ssl/CertificateRequest$T10CertificateRequestProducer.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <javax/net/ssl/X509TrustManager.h>
#include <sun/security/ssl/CertificateRequest$T10CertificateRequestMessage.h>
#include <sun/security/ssl/CertificateRequest.h>
#include <sun/security/ssl/CipherSuite$KeyExchange.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <jcpp.h>

#undef CERTIFICATE
#undef CERTIFICATE_VERIFY

using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertificateRequest$T10CertificateRequestMessage = ::sun::security::ssl::CertificateRequest$T10CertificateRequestMessage;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void CertificateRequest$T10CertificateRequestProducer::init$() {
}

$bytes* CertificateRequest$T10CertificateRequestProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$var($X509CertificateArray, caCerts, $$nc($nc($nc(shc)->sslContext)->getX509TrustManager())->getAcceptedIssuers());
	$var($CertificateRequest$T10CertificateRequestMessage, crm, $new($CertificateRequest$T10CertificateRequestMessage, shc, caCerts, $nc(shc->negotiatedCipherSuite)->keyExchange));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced CertificateRequest handshake message"_s, $$new($ObjectArray, {crm}));
	}
	crm->write(shc->handshakeOutput);
	$nc(shc->handshakeOutput)->flush();
	$init($SSLHandshake);
	$nc(shc->handshakeConsumers)->put($($Byte::valueOf($SSLHandshake::CERTIFICATE->id)), $SSLHandshake::CERTIFICATE);
	shc->handshakeConsumers->put($($Byte::valueOf($SSLHandshake::CERTIFICATE_VERIFY->id)), $SSLHandshake::CERTIFICATE_VERIFY);
	return nullptr;
}

CertificateRequest$T10CertificateRequestProducer::CertificateRequest$T10CertificateRequestProducer() {
}

$Class* CertificateRequest$T10CertificateRequestProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CertificateRequest$T10CertificateRequestProducer, init$, void)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(CertificateRequest$T10CertificateRequestProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CertificateRequest$T10CertificateRequestProducer", "sun.security.ssl.CertificateRequest", "T10CertificateRequestProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.CertificateRequest$T10CertificateRequestProducer",
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
	$loadClass(CertificateRequest$T10CertificateRequestProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertificateRequest$T10CertificateRequestProducer);
	});
	return class$;
}

$Class* CertificateRequest$T10CertificateRequestProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun