#include <java/security/cert/CertPathValidatorResult.h>
#include <java/lang/Cloneable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {
		namespace cert {

$Object* CertPathValidatorResult::clone() {
	 return this->$Cloneable::clone();
}

$Class* CertPathValidatorResult::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.cert.CertPathValidatorResult",
		nullptr,
		"java.lang.Cloneable",
		nullptr,
		methodInfos$$
	};
	$loadClass(CertPathValidatorResult, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertPathValidatorResult);
	});
	return class$;
}

$Class* CertPathValidatorResult::class$ = nullptr;

		} // cert
	} // security
} // java