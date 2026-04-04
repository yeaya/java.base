#include <java/security/KeyManagementException.h>
#include <java/security/KeyException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyException = ::java::security::KeyException;

namespace java {
	namespace security {

void KeyManagementException::init$() {
	$KeyException::init$();
}

void KeyManagementException::init$($String* msg) {
	$KeyException::init$(msg);
}

void KeyManagementException::init$($String* message, $Throwable* cause) {
	$KeyException::init$(message, cause);
}

void KeyManagementException::init$($Throwable* cause) {
	$KeyException::init$(cause);
}

KeyManagementException::KeyManagementException() {
}

KeyManagementException::KeyManagementException(const KeyManagementException& e) : $KeyException(e) {
}

void KeyManagementException::throw$() {
	throw *this;
}

$Class* KeyManagementException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeyManagementException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(KeyManagementException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(KeyManagementException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(KeyManagementException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(KeyManagementException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.KeyManagementException",
		"java.security.KeyException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(KeyManagementException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyManagementException);
	});
	return class$;
}

$Class* KeyManagementException::class$ = nullptr;

	} // security
} // java