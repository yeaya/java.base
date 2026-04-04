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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(CertificateNotYetValidException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CertificateNotYetValidException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CertificateNotYetValidException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.cert.CertificateNotYetValidException",
		"java.security.cert.CertificateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CertificateNotYetValidException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertificateNotYetValidException);
	});
	return class$;
}

$Class* CertificateNotYetValidException::class$ = nullptr;

		} // cert
	} // security
} // java