#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace java {
	namespace security {

void NoSuchAlgorithmException::init$() {
	$GeneralSecurityException::init$();
}

void NoSuchAlgorithmException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

void NoSuchAlgorithmException::init$($String* message, $Throwable* cause) {
	$GeneralSecurityException::init$(message, cause);
}

void NoSuchAlgorithmException::init$($Throwable* cause) {
	$GeneralSecurityException::init$(cause);
}

NoSuchAlgorithmException::NoSuchAlgorithmException() {
}

NoSuchAlgorithmException::NoSuchAlgorithmException(const NoSuchAlgorithmException& e) : $GeneralSecurityException(e) {
}

void NoSuchAlgorithmException::throw$() {
	throw *this;
}

$Class* NoSuchAlgorithmException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoSuchAlgorithmException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NoSuchAlgorithmException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NoSuchAlgorithmException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(NoSuchAlgorithmException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(NoSuchAlgorithmException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.NoSuchAlgorithmException",
		"java.security.GeneralSecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NoSuchAlgorithmException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NoSuchAlgorithmException);
	});
	return class$;
}

$Class* NoSuchAlgorithmException::class$ = nullptr;

	} // security
} // java