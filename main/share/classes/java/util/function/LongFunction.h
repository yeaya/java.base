#ifndef _java_util_function_LongFunction_h_
#define _java_util_function_LongFunction_h_
//$ interface java.util.function.LongFunction
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $export LongFunction : public ::java::lang::Object {
	$interface(LongFunction, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* apply(int64_t value) {return nullptr;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_LongFunction_h_