#ifndef _jdk_internal_math_FloatingDecimal$BinaryToASCIIConverter_h_
#define _jdk_internal_math_FloatingDecimal$BinaryToASCIIConverter_h_
//$ interface jdk.internal.math.FloatingDecimal$BinaryToASCIIConverter
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Appendable;
	}
}

namespace jdk {
	namespace internal {
		namespace math {

class $export FloatingDecimal$BinaryToASCIIConverter : public ::java::lang::Object {
	$interface(FloatingDecimal$BinaryToASCIIConverter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void appendTo(::java::lang::Appendable* buf) {}
	virtual bool decimalDigitsExact() {return false;}
	virtual bool digitsRoundedUp() {return false;}
	virtual int32_t getDecimalExponent() {return 0;}
	virtual int32_t getDigits($chars* digits) {return 0;}
	virtual bool isExceptional() {return false;}
	virtual bool isNegative() {return false;}
	virtual $String* toJavaFormatString() {return nullptr;}
};

		} // math
	} // internal
} // jdk

#endif // _jdk_internal_math_FloatingDecimal$BinaryToASCIIConverter_h_