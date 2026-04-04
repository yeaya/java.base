#include <java/security/SignatureException.h>
#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace java {
	namespace security {

void SignatureException::init$() {
	$GeneralSecurityException::init$();
}

void SignatureException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

void SignatureException::init$($String* message, $Throwable* cause) {
	$GeneralSecurityException::init$(message, cause);
}

void SignatureException::init$($Throwable* cause) {
	$GeneralSecurityException::init$(cause);
}

SignatureException::SignatureException() {
}

SignatureException::SignatureException(const SignatureException& e) : $GeneralSecurityException(e) {
}

void SignatureException::throw$() {
	throw *this;
}

$Class* SignatureException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SignatureException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SignatureException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SignatureException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SignatureException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SignatureException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.SignatureException",
		"java.security.GeneralSecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SignatureException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SignatureException);
	});
	return class$;
}

$Class* SignatureException::class$ = nullptr;

	} // security
} // java