#ifndef _java_util_function_IntFunction_h_
#define _java_util_function_IntFunction_h_
//$ interface java.util.function.IntFunction
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $import IntFunction : public ::java::lang::Object {
	$interface(IntFunction, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* apply(int32_t value) {return nullptr;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_IntFunction_h_