#ifndef _java_util_function_LongToDoubleFunction_h_
#define _java_util_function_LongToDoubleFunction_h_
//$ interface java.util.function.LongToDoubleFunction
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $export LongToDoubleFunction : public ::java::lang::Object {
	$interface(LongToDoubleFunction, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual double applyAsDouble(int64_t value) {return 0.0;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_LongToDoubleFunction_h_