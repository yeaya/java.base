#include <java/security/spec/InvalidKeySpecException.h>
#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace java {
	namespace security {
		namespace spec {

void InvalidKeySpecException::init$() {
	$GeneralSecurityException::init$();
}

void InvalidKeySpecException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

void InvalidKeySpecException::init$($String* message, $Throwable* cause) {
	$GeneralSecurityException::init$(message, cause);
}

void InvalidKeySpecException::init$($Throwable* cause) {
	$GeneralSecurityException::init$(cause);
}

InvalidKeySpecException::InvalidKeySpecException() {
}

InvalidKeySpecException::InvalidKeySpecException(const InvalidKeySpecException& e) : $GeneralSecurityException(e) {
}

void InvalidKeySpecException::throw$() {
	throw *this;
}

$Class* InvalidKeySpecException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidKeySpecException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidKeySpecException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidKeySpecException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(InvalidKeySpecException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(InvalidKeySpecException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.spec.InvalidKeySpecException",
		"java.security.GeneralSecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidKeySpecException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidKeySpecException);
	});
	return class$;
}

$Class* InvalidKeySpecException::class$ = nullptr;

		} // spec
	} // security
} // java