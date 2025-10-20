#include <sun/security/ssl/CertificateStatus$CertificateStatusAbsence.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/cert/X509Certificate.h>
#include <sun/security/ssl/CertificateMessage$T12CertificateConsumer.h>
#include <sun/security/ssl/CertificateStatus.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertificateMessage$T12CertificateConsumer = ::sun::security::ssl::CertificateMessage$T12CertificateConsumer;
using $CertificateStatus = ::sun::security::ssl::CertificateStatus;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeAbsence = ::sun::security::ssl::HandshakeAbsence;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertificateStatus$CertificateStatusAbsence_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertificateStatus$CertificateStatusAbsence::*)()>(&CertificateStatus$CertificateStatusAbsence::init$))},
	{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CertificateStatus$CertificateStatusAbsence_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertificateStatus$CertificateStatusAbsence", "sun.security.ssl.CertificateStatus", "CertificateStatusAbsence", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CertificateStatus$CertificateStatusAbsence_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertificateStatus$CertificateStatusAbsence",
	"java.lang.Object",
	"sun.security.ssl.HandshakeAbsence",
	nullptr,
	_CertificateStatus$CertificateStatusAbsence_MethodInfo_,
	nullptr,
	nullptr,
	_CertificateStatus$CertificateStatusAbsence_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertificateStatus"
};

$Object* allocate$CertificateStatus$CertificateStatusAbsence($Class* clazz) {
	return $of($alloc(CertificateStatus$CertificateStatusAbsence));
}

void CertificateStatus$CertificateStatusAbsence::init$() {
}

void CertificateStatus$CertificateStatusAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(CertificateStatus$CertificateStatusAbsence, name, initialize, &_CertificateStatus$CertificateStatusAbsence_ClassInfo_, allocate$CertificateStatus$CertificateStatusAbsence);
	return class$;
}

$Class* CertificateStatus$CertificateStatusAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun