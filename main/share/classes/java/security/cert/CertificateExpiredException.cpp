#include <java/security/cert/CertificateExpiredException.h>

#include <java/security/cert/CertificateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertificateException = ::java::security::cert::CertificateException;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _CertificateExpiredException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CertificateExpiredException, serialVersionUID)},
	{}
};

$MethodInfo _CertificateExpiredException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CertificateExpiredException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CertificateExpiredException, init$, void, $String*)},
	{}
};

$ClassInfo _CertificateExpiredException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.cert.CertificateExpiredException",
	"java.security.cert.CertificateException",
	nullptr,
	_CertificateExpiredException_FieldInfo_,
	_CertificateExpiredException_MethodInfo_
};

$Object* allocate$CertificateExpiredException($Class* clazz) {
	return $of($alloc(CertificateExpiredException));
}

void CertificateExpiredException::init$() {
	$CertificateException::init$();
}

void CertificateExpiredException::init$($String* message) {
	$CertificateException::init$(message);
}

CertificateExpiredException::CertificateExpiredException() {
}

CertificateExpiredException::CertificateExpiredException(const CertificateExpiredException& e) : $CertificateException(e) {
}

void CertificateExpiredException::throw$() {
	throw *this;
}

$Class* CertificateExpiredException::load$($String* name, bool initialize) {
	$loadClass(CertificateExpiredException, name, initialize, &_CertificateExpiredException_ClassInfo_, allocate$CertificateExpiredException);
	return class$;
}

$Class* CertificateExpiredException::class$ = nullptr;

		} // cert
	} // security
} // java