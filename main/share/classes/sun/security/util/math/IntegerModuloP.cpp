#include <sun/security/util/math/IntegerModuloP.h>

#include <java/math/BigInteger.h>
#include <sun/security/util/math/ImmutableIntegerModuloP.h>
#include <sun/security/util/math/IntegerFieldModuloP.h>
#include <sun/security/util/math/MutableIntegerModuloP.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $ImmutableIntegerModuloP = ::sun::security::util::math::ImmutableIntegerModuloP;
using $IntegerFieldModuloP = ::sun::security::util::math::IntegerFieldModuloP;
using $MutableIntegerModuloP = ::sun::security::util::math::MutableIntegerModuloP;

namespace sun {
	namespace security {
		namespace util {
			namespace math {

$MethodInfo _IntegerModuloP_MethodInfo_[] = {
	{"add", "(Lsun/security/util/math/IntegerModuloP;)Lsun/security/util/math/ImmutableIntegerModuloP;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IntegerModuloP, add, $ImmutableIntegerModuloP*, IntegerModuloP*)},
	{"addModPowerTwo", "(Lsun/security/util/math/IntegerModuloP;I)[B", nullptr, $PUBLIC, $virtualMethod(IntegerModuloP, addModPowerTwo, $bytes*, IntegerModuloP*, int32_t)},
	{"addModPowerTwo", "(Lsun/security/util/math/IntegerModuloP;[B)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IntegerModuloP, addModPowerTwo, void, IntegerModuloP*, $bytes*)},
	{"additiveInverse", "()Lsun/security/util/math/ImmutableIntegerModuloP;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IntegerModuloP, additiveInverse, $ImmutableIntegerModuloP*)},
	{"asBigInteger", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IntegerModuloP, asBigInteger, $BigInteger*)},
	{"asByteArray", "(I)[B", nullptr, $PUBLIC, $virtualMethod(IntegerModuloP, asByteArray, $bytes*, int32_t)},
	{"asByteArray", "([B)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IntegerModuloP, asByteArray, void, $bytes*)},
	{"fixed", "()Lsun/security/util/math/ImmutableIntegerModuloP;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IntegerModuloP, fixed, $ImmutableIntegerModuloP*)},
	{"getField", "()Lsun/security/util/math/IntegerFieldModuloP;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IntegerModuloP, getField, $IntegerFieldModuloP*)},
	{"multiplicativeInverse", "()Lsun/security/util/math/ImmutableIntegerModuloP;", nullptr, $PUBLIC, $virtualMethod(IntegerModuloP, multiplicativeInverse, $ImmutableIntegerModuloP*)},
	{"multiply", "(Lsun/security/util/math/IntegerModuloP;)Lsun/security/util/math/ImmutableIntegerModuloP;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IntegerModuloP, multiply, $ImmutableIntegerModuloP*, IntegerModuloP*)},
	{"mutable", "()Lsun/security/util/math/MutableIntegerModuloP;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IntegerModuloP, mutable$, $MutableIntegerModuloP*)},
	{"pow", "(Ljava/math/BigInteger;)Lsun/security/util/math/ImmutableIntegerModuloP;", nullptr, $PUBLIC, $virtualMethod(IntegerModuloP, pow, $ImmutableIntegerModuloP*, $BigInteger*)},
	{"square", "()Lsun/security/util/math/ImmutableIntegerModuloP;", nullptr, $PUBLIC, $virtualMethod(IntegerModuloP, square, $ImmutableIntegerModuloP*)},
	{"subtract", "(Lsun/security/util/math/IntegerModuloP;)Lsun/security/util/math/ImmutableIntegerModuloP;", nullptr, $PUBLIC, $virtualMethod(IntegerModuloP, subtract, $ImmutableIntegerModuloP*, IntegerModuloP*)},
	{}
};

$ClassInfo _IntegerModuloP_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.security.util.math.IntegerModuloP",
	nullptr,
	nullptr,
	nullptr,
	_IntegerModuloP_MethodInfo_
};

$Object* allocate$IntegerModuloP($Class* clazz) {
	return $of($alloc(IntegerModuloP));
}

$bytes* IntegerModuloP::addModPowerTwo(IntegerModuloP* b, int32_t len) {
	$var($bytes, result, $new($bytes, len));
	addModPowerTwo(b, result);
	return result;
}

$bytes* IntegerModuloP::asByteArray(int32_t len) {
	$var($bytes, result, $new($bytes, len));
	asByteArray(result);
	return result;
}

$ImmutableIntegerModuloP* IntegerModuloP::multiplicativeInverse() {
	$useLocalCurrentObjectStackCache();
	return pow($($nc($($nc($(getField()))->getSize()))->subtract($($BigInteger::valueOf((int64_t)2)))));
}

$ImmutableIntegerModuloP* IntegerModuloP::subtract(IntegerModuloP* b) {
	return add($($nc(b)->additiveInverse()));
}

$ImmutableIntegerModuloP* IntegerModuloP::square() {
	return multiply(this);
}

$ImmutableIntegerModuloP* IntegerModuloP::pow($BigInteger* b) {
	$useLocalCurrentObjectStackCache();
	$var($MutableIntegerModuloP, y, $nc($($nc($(getField()))->get1()))->mutable$());
	$var($MutableIntegerModuloP, x, mutable$());
	int32_t bitLength = $nc(b)->bitLength();
	for (int32_t bit = 0; bit < bitLength; ++bit) {
		if (b->testBit(bit)) {
			$nc(y)->setProduct(static_cast<IntegerModuloP*>(x));
		}
		$nc(x)->setSquare();
	}
	return $nc(y)->fixed();
}

$Class* IntegerModuloP::load$($String* name, bool initialize) {
	$loadClass(IntegerModuloP, name, initialize, &_IntegerModuloP_ClassInfo_, allocate$IntegerModuloP);
	return class$;
}

$Class* IntegerModuloP::class$ = nullptr;

			} // math
		} // util
	} // security
} // sun