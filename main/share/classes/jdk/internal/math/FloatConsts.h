#ifndef _jdk_internal_math_FloatConsts_h_
#define _jdk_internal_math_FloatConsts_h_
//$ class jdk.internal.math.FloatConsts
//$ extends java.lang.Object

#include <java/lang/Float.h>

#pragma push_macro("SIGN_BIT_MASK")
#undef SIGN_BIT_MASK
#pragma push_macro("EXP_BIT_MASK")
#undef EXP_BIT_MASK
#pragma push_macro("SIGNIF_BIT_MASK")
#undef SIGNIF_BIT_MASK
#pragma push_macro("EXP_BIAS")
#undef EXP_BIAS
#pragma push_macro("MIN_SUB_EXPONENT")
#undef MIN_SUB_EXPONENT
#pragma push_macro("SIGNIFICAND_WIDTH")
#undef SIGNIFICAND_WIDTH
#pragma push_macro("MIN_EXPONENT")
#undef MIN_EXPONENT

namespace jdk {
	namespace internal {
		namespace math {

class $export FloatConsts : public ::java::lang::Object {
	$class(FloatConsts, 0, ::java::lang::Object)
public:
	FloatConsts();
	void init$();
	static const int32_t SIGNIFICAND_WIDTH = 24;
	static const int32_t MIN_SUB_EXPONENT = -149; // ::java::lang::Float::MIN_EXPONENT - (SIGNIFICAND_WIDTH - 1)
	static const int32_t EXP_BIAS = 127;
	static const int32_t SIGN_BIT_MASK = 0x80000000;
	static const int32_t EXP_BIT_MASK = 0x7F800000;
	static const int32_t SIGNIF_BIT_MASK = 0x007FFFFF;
};

		} // math
	} // internal
} // jdk

#pragma pop_macro("SIGN_BIT_MASK")
#pragma pop_macro("EXP_BIT_MASK")
#pragma pop_macro("SIGNIF_BIT_MASK")
#pragma pop_macro("EXP_BIAS")
#pragma pop_macro("MIN_SUB_EXPONENT")
#pragma pop_macro("SIGNIFICAND_WIDTH")
#pragma pop_macro("MIN_EXPONENT")

#endif // _jdk_internal_math_FloatConsts_h_