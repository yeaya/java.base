#include <jdk/internal/math/FloatConsts.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef SIGN_BIT_MASK
#undef EXP_BIT_MASK
#undef SIGNIF_BIT_MASK
#undef EXP_BIAS
#undef MIN_SUB_EXPONENT
#undef SIGNIFICAND_WIDTH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace math {

$FieldInfo _FloatConsts_FieldInfo_[] = {
	{"SIGNIFICAND_WIDTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FloatConsts, SIGNIFICAND_WIDTH)},
	{"MIN_SUB_EXPONENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FloatConsts, MIN_SUB_EXPONENT)},
	{"EXP_BIAS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FloatConsts, EXP_BIAS)},
	{"SIGN_BIT_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FloatConsts, SIGN_BIT_MASK)},
	{"EXP_BIT_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FloatConsts, EXP_BIT_MASK)},
	{"SIGNIF_BIT_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FloatConsts, SIGNIF_BIT_MASK)},
	{}
};

$MethodInfo _FloatConsts_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(FloatConsts::*)()>(&FloatConsts::init$))},
	{}
};

$ClassInfo _FloatConsts_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.math.FloatConsts",
	"java.lang.Object",
	nullptr,
	_FloatConsts_FieldInfo_,
	_FloatConsts_MethodInfo_
};

$Object* allocate$FloatConsts($Class* clazz) {
	return $of($alloc(FloatConsts));
}

void FloatConsts::init$() {
}

void clinit$FloatConsts($Class* class$) {
	{
	}
}

FloatConsts::FloatConsts() {
}

$Class* FloatConsts::load$($String* name, bool initialize) {
	$loadClass(FloatConsts, name, initialize, &_FloatConsts_ClassInfo_, clinit$FloatConsts, allocate$FloatConsts);
	return class$;
}

$Class* FloatConsts::class$ = nullptr;

		} // math
	} // internal
} // jdk