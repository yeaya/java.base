#ifndef _java_util_function_IntToDoubleFunction_h_
#define _java_util_function_IntToDoubleFunction_h_
//$ interface java.util.function.IntToDoubleFunction
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $import IntToDoubleFunction : public ::java::lang::Object {
	$interface(IntToDoubleFunction, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual double applyAsDouble(int32_t value) {return 0.0;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_IntToDoubleFunction_h_