#ifndef _jdk_internal_math_FloatingDecimal$ASCIIToBinaryBuffer_h_
#define _jdk_internal_math_FloatingDecimal$ASCIIToBinaryBuffer_h_
//$ class jdk.internal.math.FloatingDecimal$ASCIIToBinaryBuffer
//$ extends jdk.internal.math.FloatingDecimal$ASCIIToBinaryConverter

#include <java/lang/Array.h>
#include <jdk/internal/math/FloatingDecimal$ASCIIToBinaryConverter.h>

#pragma push_macro("SMALL_10_POW")
#undef SMALL_10_POW
#pragma push_macro("BIG_10_POW")
#undef BIG_10_POW
#pragma push_macro("MAX_SMALL_TEN")
#undef MAX_SMALL_TEN
#pragma push_macro("SINGLE_MAX_SMALL_TEN")
#undef SINGLE_MAX_SMALL_TEN
#pragma push_macro("TINY_10_POW")
#undef TINY_10_POW
#pragma push_macro("SINGLE_SMALL_10_POW")
#undef SINGLE_SMALL_10_POW

namespace jdk {
	namespace internal {
		namespace math {

class $import FloatingDecimal$ASCIIToBinaryBuffer : public ::jdk::internal::math::FloatingDecimal$ASCIIToBinaryConverter {
	$class(FloatingDecimal$ASCIIToBinaryBuffer, 0, ::jdk::internal::math::FloatingDecimal$ASCIIToBinaryConverter)
public:
	FloatingDecimal$ASCIIToBinaryBuffer();
	void init$(bool negSign, int32_t decExponent, $chars* digits, int32_t n);
	virtual double doubleValue() override;
	virtual float floatValue() override;
	static bool $assertionsDisabled;
	bool isNegative = false;
	int32_t decExponent = 0;
	$chars* digits = nullptr;
	int32_t nDigits = 0;
	static $doubles* SMALL_10_POW;
	static $floats* SINGLE_SMALL_10_POW;
	static $doubles* BIG_10_POW;
	static $doubles* TINY_10_POW;
	static int32_t MAX_SMALL_TEN;
	static int32_t SINGLE_MAX_SMALL_TEN;
};

		} // math
	} // internal
} // jdk

#pragma pop_macro("SMALL_10_POW")
#pragma pop_macro("BIG_10_POW")
#pragma pop_macro("MAX_SMALL_TEN")
#pragma pop_macro("SINGLE_MAX_SMALL_TEN")
#pragma pop_macro("TINY_10_POW")
#pragma pop_macro("SINGLE_SMALL_10_POW")

#endif // _jdk_internal_math_FloatingDecimal$ASCIIToBinaryBuffer_h_