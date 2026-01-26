#include <sun/security/util/math/MutableIntegerModuloP.h>

#include <java/nio/ByteBuffer.h>
#include <sun/security/util/math/IntegerModuloP.h>
#include <sun/security/util/math/SmallValue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $IntegerModuloP = ::sun::security::util::math::IntegerModuloP;
using $SmallValue = ::sun::security::util::math::SmallValue;

namespace sun {
	namespace security {
		namespace util {
			namespace math {

$MethodInfo _MutableIntegerModuloP_MethodInfo_[] = {
	{"conditionalSet", "(Lsun/security/util/math/IntegerModuloP;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableIntegerModuloP, conditionalSet, void, $IntegerModuloP*, int32_t)},
	{"conditionalSwapWith", "(Lsun/security/util/math/MutableIntegerModuloP;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableIntegerModuloP, conditionalSwapWith, void, MutableIntegerModuloP*, int32_t)},
	{"setAdditiveInverse", "()Lsun/security/util/math/MutableIntegerModuloP;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableIntegerModuloP, setAdditiveInverse, MutableIntegerModuloP*)},
	{"setDifference", "(Lsun/security/util/math/IntegerModuloP;)Lsun/security/util/math/MutableIntegerModuloP;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableIntegerModuloP, setDifference, MutableIntegerModuloP*, $IntegerModuloP*)},
	{"setProduct", "(Lsun/security/util/math/IntegerModuloP;)Lsun/security/util/math/MutableIntegerModuloP;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableIntegerModuloP, setProduct, MutableIntegerModuloP*, $IntegerModuloP*)},
	{"setProduct", "(Lsun/security/util/math/SmallValue;)Lsun/security/util/math/MutableIntegerModuloP;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableIntegerModuloP, setProduct, MutableIntegerModuloP*, $SmallValue*)},
	{"setReduced", "()Lsun/security/util/math/MutableIntegerModuloP;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableIntegerModuloP, setReduced, MutableIntegerModuloP*)},
	{"setSquare", "()Lsun/security/util/math/MutableIntegerModuloP;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableIntegerModuloP, setSquare, MutableIntegerModuloP*)},
	{"setSum", "(Lsun/security/util/math/IntegerModuloP;)Lsun/security/util/math/MutableIntegerModuloP;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableIntegerModuloP, setSum, MutableIntegerModuloP*, $IntegerModuloP*)},
	{"setValue", "(Lsun/security/util/math/IntegerModuloP;)Lsun/security/util/math/MutableIntegerModuloP;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableIntegerModuloP, setValue, MutableIntegerModuloP*, $IntegerModuloP*)},
	{"setValue", "([BIIB)Lsun/security/util/math/MutableIntegerModuloP;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableIntegerModuloP, setValue, MutableIntegerModuloP*, $bytes*, int32_t, int32_t, int8_t)},
	{"setValue", "(Ljava/nio/ByteBuffer;IB)Lsun/security/util/math/MutableIntegerModuloP;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableIntegerModuloP, setValue, MutableIntegerModuloP*, $ByteBuffer*, int32_t, int8_t)},
	{}
};

$ClassInfo _MutableIntegerModuloP_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.security.util.math.MutableIntegerModuloP",
	nullptr,
	"sun.security.util.math.IntegerModuloP",
	nullptr,
	_MutableIntegerModuloP_MethodInfo_
};

$Object* allocate$MutableIntegerModuloP($Class* clazz) {
	return $of($alloc(MutableIntegerModuloP));
}

$Class* MutableIntegerModuloP::load$($String* name, bool initialize) {
	$loadClass(MutableIntegerModuloP, name, initialize, &_MutableIntegerModuloP_ClassInfo_, allocate$MutableIntegerModuloP);
	return class$;
}

$Class* MutableIntegerModuloP::class$ = nullptr;

			} // math
		} // util
	} // security
} // sun