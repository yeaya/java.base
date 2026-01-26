#include <java/security/cert/CertificateException.h>

#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _CertificateException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CertificateException, serialVersionUID)},
	{}
};

$MethodInfo _CertificateException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CertificateException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CertificateException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(CertificateException, init$, void, $String*, $Throwable*)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(CertificateException, init$, void, $Throwable*)},
	{}
};

$ClassInfo _CertificateException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.cert.CertificateException",
	"java.security.GeneralSecurityException",
	nullptr,
	_CertificateException_FieldInfo_,
	_CertificateException_MethodInfo_
};

$Object* allocate$CertificateException($Class* clazz) {
	return $of($alloc(CertificateException));
}

void CertificateException::init$() {
	$GeneralSecurityException::init$();
}

void CertificateException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

void CertificateException::init$($String* message, $Throwable* cause) {
	$GeneralSecurityException::init$(message, cause);
}

void CertificateException::init$($Throwable* cause) {
	$GeneralSecurityException::init$(cause);
}

CertificateException::CertificateException() {
}

CertificateException::CertificateException(const CertificateException& e) : $GeneralSecurityException(e) {
}

void CertificateException::throw$() {
	throw *this;
}

$Class* CertificateException::load$($String* name, bool initialize) {
	$loadClass(CertificateException, name, initialize, &_CertificateException_ClassInfo_, allocate$CertificateException);
	return class$;
}

$Class* CertificateException::class$ = nullptr;

		} // cert
	} // security
} // java