#ifndef _jdk_internal_math_FloatingDecimal$ExceptionalBinaryToASCIIBuffer_h_
#define _jdk_internal_math_FloatingDecimal$ExceptionalBinaryToASCIIBuffer_h_
//$ class jdk.internal.math.FloatingDecimal$ExceptionalBinaryToASCIIBuffer
//$ extends jdk.internal.math.FloatingDecimal$BinaryToASCIIConverter

#include <java/lang/Array.h>
#include <jdk/internal/math/FloatingDecimal$BinaryToASCIIConverter.h>

namespace java {
	namespace lang {
		class Appendable;
	}
}

namespace jdk {
	namespace internal {
		namespace math {

class $import FloatingDecimal$ExceptionalBinaryToASCIIBuffer : public ::jdk::internal::math::FloatingDecimal$BinaryToASCIIConverter {
	$class(FloatingDecimal$ExceptionalBinaryToASCIIBuffer, 0, ::jdk::internal::math::FloatingDecimal$BinaryToASCIIConverter)
public:
	FloatingDecimal$ExceptionalBinaryToASCIIBuffer();
	void init$($String* image, bool isNegative);
	virtual void appendTo(::java::lang::Appendable* buf) override;
	virtual bool decimalDigitsExact() override;
	virtual bool digitsRoundedUp() override;
	virtual int32_t getDecimalExponent() override;
	virtual int32_t getDigits($chars* digits) override;
	virtual bool isExceptional() override;
	virtual bool isNegative() override;
	virtual $String* toJavaFormatString() override;
	static bool $assertionsDisabled;
	$String* image = nullptr;
	bool isNegative$ = false;
};

		} // math
	} // internal
} // jdk

#endif // _jdk_internal_math_FloatingDecimal$ExceptionalBinaryToASCIIBuffer_h_