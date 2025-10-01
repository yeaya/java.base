#ifndef _java_util_function_IntBinaryOperator_h_
#define _java_util_function_IntBinaryOperator_h_
//$ interface java.util.function.IntBinaryOperator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $import IntBinaryOperator : public ::java::lang::Object {
	$interface(IntBinaryOperator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t applyAsInt(int32_t left, int32_t right) {return 0;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_IntBinaryOperator_h_