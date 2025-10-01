#ifndef _jdk_internal_math_FloatingDecimal$BinaryToASCIIBuffer_h_
#define _jdk_internal_math_FloatingDecimal$BinaryToASCIIBuffer_h_
//$ class jdk.internal.math.FloatingDecimal$BinaryToASCIIBuffer
//$ extends jdk.internal.math.FloatingDecimal$BinaryToASCIIConverter

#include <java/lang/Array.h>
#include <jdk/internal/math/FloatingDecimal$BinaryToASCIIConverter.h>

#pragma push_macro("N_5_BITS")
#undef N_5_BITS

namespace java {
	namespace lang {
		class Appendable;
	}
}

namespace jdk {
	namespace internal {
		namespace math {

class $import FloatingDecimal$BinaryToASCIIBuffer : public ::jdk::internal::math::FloatingDecimal$BinaryToASCIIConverter {
	$class(FloatingDecimal$BinaryToASCIIBuffer, 0, ::jdk::internal::math::FloatingDecimal$BinaryToASCIIConverter)
public:
	FloatingDecimal$BinaryToASCIIBuffer();
	void init$();
	void init$(bool isNegative, $chars* digits);
	virtual void appendTo(::java::lang::Appendable* buf) override;
	virtual bool decimalDigitsExact() override;
	void developLongDigits(int32_t decExponent, int64_t lvalue, int32_t insignificantDigits);
	virtual bool digitsRoundedUp() override;
	void dtoa(int32_t binExp, int64_t fractBits, int32_t nSignificantBits, bool isCompatibleFormat);
	static int32_t estimateDecExp(int64_t fractBits, int32_t binExp);
	int32_t getChars($chars* result);
	virtual int32_t getDecimalExponent() override;
	virtual int32_t getDigits($chars* digits) override;
	static int32_t insignificantDigits(int32_t insignificant);
	static int32_t insignificantDigitsForPow2(int32_t p2);
	virtual bool isExceptional() override;
	virtual bool isNegative() override;
	void roundup();
	void setSign(bool isNegative);
	virtual $String* toJavaFormatString() override;
	static bool $assertionsDisabled;
	bool isNegative$ = false;
	int32_t decExponent = 0;
	int32_t firstDigitIndex = 0;
	int32_t nDigits = 0;
	$chars* digits = nullptr;
	$chars* buffer = nullptr;
	bool exactDecimalConversion = false;
	bool decimalDigitsRoundedUp = false;
	static $ints* insignificantDigitsNumber;
	static $ints* N_5_BITS;
};

		} // math
	} // internal
} // jdk

#pragma pop_macro("N_5_BITS")

#endif // _jdk_internal_math_FloatingDecimal$BinaryToASCIIBuffer_h_