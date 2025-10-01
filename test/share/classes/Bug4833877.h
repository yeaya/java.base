#ifndef _Bug4833877_h_
#define _Bug4833877_h_
//$ class Bug4833877
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Double;
		class Long;
		class Number;
	}
}
namespace java {
	namespace math {
		class BigDecimal;
	}
}
namespace java {
	namespace text {
		class DecimalFormat;
	}
}

class $export Bug4833877 : public ::java::lang::Object {
	$class(Bug4833877, 0, ::java::lang::Object)
public:
	Bug4833877();
	void init$();
	static void checkFormat(::java::lang::Number* num, $String* expected);
	static void checkParse($String* text, ::java::lang::Double* expected);
	static void checkParse($String* text, ::java::lang::Long* expected);
	static void checkParse($String* text, ::java::math::BigDecimal* expected);
	static void main($StringArray* args);
	static ::java::text::DecimalFormat* df;
	static bool err;
};

#endif // _Bug4833877_h_