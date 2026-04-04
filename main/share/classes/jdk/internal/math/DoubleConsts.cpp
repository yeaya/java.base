#include <jdk/internal/math/DoubleConsts.h>
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

void DoubleConsts::init$() {
}

void DoubleConsts::clinit$($Class* clazz) {
	{
		;
	}
}

DoubleConsts::DoubleConsts() {
}

$Class* DoubleConsts::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SIGNIFICAND_WIDTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DoubleConsts, SIGNIFICAND_WIDTH)},
		{"MIN_SUB_EXPONENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DoubleConsts, MIN_SUB_EXPONENT)},
		{"EXP_BIAS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DoubleConsts, EXP_BIAS)},
		{"SIGN_BIT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DoubleConsts, SIGN_BIT_MASK)},
		{"EXP_BIT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DoubleConsts, EXP_BIT_MASK)},
		{"SIGNIF_BIT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DoubleConsts, SIGNIF_BIT_MASK)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DoubleConsts, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.math.DoubleConsts",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DoubleConsts, name, initialize, &classInfo$$, DoubleConsts::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DoubleConsts);
	});
	return class$;
}

$Class* DoubleConsts::class$ = nullptr;

		} // math
	} // internal
} // jdk