#include <java/security/cert/CertStoreParameters.h>
#include <java/lang/Cloneable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {
		namespace cert {

$Object* CertStoreParameters::clone() {
	 return this->$Cloneable::clone();
}

$Class* CertStoreParameters::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.cert.CertStoreParameters",
		nullptr,
		"java.lang.Cloneable",
		nullptr,
		methodInfos$$
	};
	$loadClass(CertStoreParameters, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertStoreParameters);
	});
	return class$;
}

$Class* CertStoreParameters::class$ = nullptr;

		} // cert
	} // security
} // java