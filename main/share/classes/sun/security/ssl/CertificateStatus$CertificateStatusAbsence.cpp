#include <sun/security/ssl/CertificateStatus$CertificateStatusAbsence.h>
#include <java/security/cert/X509Certificate.h>
#include <sun/security/ssl/CertificateMessage$T12CertificateConsumer.h>
#include <sun/security/ssl/CertificateStatus.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertificateMessage$T12CertificateConsumer = ::sun::security::ssl::CertificateMessage$T12CertificateConsumer;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

void CertificateStatus$CertificateStatusAbsence::init$() {
}

void CertificateStatus$CertificateStatusAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	if ($nc(chc)->staplingActive) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Server did not send CertificateStatus, checking cert chain without status info."_s, $$new($ObjectArray, 0));
		}
		$CertificateMessage$T12CertificateConsumer::checkServerCerts(chc, chc->deferredCerts);
	}
}

CertificateStatus$CertificateStatusAbsence::CertificateStatus$CertificateStatusAbsence() {
}

$Class* CertificateStatus$CertificateStatusAbsence::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CertificateStatus$CertificateStatusAbsence, init$, void)},
		{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $virtualMethod(CertificateStatus$CertificateStatusAbsence, absent, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CertificateStatus$CertificateStatusAbsence", "sun.security.ssl.CertificateStatus", "CertificateStatusAbsence", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.CertificateStatus$CertificateStatusAbsence",
		"java.lang.Object",
		"sun.security.ssl.HandshakeAbsence",
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
	$loadClass(CertificateStatus$CertificateStatusAbsence, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertificateStatus$CertificateStatusAbsence);
	});
	return class$;
}

$Class* CertificateStatus$CertificateStatusAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun