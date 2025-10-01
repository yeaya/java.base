#ifndef _jdk_internal_math_FloatingDecimal_h_
#define _jdk_internal_math_FloatingDecimal_h_
//$ class jdk.internal.math.FloatingDecimal
//$ extends java.lang.Object

#include <jdk/internal/math/DoubleConsts.h>
#include <jdk/internal/math/FloatConsts.h>

#pragma push_macro("SINGLE_MIN_DECIMAL_EXPONENT")
#undef SINGLE_MIN_DECIMAL_EXPONENT
#pragma push_macro("B2AC_NOT_A_NUMBER")
#undef B2AC_NOT_A_NUMBER
#pragma push_macro("NAN_LENGTH")
#undef NAN_LENGTH
#pragma push_macro("EXP_ONE")
#undef EXP_ONE
#pragma push_macro("EXP_BIAS")
#undef EXP_BIAS
#pragma push_macro("B2AC_NEGATIVE_INFINITY")
#undef B2AC_NEGATIVE_INFINITY
#pragma push_macro("B2AC_POSITIVE_INFINITY")
#undef B2AC_POSITIVE_INFINITY
#pragma push_macro("SINGLE_MAX_DECIMAL_EXPONENT")
#undef SINGLE_MAX_DECIMAL_EXPONENT
#pragma push_macro("SIGNIFICAND_WIDTH")
#undef SIGNIFICAND_WIDTH
#pragma push_macro("B2AC_POSITIVE_ZERO")
#undef B2AC_POSITIVE_ZERO
#pragma push_macro("A2BC_POSITIVE_ZERO")
#undef A2BC_POSITIVE_ZERO
#pragma push_macro("INFINITY_LENGTH")
#undef INFINITY_LENGTH
#pragma push_macro("B2AC_NEGATIVE_ZERO")
#undef B2AC_NEGATIVE_ZERO
#pragma push_macro("A2BC_NEGATIVE_ZERO")
#undef A2BC_NEGATIVE_ZERO
#pragma push_macro("SINGLE_FRACT_HOB")
#undef SINGLE_FRACT_HOB
#pragma push_macro("BIG_DECIMAL_EXPONENT")
#undef BIG_DECIMAL_EXPONENT
#pragma push_macro("INT_DECIMAL_DIGITS")
#undef INT_DECIMAL_DIGITS
#pragma push_macro("MAX_NDIGITS")
#undef MAX_NDIGITS
#pragma push_macro("SINGLE_MAX_DECIMAL_DIGITS")
#undef SINGLE_MAX_DECIMAL_DIGITS
#pragma push_macro("MIN_SMALL_BIN_EXP")
#undef MIN_SMALL_BIN_EXP
#pragma push_macro("A2BC_POSITIVE_INFINITY")
#undef A2BC_POSITIVE_INFINITY
#pragma push_macro("MAX_DECIMAL_EXPONENT")
#undef MAX_DECIMAL_EXPONENT
#pragma push_macro("SINGLE_EXP_SHIFT")
#undef SINGLE_EXP_SHIFT
#pragma push_macro("A2BC_NEGATIVE_INFINITY")
#undef A2BC_NEGATIVE_INFINITY
#pragma push_macro("FRACT_HOB")
#undef FRACT_HOB
#pragma push_macro("NAN_REP")
#undef NAN_REP
#pragma push_macro("A2BC_NOT_A_NUMBER")
#undef A2BC_NOT_A_NUMBER
#pragma push_macro("SINGLE_MAX_NDIGITS")
#undef SINGLE_MAX_NDIGITS
#pragma push_macro("EXP_SHIFT")
#undef EXP_SHIFT
#pragma push_macro("MAX_SMALL_BIN_EXP")
#undef MAX_SMALL_BIN_EXP
#pragma push_macro("MAX_DECIMAL_DIGITS")
#undef MAX_DECIMAL_DIGITS
#pragma push_macro("INFINITY_REP")
#undef INFINITY_REP
#pragma push_macro("MIN_DECIMAL_EXPONENT")
#undef MIN_DECIMAL_EXPONENT

