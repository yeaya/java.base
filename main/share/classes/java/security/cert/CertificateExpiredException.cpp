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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CertificateExpiredException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CertificateExpiredException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CertificateExpiredException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.cert.CertificateExpiredException",
		"java.security.cert.CertificateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CertificateExpiredException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertificateExpiredException);
	});
	return class$;
}

$Class* CertificateExpiredException::class$ = nullptr;

		} // cert
	} // security
} // java