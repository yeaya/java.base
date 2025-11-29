#include <sun/security/ssl/CertificateStatus$CertificateStatusProducer.h>

#include <sun/security/ssl/CertificateStatus$CertificateStatusMessage.h>
#include <sun/security/ssl/CertificateStatus.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
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
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertificateStatus$CertificateStatusProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertificateStatus$CertificateStatusProducer::*)()>(&CertificateStatus$CertificateStatusProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CertificateStatus$CertificateStatusProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertificateStatus$CertificateStatusProducer", "sun.security.ssl.CertificateStatus", "CertificateStatusProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CertificateStatus$CertificateStatusProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertificateStatus$CertificateStatusProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_CertificateStatus$CertificateStatusProducer_MethodInfo_,
	nullptr,
	nullptr,
	_CertificateStatus$CertificateStatusProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertificateStatus"
};

$Object* allocate$CertificateStatus$CertificateStatusProducer($Class* clazz) {
	return $of($alloc(CertificateStatus$CertificateStatusProducer));
}

void CertificateStatus$CertificateStatusProducer::init$() {
}

$bytes* CertificateStatus$CertificateStatusProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	if (!$nc(shc)->staplingActive) {
		return nullptr;
	}
	$var($CertificateStatus$CertificateStatusMessage, csm, $new($CertificateStatus$CertificateStatusMessage, shc));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced server CertificateStatus handshake message"_s, $$new($ObjectArray, {$of(csm)}));
	}
	csm->write($nc(shc)->handshakeOutput);
	$nc($nc(shc)->handshakeOutput)->flush();
	return nullptr;
}

CertificateStatus$CertificateStatusProducer::CertificateStatus$CertificateStatusProducer() {
}

$Class* CertificateStatus$CertificateStatusProducer::load$($String* name, bool initialize) {
	$loadClass(CertificateStatus$CertificateStatusProducer, name, initialize, &_CertificateStatus$CertificateStatusProducer_ClassInfo_, allocate$CertificateStatus$CertificateStatusProducer);
	return class$;
}

$Class* CertificateStatus$CertificateStatusProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun