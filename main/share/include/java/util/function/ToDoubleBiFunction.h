#ifndef _java_util_function_ToDoubleBiFunction_h_
#define _java_util_function_ToDoubleBiFunction_h_
//$ interface java.util.function.ToDoubleBiFunction
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $import ToDoubleBiFunction : public ::java::lang::Object {
	$interface(ToDoubleBiFunction, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual double applyAsDouble(Object$* t, Object$* u) {return 0.0;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_ToDoubleBiFunction_h_