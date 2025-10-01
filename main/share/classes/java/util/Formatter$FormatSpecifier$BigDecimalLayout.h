#ifndef _java_util_Formatter$FormatSpecifier$BigDecimalLayout_h_
#define _java_util_Formatter$FormatSpecifier$BigDecimalLayout_h_
//$ class java.util.Formatter$FormatSpecifier$BigDecimalLayout
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace util {
		class Formatter$BigDecimalLayoutForm;
		class Formatter$FormatSpecifier;
	}
}

namespace java {
	namespace util {

class Formatter$FormatSpecifier$BigDecimalLayout : public ::java::lang::Object {
	$class(Formatter$FormatSpecifier$BigDecimalLayout, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Formatter$FormatSpecifier$BigDecimalLayout();
	void init$(::java::util::Formatter$FormatSpecifier* this$1, ::java::math::BigInteger* intVal, int32_t scale, ::java::util::Formatter$BigDecimalLayoutForm* form);
	virtual ::java::lang::StringBuilder* exponent();
	virtual bool hasDot();
	void layout(::java::math::BigInteger* intVal, int32_t scale, ::java::util::Formatter$BigDecimalLayoutForm* form);
	virtual ::java::lang::StringBuilder* mantissa();
	virtual int32_t scale();
	::java::util::Formatter$FormatSpecifier* this$1 = nullptr;
	::java::lang::StringBuilder* mant = nullptr;
	::java::lang::StringBuilder* exp = nullptr;
	bool dot = false;
	int32_t scale$ = 0;
};

	} // util
} // java

#endif // _java_util_Formatter$FormatSpecifier$BigDecimalLayout_h_