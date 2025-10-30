#include <sun/security/ssl/CertificateStatus.h>

#include <sun/security/ssl/CertificateStatus$CertificateStatusAbsence.h>
#include <sun/security/ssl/CertificateStatus$CertificateStatusConsumer.h>
#include <sun/security/ssl/CertificateStatus$CertificateStatusProducer.h>
#include <sun/security/ssl/HandshakeAbsence.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertificateStatus$CertificateStatusAbsence = ::sun::security::ssl::CertificateStatus$CertificateStatusAbsence;
using $CertificateStatus$CertificateStatusConsumer = ::sun::security::ssl::CertificateStatus$CertificateStatusConsumer;
using $CertificateStatus$CertificateStatusProducer = ::sun::security::ssl::CertificateStatus$CertificateStatusProducer;
using $HandshakeAbsence = ::sun::security::ssl::HandshakeAbsence;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _CertificateStatus_FieldInfo_[] = {
	{"handshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(CertificateStatus, handshakeConsumer)},
	{"handshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(CertificateStatus, handshakeProducer)},
	{"handshakeAbsence", "Lsun/security/ssl/HandshakeAbsence;", nullptr, $STATIC | $FINAL, $staticField(CertificateStatus, handshakeAbsence)},
	{}
};

$MethodInfo _CertificateStatus_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CertificateStatus::*)()>(&CertificateStatus::init$))},
	{}
};

$InnerClassInfo _CertificateStatus_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertificateStatus$CertificateStatusAbsence", "sun.security.ssl.CertificateStatus", "CertificateStatusAbsence", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertificateStatus$CertificateStatusProducer", "sun.security.ssl.CertificateStatus", "CertificateStatusProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertificateStatus$CertificateStatusConsumer", "sun.security.ssl.CertificateStatus", "CertificateStatusConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertificateStatus$CertificateStatusMessage", "sun.security.ssl.CertificateStatus", "CertificateStatusMessage", $STATIC | $FINAL},
	{}
};

$ClassInfo _CertificateStatus_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertificateStatus",
	"java.lang.Object",
	nullptr,
	_CertificateStatus_FieldInfo_,
	_CertificateStatus_MethodInfo_,
	nullptr,
	nullptr,
	_CertificateStatus_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.CertificateStatus$CertificateStatusAbsence,sun.security.ssl.CertificateStatus$CertificateStatusProducer,sun.security.ssl.CertificateStatus$CertificateStatusConsumer,sun.security.ssl.CertificateStatus$CertificateStatusMessage"
};

$Object* allocate$CertificateStatus($Class* clazz) {
	return $of($alloc(CertificateStatus));
}

$SSLConsumer* CertificateStatus::handshakeConsumer = nullptr;
$HandshakeProducer* CertificateStatus::handshakeProducer = nullptr;
$HandshakeAbsence* CertificateStatus::handshakeAbsence = nullptr;

void CertificateStatus::init$() {
}

void clinit$CertificateStatus($Class* class$) {
	$assignStatic(CertificateStatus::handshakeConsumer, $new($CertificateStatus$CertificateStatusConsumer));
	$assignStatic(CertificateStatus::handshakeProducer, $new($CertificateStatus$CertificateStatusProducer));
	$assignStatic(CertificateStatus::handshakeAbsence, $new($CertificateStatus$CertificateStatusAbsence));
}

CertificateStatus::CertificateStatus() {
}

$Class* CertificateStatus::load$($String* name, bool initialize) {
	$loadClass(CertificateStatus, name, initialize, &_CertificateStatus_ClassInfo_, clinit$CertificateStatus, allocate$CertificateStatus);
	return class$;
}

$Class* CertificateStatus::class$ = nullptr;

		} // ssl
	} // security
} // sun