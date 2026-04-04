#include <java/security/cert/CertPathBuilderResult.h>
#include <java/lang/Cloneable.h>
#include <java/security/cert/CertPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertPath = ::java::security::cert::CertPath;

namespace java {
	namespace security {
		namespace cert {

$Object* CertPathBuilderResult::clone() {
	 return this->$Cloneable::clone();
}

$Class* CertPathBuilderResult::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{"getCertPath", "()Ljava/security/cert/CertPath;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CertPathBuilderResult, getCertPath, $CertPath*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.cert.CertPathBuilderResult",
		nullptr,
		"java.lang.Cloneable",
		nullptr,
		methodInfos$$
	};
	$loadClass(CertPathBuilderResult, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertPathBuilderResult);
	});
	return class$;
}

$Class* CertPathBuilderResult::class$ = nullptr;

		} // cert
	} // security
} // java