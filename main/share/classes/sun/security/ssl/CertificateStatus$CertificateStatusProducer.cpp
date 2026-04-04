#include <sun/security/ssl/CertificateStatus$CertificateStatusProducer.h>
#include <sun/security/ssl/CertificateStatus$CertificateStatusMessage.h>
#include <sun/security/ssl/CertificateStatus.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertificateStatus$CertificateStatusMessage = ::sun::security::ssl::CertificateStatus$CertificateStatusMessage;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void CertificateStatus$CertificateStatusProducer::init$() {
}

$bytes* CertificateStatus$CertificateStatusProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	if (!$nc(shc)->staplingActive) {
		return nullptr;
	}
	$var($CertificateStatus$CertificateStatusMessage, csm, $new($CertificateStatus$CertificateStatusMessage, shc));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced server CertificateStatus handshake message"_s, $$new($ObjectArray, {csm}));
	}
	csm->write(shc->handshakeOutput);
	$nc(shc->handshakeOutput)->flush();
	return nullptr;
}

CertificateStatus$CertificateStatusProducer::CertificateStatus$CertificateStatusProducer() {
}

$Class* CertificateStatus$CertificateStatusProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CertificateStatus$CertificateStatusProducer, init$, void)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(CertificateStatus$CertificateStatusProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CertificateStatus$CertificateStatusProducer", "sun.security.ssl.CertificateStatus", "CertificateStatusProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.CertificateStatus$CertificateStatusProducer",
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
		"sun.security.ssl.CertificateStatus"
	};
	$loadClass(CertificateStatus$CertificateStatusProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertificateStatus$CertificateStatusProducer);
	});
	return class$;
}

$Class* CertificateStatus$CertificateStatusProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun