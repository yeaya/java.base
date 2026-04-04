#include <java/security/KeyException.h>
#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace java {
	namespace security {

void KeyException::init$() {
	$GeneralSecurityException::init$();
}

void KeyException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

void KeyException::init$($String* message, $Throwable* cause) {
	$GeneralSecurityException::init$(message, cause);
}

void KeyException::init$($Throwable* cause) {
	$GeneralSecurityException::init$(cause);
}

KeyException::KeyException() {
}

KeyException::KeyException(const KeyException& e) : $GeneralSecurityException(e) {
}

void KeyException::throw$() {
	throw *this;
}

$Class* KeyException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeyException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(KeyException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(KeyException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(KeyException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(KeyException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.KeyException",
		"java.security.GeneralSecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(KeyException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyException);
	});
	return class$;
}

$Class* KeyException::class$ = nullptr;

	} // security
} // java