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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CertificateException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CertificateException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CertificateException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(CertificateException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(CertificateException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.cert.CertificateException",
		"java.security.GeneralSecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CertificateException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertificateException);
	});
	return class$;
}

$Class* CertificateException::class$ = nullptr;

		} // cert
	} // security
} // java