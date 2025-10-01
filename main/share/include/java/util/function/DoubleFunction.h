#ifndef _java_util_function_DoubleFunction_h_
#define _java_util_function_DoubleFunction_h_
//$ interface java.util.function.DoubleFunction
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $import DoubleFunction : public ::java::lang::Object {
	$interface(DoubleFunction, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* apply(double value) {return nullptr;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_DoubleFunction_h_