namespace java {
	namespace lang {
		class Appendable;
		class ThreadLocal;
	}
}
namespace jdk {
	namespace internal {
		namespace math {
			class FloatingDecimal$ASCIIToBinaryConverter;
			class FloatingDecimal$BinaryToASCIIBuffer;
			class FloatingDecimal$BinaryToASCIIConverter;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace math {

class $export FloatingDecimal : public ::java::lang::Object {
	$class(FloatingDecimal, 0, ::java::lang::Object)
public:
	FloatingDecimal();
	void init$();
	static void appendTo(double d, ::java::lang::Appendable* buf);
	static void appendTo(float f, ::java::lang::Appendable* buf);
	static ::jdk::internal::math::FloatingDecimal$BinaryToASCIIBuffer* getBinaryToASCIIBuffer();
	static ::jdk::internal::math::FloatingDecimal$BinaryToASCIIConverter* getBinaryToASCIIConverter(double d);
	static ::jdk::internal::math::FloatingDecimal$BinaryToASCIIConverter* getBinaryToASCIIConverter(double d, bool isCompatibleFormat);
	static ::jdk::internal::math::FloatingDecimal$BinaryToASCIIConverter* getBinaryToASCIIConverter(float f);
	static int32_t getHexDigit($String* s, int32_t position);
	static double parseDouble($String* s);
	static float parseFloat($String* s);
	static ::jdk::internal::math::FloatingDecimal$ASCIIToBinaryConverter* parseHexString($String* s);
	static ::jdk::internal::math::FloatingDecimal$ASCIIToBinaryConverter* readJavaFormatString($String* in);
	static $String* stripLeadingZeros($String* s);
	static $String* toJavaFormatString(double d);
	static $String* toJavaFormatString(float f);
	static bool $assertionsDisabled;
	static const int32_t EXP_SHIFT = 52; // ::jdk::internal::math::DoubleConsts::SIGNIFICAND_WIDTH - 1
	static const int64_t FRACT_HOB = ((int64_t)1 << EXP_SHIFT);
	static const int64_t EXP_ONE = 0x3FF0000000000000; // ((int64_t)::jdk::internal::math::DoubleConsts::EXP_BIAS) << EXP_SHIFT
	static const int32_t MAX_SMALL_BIN_EXP = 62;
	static const int32_t MIN_SMALL_BIN_EXP = -(63 / 3);
	static const int32_t MAX_DECIMAL_DIGITS = 15;
	static const int32_t MAX_DECIMAL_EXPONENT = 308;
	static const int32_t MIN_DECIMAL_EXPONENT = (-324);
	static const int32_t BIG_DECIMAL_EXPONENT = 324;
	static const int32_t MAX_NDIGITS = 1100;
	static const int32_t SINGLE_EXP_SHIFT = 23; // ::jdk::internal::math::FloatConsts::SIGNIFICAND_WIDTH - 1
	static const int32_t SINGLE_FRACT_HOB = 8388608; // 1 << SINGLE_EXP_SHIFT
	static const int32_t SINGLE_MAX_DECIMAL_DIGITS = 7;
	static const int32_t SINGLE_MAX_DECIMAL_EXPONENT = 38;
	static const int32_t SINGLE_MIN_DECIMAL_EXPONENT = (-45);
	static const int32_t SINGLE_MAX_NDIGITS = 200;
	static const int32_t INT_DECIMAL_DIGITS = 9;
	static $String* INFINITY_REP;
	static int32_t INFINITY_LENGTH;
	static $String* NAN_REP;
	static int32_t NAN_LENGTH;
	static ::jdk::internal::math::FloatingDecimal$BinaryToASCIIConverter* B2AC_POSITIVE_INFINITY;
	static ::jdk::internal::math::FloatingDecimal$BinaryToASCIIConverter* B2AC_NEGATIVE_INFINITY;
	static ::jdk::internal::math::FloatingDecimal$BinaryToASCIIConverter* B2AC_NOT_A_NUMBER;
	static ::jdk::internal::math::FloatingDecimal$BinaryToASCIIConverter* B2AC_POSITIVE_ZERO;
	static ::jdk::internal::math::FloatingDecimal$BinaryToASCIIConverter* B2AC_NEGATIVE_ZERO;
	static ::java::lang::ThreadLocal* threadLocalBinaryToASCIIBuffer;
	static ::jdk::internal::math::FloatingDecimal$ASCIIToBinaryConverter* A2BC_POSITIVE_INFINITY;
	static ::jdk::internal::math::FloatingDecimal$ASCIIToBinaryConverter* A2BC_NEGATIVE_INFINITY;
	static ::jdk::internal::math::FloatingDecimal$ASCIIToBinaryConverter* A2BC_NOT_A_NUMBER;
	static ::jdk::internal::math::FloatingDecimal$ASCIIToBinaryConverter* A2BC_POSITIVE_ZERO;
	static ::jdk::internal::math::FloatingDecimal$ASCIIToBinaryConverter* A2BC_NEGATIVE_ZERO;
};

		} // math
	} // internal
} // jdk

#pragma pop_macro("SINGLE_MIN_DECIMAL_EXPONENT")
#pragma pop_macro("B2AC_NOT_A_NUMBER")
#pragma pop_macro("NAN_LENGTH")
#pragma pop_macro("EXP_ONE")
#pragma pop_macro("EXP_BIAS")
#pragma pop_macro("B2AC_NEGATIVE_INFINITY")
#pragma pop_macro("B2AC_POSITIVE_INFINITY")
#pragma pop_macro("SINGLE_MAX_DECIMAL_EXPONENT")
#pragma pop_macro("SIGNIFICAND_WIDTH")
#pragma pop_macro("B2AC_POSITIVE_ZERO")
#pragma pop_macro("A2BC_POSITIVE_ZERO")
#pragma pop_macro("INFINITY_LENGTH")
#pragma pop_macro("B2AC_NEGATIVE_ZERO")
#pragma pop_macro("A2BC_NEGATIVE_ZERO")
#pragma pop_macro("SINGLE_FRACT_HOB")
#pragma pop_macro("BIG_DECIMAL_EXPONENT")
#pragma pop_macro("INT_DECIMAL_DIGITS")
#pragma pop_macro("MAX_NDIGITS")
#pragma pop_macro("SINGLE_MAX_DECIMAL_DIGITS")
#pragma pop_macro("MIN_SMALL_BIN_EXP")
#pragma pop_macro("A2BC_POSITIVE_INFINITY")
#pragma pop_macro("MAX_DECIMAL_EXPONENT")
#pragma pop_macro("SINGLE_EXP_SHIFT")
#pragma pop_macro("A2BC_NEGATIVE_INFINITY")
#pragma pop_macro("FRACT_HOB")
#pragma pop_macro("NAN_REP")
#pragma pop_macro("A2BC_NOT_A_NUMBER")
#pragma pop_macro("SINGLE_MAX_NDIGITS")
#pragma pop_macro("EXP_SHIFT")
#pragma pop_macro("MAX_SMALL_BIN_EXP")
#pragma pop_macro("MAX_DECIMAL_DIGITS")
#pragma pop_macro("INFINITY_REP")
#pragma pop_macro("MIN_DECIMAL_EXPONENT")

#endif // _jdk_internal_math_FloatingDecimal_h_