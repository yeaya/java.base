#include <java/security/cert/CertificateNotYetValidException.h>

#include <java/security/cert/CertificateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertificateException = ::java::security::cert::CertificateException;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _CertificateNotYetValidException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(CertificateNotYetValidException, serialVersionUID)},
	{}
};

$MethodInfo _CertificateNotYetValidException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CertificateNotYetValidException::*)()>(&CertificateNotYetValidException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateNotYetValidException::*)($String*)>(&CertificateNotYetValidException::init$))},
	{}
};

$ClassInfo _CertificateNotYetValidException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.cert.CertificateNotYetValidException",
	"java.security.cert.CertificateException",
	nullptr,
	_CertificateNotYetValidException_FieldInfo_,
	_CertificateNotYetValidException_MethodInfo_
};

$Object* allocate$CertificateNotYetValidException($Class* clazz) {
	return $of($alloc(CertificateNotYetValidException));
}

void CertificateNotYetValidException::init$() {
	$CertificateException::init$();
}

void CertificateNotYetValidException::init$($String* message) {
	$CertificateException::init$(message);
}

CertificateNotYetValidException::CertificateNotYetValidException() {
}

CertificateNotYetValidException::CertificateNotYetValidException(const CertificateNotYetValidException& e) : $CertificateException(e) {
}

void CertificateNotYetValidException::throw$() {
	throw *this;
}

$Class* CertificateNotYetValidException::load$($String* name, bool initialize) {
	$loadClass(CertificateNotYetValidException, name, initialize, &_CertificateNotYetValidException_ClassInfo_, allocate$CertificateNotYetValidException);
	return class$;
}

$Class* CertificateNotYetValidException::class$ = nullptr;

		} // cert
	} // security
} // java