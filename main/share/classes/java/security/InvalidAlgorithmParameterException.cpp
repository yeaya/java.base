#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace java {
	namespace security {

void InvalidAlgorithmParameterException::init$() {
	$GeneralSecurityException::init$();
}

void InvalidAlgorithmParameterException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

void InvalidAlgorithmParameterException::init$($String* message, $Throwable* cause) {
	$GeneralSecurityException::init$(message, cause);
}

void InvalidAlgorithmParameterException::init$($Throwable* cause) {
	$GeneralSecurityException::init$(cause);
}

InvalidAlgorithmParameterException::InvalidAlgorithmParameterException() {
}

InvalidAlgorithmParameterException::InvalidAlgorithmParameterException(const InvalidAlgorithmParameterException& e) : $GeneralSecurityException(e) {
}

void InvalidAlgorithmParameterException::throw$() {
	throw *this;
}

$Class* InvalidAlgorithmParameterException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidAlgorithmParameterException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidAlgorithmParameterException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidAlgorithmParameterException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(InvalidAlgorithmParameterException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(InvalidAlgorithmParameterException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.InvalidAlgorithmParameterException",
		"java.security.GeneralSecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidAlgorithmParameterException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidAlgorithmParameterException);
	});
	return class$;
}

$Class* InvalidAlgorithmParameterException::class$ = nullptr;

	} // security
} // java