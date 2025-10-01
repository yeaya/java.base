#ifndef _java_util_function_LongBinaryOperator_h_
#define _java_util_function_LongBinaryOperator_h_
//$ interface java.util.function.LongBinaryOperator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $export LongBinaryOperator : public ::java::lang::Object {
	$interface(LongBinaryOperator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int64_t applyAsLong(int64_t left, int64_t right) {return 0;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_LongBinaryOperator_h_