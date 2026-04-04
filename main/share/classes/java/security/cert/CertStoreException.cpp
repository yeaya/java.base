#include <java/security/cert/CertStoreException.h>
#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace java {
	namespace security {
		namespace cert {

void CertStoreException::init$() {
	$GeneralSecurityException::init$();
}

void CertStoreException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

void CertStoreException::init$($Throwable* cause) {
	$GeneralSecurityException::init$(cause);
}

void CertStoreException::init$($String* msg, $Throwable* cause) {
	$GeneralSecurityException::init$(msg, cause);
}

CertStoreException::CertStoreException() {
}

CertStoreException::CertStoreException(const CertStoreException& e) : $GeneralSecurityException(e) {
}

void CertStoreException::throw$() {
	throw *this;
}

$Class* CertStoreException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CertStoreException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CertStoreException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CertStoreException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(CertStoreException, init$, void, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(CertStoreException, init$, void, $String*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.cert.CertStoreException",
		"java.security.GeneralSecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CertStoreException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertStoreException);
	});
	return class$;
}

$Class* CertStoreException::class$ = nullptr;

		} // cert
	} // security
} // java