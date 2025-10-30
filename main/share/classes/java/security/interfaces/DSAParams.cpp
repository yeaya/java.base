#include <java/security/interfaces/DSAParams.h>

#include <java/math/BigInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;

namespace java {
	namespace security {
		namespace interfaces {

$MethodInfo _DSAParams_MethodInfo_[] = {
	{"getG", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{"getP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{"getQ", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DSAParams_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.interfaces.DSAParams",
	nullptr,
	nullptr,
	nullptr,
	_DSAParams_MethodInfo_
};

$Object* allocate$DSAParams($Class* clazz) {
	return $of($alloc(DSAParams));
}

$Class* DSAParams::load$($String* name, bool initialize) {
	$loadClass(DSAParams, name, initialize, &_DSAParams_ClassInfo_, allocate$DSAParams);
	return class$;
}

$Class* DSAParams::class$ = nullptr;

		} // interfaces
	} // security
} // java