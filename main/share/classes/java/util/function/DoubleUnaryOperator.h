#ifndef _java_util_function_DoubleUnaryOperator_h_
#define _java_util_function_DoubleUnaryOperator_h_
//$ interface java.util.function.DoubleUnaryOperator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $export DoubleUnaryOperator : public ::java::lang::Object {
	$interface(DoubleUnaryOperator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::function::DoubleUnaryOperator* andThen(::java::util::function::DoubleUnaryOperator* after);
	virtual double applyAsDouble(double operand) {return 0.0;}
	virtual ::java::util::function::DoubleUnaryOperator* compose(::java::util::function::DoubleUnaryOperator* before);
	static ::java::util::function::DoubleUnaryOperator* identity();
	double lambda$andThen$1(::java::util::function::DoubleUnaryOperator* after, double t);
	double lambda$compose$0(::java::util::function::DoubleUnaryOperator* before, double v);
	static double lambda$identity$2(double t);
};

		} // function
	} // util
} // java

#endif // _java_util_function_DoubleUnaryOperator_h_