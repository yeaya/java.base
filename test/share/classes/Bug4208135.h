#ifndef _Bug4208135_h_
#define _Bug4208135_h_
//$ class Bug4208135
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Number;
	}
}
namespace java {
	namespace text {
		class DecimalFormat;
	}
}

class $export Bug4208135 : public ::java::lang::Object {
	$class(Bug4208135, 0, ::java::lang::Object)
public:
	Bug4208135();
	void init$();
	static void checkFormat(::java::lang::Number* num, $String* expected);
	static void main($StringArray* args);
	static ::java::text::DecimalFormat* df;
	static bool err;
};

#endif // _Bug4208135_h_