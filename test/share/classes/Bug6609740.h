#ifndef _Bug6609740_h_
#define _Bug6609740_h_
//$ class Bug6609740
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Number;
	}
}
namespace java {
	namespace text {
		class NumberFormat;
	}
}

class $export Bug6609740 : public ::java::lang::Object {
	$class(Bug6609740, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Bug6609740();
	void init$();
	static void formatOnPattern(::java::text::NumberFormat* nf, $String* pattern, double number, $String* expected);
	static void main($StringArray* args);
	static void parseOnPattern(::java::text::NumberFormat* nf, $String* pattern, $String* parseString, ::java::lang::Number* expected);
};

#endif // _Bug6609740_h_