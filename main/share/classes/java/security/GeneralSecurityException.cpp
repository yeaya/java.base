#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {

void GeneralSecurityException::init$() {
	$Exception::init$();
}

void GeneralSecurityException::init$($String* msg) {
	$Exception::init$(msg);
}

void GeneralSecurityException::init$($String* message, $Throwable* cause) {
	$Exception::init$(message, cause);
}

void GeneralSecurityException::init$($Throwable* cause) {
	$Exception::init$(cause);
}

GeneralSecurityException::GeneralSecurityException() {
}

GeneralSecurityException::GeneralSecurityException(const GeneralSecurityException& e) : $Exception(e) {
}

void GeneralSecurityException::throw$() {
	throw *this;
}

$Class* GeneralSecurityException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GeneralSecurityException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GeneralSecurityException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(GeneralSecurityException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(GeneralSecurityException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(GeneralSecurityException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.GeneralSecurityException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(GeneralSecurityException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GeneralSecurityException);
	});
	return class$;
}

$Class* GeneralSecurityException::class$ = nullptr;

	} // security
} // java