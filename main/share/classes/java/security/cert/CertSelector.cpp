#include <java/security/cert/CertSelector.h>
#include <java/lang/Cloneable.h>
#include <java/security/cert/Certificate.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Certificate = ::java::security::cert::Certificate;

namespace java {
	namespace security {
		namespace cert {

$Object* CertSelector::clone() {
	 return this->$Cloneable::clone();
}

$Class* CertSelector::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{"match", "(Ljava/security/cert/Certificate;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CertSelector, match, bool, $Certificate*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.cert.CertSelector",
		nullptr,
		"java.lang.Cloneable",
		nullptr,
		methodInfos$$
	};
	$loadClass(CertSelector, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertSelector);
	});
	return class$;
}

$Class* CertSelector::class$ = nullptr;

		} // cert
	} // security
} // java