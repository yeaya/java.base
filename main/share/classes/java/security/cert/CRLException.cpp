#include <java/security/cert/CRLException.h>
#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace java {
	namespace security {
		namespace cert {

void CRLException::init$() {
	$GeneralSecurityException::init$();
}

void CRLException::init$($String* message) {
	$GeneralSecurityException::init$(message);
}

void CRLException::init$($String* message, $Throwable* cause) {
	$GeneralSecurityException::init$(message, cause);
}

void CRLException::init$($Throwable* cause) {
	$GeneralSecurityException::init$(cause);
}

CRLException::CRLException() {
}

CRLException::CRLException(const CRLException& e) : $GeneralSecurityException(e) {
}

void CRLException::throw$() {
	throw *this;
}

$Class* CRLException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CRLException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CRLException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CRLException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(CRLException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(CRLException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.cert.CRLException",
		"java.security.GeneralSecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CRLException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CRLException);
	});
	return class$;
}

$Class* CRLException::class$ = nullptr;

		} // cert
	} // security
} // java