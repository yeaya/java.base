#include <java/security/cert/CertPathParameters.h>
#include <java/lang/Cloneable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {
		namespace cert {

$Object* CertPathParameters::clone() {
	 return this->$Cloneable::clone();
}

$Class* CertPathParameters::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.cert.CertPathParameters",
		nullptr,
		"java.lang.Cloneable",
		nullptr,
		methodInfos$$
	};
	$loadClass(CertPathParameters, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertPathParameters);
	});
	return class$;
}

$Class* CertPathParameters::class$ = nullptr;

		} // cert
	} // security
} // java