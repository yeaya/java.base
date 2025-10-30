#include <sun/security/util/math/IntegerFieldModuloP.h>

#include <java/math/BigInteger.h>
#include <sun/security/util/math/ImmutableIntegerModuloP.h>
#include <sun/security/util/math/SmallValue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $ImmutableIntegerModuloP = ::sun::security::util::math::ImmutableIntegerModuloP;
using $SmallValue = ::sun::security::util::math::SmallValue;

namespace sun {
	namespace security {
		namespace util {
			namespace math {

$MethodInfo _IntegerFieldModuloP_MethodInfo_[] = {
	{"get0", "()Lsun/security/util/math/ImmutableIntegerModuloP;", nullptr, $PUBLIC | $ABSTRACT},
	{"get1", "()Lsun/security/util/math/ImmutableIntegerModuloP;", nullptr, $PUBLIC | $ABSTRACT},
	{"getElement", "(Ljava/math/BigInteger;)Lsun/security/util/math/ImmutableIntegerModuloP;", nullptr, $PUBLIC | $ABSTRACT},
	{"getElement", "([B)Lsun/security/util/math/ImmutableIntegerModuloP;", nullptr, $PUBLIC},
	{"getElement", "([BIIB)Lsun/security/util/math/ImmutableIntegerModuloP;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSize", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSmallValue", "(I)Lsun/security/util/math/SmallValue;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _IntegerFieldModuloP_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.security.util.math.IntegerFieldModuloP",
	nullptr,
	nullptr,
	nullptr,
	_IntegerFieldModuloP_MethodInfo_
};

$Object* allocate$IntegerFieldModuloP($Class* clazz) {
	return $of($alloc(IntegerFieldModuloP));
}

$ImmutableIntegerModuloP* IntegerFieldModuloP::getElement($bytes* v) {
	return getElement(v, 0, $nc(v)->length, (int8_t)0);
}

$Class* IntegerFieldModuloP::load$($String* name, bool initialize) {
	$loadClass(IntegerFieldModuloP, name, initialize, &_IntegerFieldModuloP_ClassInfo_, allocate$IntegerFieldModuloP);
	return class$;
}

$Class* IntegerFieldModuloP::class$ = nullptr;

			} // math
		} // util
	} // security
} // sun