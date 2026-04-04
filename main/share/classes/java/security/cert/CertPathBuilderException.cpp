#include <java/security/cert/CertPathBuilderException.h>
#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace java {
	namespace security {
		namespace cert {

void CertPathBuilderException::init$() {
	$GeneralSecurityException::init$();
}

void CertPathBuilderException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

void CertPathBuilderException::init$($Throwable* cause) {
	$GeneralSecurityException::init$(cause);
}

void CertPathBuilderException::init$($String* msg, $Throwable* cause) {
	$GeneralSecurityException::init$(msg, cause);
}

CertPathBuilderException::CertPathBuilderException() {
}

CertPathBuilderException::CertPathBuilderException(const CertPathBuilderException& e) : $GeneralSecurityException(e) {
}

void CertPathBuilderException::throw$() {
	throw *this;
}

$Class* CertPathBuilderException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CertPathBuilderException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CertPathBuilderException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CertPathBuilderException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(CertPathBuilderException, init$, void, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(CertPathBuilderException, init$, void, $String*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.cert.CertPathBuilderException",
		"java.security.GeneralSecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CertPathBuilderException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertPathBuilderException);
	});
	return class$;
}

$Class* CertPathBuilderException::class$ = nullptr;

		} // cert
	} // security
} // java