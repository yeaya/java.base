#include <java/security/KeyStoreException.h>
#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace java {
	namespace security {

void KeyStoreException::init$() {
	$GeneralSecurityException::init$();
}

void KeyStoreException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

void KeyStoreException::init$($String* message, $Throwable* cause) {
	$GeneralSecurityException::init$(message, cause);
}

void KeyStoreException::init$($Throwable* cause) {
	$GeneralSecurityException::init$(cause);
}

KeyStoreException::KeyStoreException() {
}

KeyStoreException::KeyStoreException(const KeyStoreException& e) : $GeneralSecurityException(e) {
}

void KeyStoreException::throw$() {
	throw *this;
}

$Class* KeyStoreException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeyStoreException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(KeyStoreException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(KeyStoreException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(KeyStoreException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(KeyStoreException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.KeyStoreException",
		"java.security.GeneralSecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(KeyStoreException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyStoreException);
	});
	return class$;
}

$Class* KeyStoreException::class$ = nullptr;

	} // security
} // java