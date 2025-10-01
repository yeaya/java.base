#ifndef _java_util_function_DoubleBinaryOperator_h_
#define _java_util_function_DoubleBinaryOperator_h_
//$ interface java.util.function.DoubleBinaryOperator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $import DoubleBinaryOperator : public ::java::lang::Object {
	$interface(DoubleBinaryOperator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual double applyAsDouble(double left, double right) {return 0.0;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_DoubleBinaryOperator_h_