#ifndef _java_lang_Math2_DoubleConsts_h_
#define _java_lang_Math2_DoubleConsts_h_
//$ class java.lang.Math2.DoubleConsts
//$ extends java.lang.Object

#include <java/lang/Double.h>

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

namespace java {
	namespace lang {
		namespace Math2 {

class $export DoubleConsts : public ::java::lang::Object {
	$class(DoubleConsts, 0, ::java::lang::Object)
public:
	DoubleConsts();
	void init$();
	static const int32_t EXP_BIAS = 1023;
	static const int64_t EXP_BIT_MASK = (int64_t)0x7FF0000000000000;
	static const int64_t SIGN_BIT_MASK = (int64_t)0x8000000000000000;
	static const int64_t SIGNIF_BIT_MASK = (int64_t)0x000FFFFFFFFFFFFF;
	static const int32_t SIGNIFICAND_WIDTH = 53;
	static const int32_t MIN_SUB_EXPONENT = -1074; // ::java::lang::Double::MIN_EXPONENT - (SIGNIFICAND_WIDTH - 1)
};

		} // Math2
	} // lang
} // java

#pragma pop_macro("SIGN_BIT_MASK")
#pragma pop_macro("EXP_BIT_MASK")
#pragma pop_macro("SIGNIF_BIT_MASK")
#pragma pop_macro("EXP_BIAS")
#pragma pop_macro("MIN_SUB_EXPONENT")
#pragma pop_macro("SIGNIFICAND_WIDTH")
#pragma pop_macro("MIN_EXPONENT")

#endif // _java_lang_Math2_DoubleConsts_h_