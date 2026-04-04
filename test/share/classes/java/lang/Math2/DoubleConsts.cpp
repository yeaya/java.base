#include <java/lang/Math2/DoubleConsts.h>
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

namespace java {
	namespace lang {
		namespace Math2 {

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
		{"EXP_BIAS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DoubleConsts, EXP_BIAS)},
		{"EXP_BIT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DoubleConsts, EXP_BIT_MASK)},
		{"SIGN_BIT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DoubleConsts, SIGN_BIT_MASK)},
		{"SIGNIF_BIT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DoubleConsts, SIGNIF_BIT_MASK)},
		{"SIGNIFICAND_WIDTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DoubleConsts, SIGNIFICAND_WIDTH)},
		{"MIN_SUB_EXPONENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DoubleConsts, MIN_SUB_EXPONENT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DoubleConsts, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.lang.Math2.DoubleConsts",
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

		} // Math2
	} // lang
} // java