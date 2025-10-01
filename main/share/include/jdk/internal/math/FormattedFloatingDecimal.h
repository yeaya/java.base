#ifndef _jdk_internal_math_FormattedFloatingDecimal_h_
#define _jdk_internal_math_FormattedFloatingDecimal_h_
//$ class jdk.internal.math.FormattedFloatingDecimal
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class ThreadLocal;
	}
}
namespace jdk {
	namespace internal {
		namespace math {
			class FloatingDecimal$BinaryToASCIIConverter;
			class FormattedFloatingDecimal$Form;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace math {

class $import FormattedFloatingDecimal : public ::java::lang::Object {
	$class(FormattedFloatingDecimal, 0, ::java::lang::Object)
public:
	FormattedFloatingDecimal();
	void init$(int32_t precision, ::jdk::internal::math::FormattedFloatingDecimal$Form* form, ::jdk::internal::math::FloatingDecimal$BinaryToASCIIConverter* fdConverter);
	static int32_t applyPrecision(int32_t decExp, $chars* digits, int32_t nDigits, int32_t prec);
	static $chars* create(bool isNegative, int32_t size);
	void fillCompatible(int32_t precision, $chars* digits, int32_t nDigits, int32_t exp, bool isNegative);
	void fillDecimal(int32_t precision, $chars* digits, int32_t nDigits, int32_t exp, bool isNegative);
	void fillScientific(int32_t precision, $chars* digits, int32_t nDigits, int32_t exp, bool isNegative);
	static $chars* getBuffer();
	virtual $chars* getExponent();
	virtual int32_t getExponentRounded();
	virtual $chars* getMantissa();
	static ::jdk::internal::math::FormattedFloatingDecimal* valueOf(double d, int32_t precision, ::jdk::internal::math::FormattedFloatingDecimal$Form* form);
	static bool $assertionsDisabled;
	int32_t decExponentRounded = 0;
	$chars* mantissa = nullptr;
	$chars* exponent = nullptr;
	static ::java::lang::ThreadLocal* threadLocalCharBuffer;
};

		} // math
	} // internal
} // jdk

#endif // _jdk_internal_math_FormattedFloatingDecimal_h_