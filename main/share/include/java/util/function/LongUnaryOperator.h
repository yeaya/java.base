#ifndef _java_util_function_LongUnaryOperator_h_
#define _java_util_function_LongUnaryOperator_h_
//$ interface java.util.function.LongUnaryOperator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $import LongUnaryOperator : public ::java::lang::Object {
	$interface(LongUnaryOperator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::function::LongUnaryOperator* andThen(::java::util::function::LongUnaryOperator* after);
	virtual int64_t applyAsLong(int64_t operand) {return 0;}
	virtual ::java::util::function::LongUnaryOperator* compose(::java::util::function::LongUnaryOperator* before);
	static ::java::util::function::LongUnaryOperator* identity();
	int64_t lambda$andThen$1(::java::util::function::LongUnaryOperator* after, int64_t t);
	int64_t lambda$compose$0(::java::util::function::LongUnaryOperator* before, int64_t v);
	static int64_t lambda$identity$2(int64_t t);
};

		} // function
	} // util
} // java

#endif // _java_util_function_LongUnaryOperator_h_