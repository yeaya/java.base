#include <java/security/interfaces/DSAParams.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;

namespace java {
	namespace security {
		namespace interfaces {

$Class* DSAParams::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getG", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DSAParams, getG, $BigInteger*)},
		{"getP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DSAParams, getP, $BigInteger*)},
		{"getQ", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DSAParams, getQ, $BigInteger*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.interfaces.DSAParams",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DSAParams, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DSAParams);
	});
	return class$;
}

$Class* DSAParams::class$ = nullptr;

		} // interfaces
	} // security
} // java