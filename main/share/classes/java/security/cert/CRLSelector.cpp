#include <java/security/cert/CRLSelector.h>
#include <java/lang/Cloneable.h>
#include <java/security/cert/CRL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $MethodInfo = ::java::lang::MethodInfo;
using $CRL = ::java::security::cert::CRL;

namespace java {
	namespace security {
		namespace cert {

$Object* CRLSelector::clone() {
	 return this->$Cloneable::clone();
}

$Class* CRLSelector::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{"match", "(Ljava/security/cert/CRL;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CRLSelector, match, bool, $CRL*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.cert.CRLSelector",
		nullptr,
		"java.lang.Cloneable",
		nullptr,
		methodInfos$$
	};
	$loadClass(CRLSelector, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CRLSelector);
	});
	return class$;
}

$Class* CRLSelector::class$ = nullptr;

		} // cert
	} // security
} // java