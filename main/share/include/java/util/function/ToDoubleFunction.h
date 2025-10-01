#ifndef _java_util_function_ToDoubleFunction_h_
#define _java_util_function_ToDoubleFunction_h_
//$ interface java.util.function.ToDoubleFunction
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $import ToDoubleFunction : public ::java::lang::Object {
	$interface(ToDoubleFunction, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual double applyAsDouble(Object$* value) {return 0.0;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_ToDoubleFunction_h_