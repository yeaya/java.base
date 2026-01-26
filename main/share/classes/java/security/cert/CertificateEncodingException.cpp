#include <java/security/cert/CertificateEncodingException.h>

#include <java/security/cert/CertificateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertificateException = ::java::security::cert::CertificateException;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _CertificateEncodingException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CertificateEncodingException, serialVersionUID)},
	{}
};

$MethodInfo _CertificateEncodingException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CertificateEncodingException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CertificateEncodingException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(CertificateEncodingException, init$, void, $String*, $Throwable*)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(CertificateEncodingException, init$, void, $Throwable*)},
	{}
};

$ClassInfo _CertificateEncodingException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.cert.CertificateEncodingException",
	"java.security.cert.CertificateException",
	nullptr,
	_CertificateEncodingException_FieldInfo_,
	_CertificateEncodingException_MethodInfo_
};

$Object* allocate$CertificateEncodingException($Class* clazz) {
	return $of($alloc(CertificateEncodingException));
}

void CertificateEncodingException::init$() {
	$CertificateException::init$();
}

void CertificateEncodingException::init$($String* message) {
	$CertificateException::init$(message);
}

void CertificateEncodingException::init$($String* message, $Throwable* cause) {
	$CertificateException::init$(message, cause);
}

void CertificateEncodingException::init$($Throwable* cause) {
	$CertificateException::init$(cause);
}

CertificateEncodingException::CertificateEncodingException() {
}

CertificateEncodingException::CertificateEncodingException(const CertificateEncodingException& e) : $CertificateException(e) {
}

void CertificateEncodingException::throw$() {
	throw *this;
}

$Class* CertificateEncodingException::load$($String* name, bool initialize) {
	$loadClass(CertificateEncodingException, name, initialize, &_CertificateEncodingException_ClassInfo_, allocate$CertificateEncodingException);
	return class$;
}

$Class* CertificateEncodingException::class$ = nullptr;

		} // cert
	} // security
} // java