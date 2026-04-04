#include <jdk/internal/math/FloatConsts.h>
#include <jcpp.h>

#undef EXP_BIAS
#undef EXP_BIT_MASK
#undef MIN_SUB_EXPONENT
#undef SIGNIFICAND_WIDTH
#undef SIGNIF_BIT_MASK
#undef SIGN_BIT_MASK

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace math {

void FloatConsts::init$() {
}

void FloatConsts::clinit$($Class* clazz) {
	{
		;
	}
}

FloatConsts::FloatConsts() {
}

$Class* FloatConsts::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SIGNIFICAND_WIDTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FloatConsts, SIGNIFICAND_WIDTH)},
		{"MIN_SUB_EXPONENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FloatConsts, MIN_SUB_EXPONENT)},
		{"EXP_BIAS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FloatConsts, EXP_BIAS)},
		{"SIGN_BIT_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FloatConsts, SIGN_BIT_MASK)},
		{"EXP_BIT_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FloatConsts, EXP_BIT_MASK)},
		{"SIGNIF_BIT_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FloatConsts, SIGNIF_BIT_MASK)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(FloatConsts, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.math.FloatConsts",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FloatConsts, name, initialize, &classInfo$$, FloatConsts::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FloatConsts);
	});
	return class$;
}

$Class* FloatConsts::class$ = nullptr;

		} // math
	} // internal
} // jdk