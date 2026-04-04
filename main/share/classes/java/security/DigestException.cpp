#include <java/security/DigestException.h>
#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace java {
	namespace security {

void DigestException::init$() {
	$GeneralSecurityException::init$();
}

void DigestException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

void DigestException::init$($String* message, $Throwable* cause) {
	$GeneralSecurityException::init$(message, cause);
}

void DigestException::init$($Throwable* cause) {
	$GeneralSecurityException::init$(cause);
}

DigestException::DigestException() {
}

DigestException::DigestException(const DigestException& e) : $GeneralSecurityException(e) {
}

void DigestException::throw$() {
	throw *this;
}

$Class* DigestException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DigestException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DigestException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(DigestException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(DigestException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.DigestException",
		"java.security.GeneralSecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DigestException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DigestException);
	});
	return class$;
}

$Class* DigestException::class$ = nullptr;

	} // security
} // java