#ifndef _java_util_function_IntUnaryOperator_h_
#define _java_util_function_IntUnaryOperator_h_
//$ interface java.util.function.IntUnaryOperator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $export IntUnaryOperator : public ::java::lang::Object {
	$interface(IntUnaryOperator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::function::IntUnaryOperator* andThen(::java::util::function::IntUnaryOperator* after);
	virtual int32_t applyAsInt(int32_t operand) {return 0;}
	virtual ::java::util::function::IntUnaryOperator* compose(::java::util::function::IntUnaryOperator* before);
	static ::java::util::function::IntUnaryOperator* identity();
	int32_t lambda$andThen$1(::java::util::function::IntUnaryOperator* after, int32_t t);
	int32_t lambda$compose$0(::java::util::function::IntUnaryOperator* before, int32_t v);
	static int32_t lambda$identity$2(int32_t t);
};

		} // function
	} // util
} // java

#endif // _java_util_function_IntUnaryOperator_h_