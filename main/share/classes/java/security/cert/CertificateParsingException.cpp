#include <java/security/cert/CertificateParsingException.h>

#include <java/security/cert/CertificateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertificateException = ::java::security::cert::CertificateException;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _CertificateParsingException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CertificateParsingException, serialVersionUID)},
	{}
};

$MethodInfo _CertificateParsingException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CertificateParsingException::*)()>(&CertificateParsingException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateParsingException::*)($String*)>(&CertificateParsingException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateParsingException::*)($String*,$Throwable*)>(&CertificateParsingException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateParsingException::*)($Throwable*)>(&CertificateParsingException::init$))},
	{}
};

$ClassInfo _CertificateParsingException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.cert.CertificateParsingException",
	"java.security.cert.CertificateException",
	nullptr,
	_CertificateParsingException_FieldInfo_,
	_CertificateParsingException_MethodInfo_
};

$Object* allocate$CertificateParsingException($Class* clazz) {
	return $of($alloc(CertificateParsingException));
}

void CertificateParsingException::init$() {
	$CertificateException::init$();
}

void CertificateParsingException::init$($String* message) {
	$CertificateException::init$(message);
}

void CertificateParsingException::init$($String* message, $Throwable* cause) {
	$CertificateException::init$(message, cause);
}

void CertificateParsingException::init$($Throwable* cause) {
	$CertificateException::init$(cause);
}

CertificateParsingException::CertificateParsingException() {
}

CertificateParsingException::CertificateParsingException(const CertificateParsingException& e) : $CertificateException(e) {
}

void CertificateParsingException::throw$() {
	throw *this;
}

$Class* CertificateParsingException::load$($String* name, bool initialize) {
	$loadClass(CertificateParsingException, name, initialize, &_CertificateParsingException_ClassInfo_, allocate$CertificateParsingException);
	return class$;
}

$Class* CertificateParsingException::class$ = nullptr;

		} // cert
	} // security
} // java