#include <javax/crypto/ExemptionMechanismException.h>
#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace javax {
	namespace crypto {

void ExemptionMechanismException::init$() {
	$GeneralSecurityException::init$();
}

void ExemptionMechanismException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

ExemptionMechanismException::ExemptionMechanismException() {
}

ExemptionMechanismException::ExemptionMechanismException(const ExemptionMechanismException& e) : $GeneralSecurityException(e) {
}

void ExemptionMechanismException::throw$() {
	throw *this;
}

$Class* ExemptionMechanismException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ExemptionMechanismException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExemptionMechanismException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ExemptionMechanismException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.crypto.ExemptionMechanismException",
		"java.security.GeneralSecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ExemptionMechanismException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExemptionMechanismException);
	});
	return class$;
}

$Class* ExemptionMechanismException::class$ = nullptr;

	} // crypto
} // javax