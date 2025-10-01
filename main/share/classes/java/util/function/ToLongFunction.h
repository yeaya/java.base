#ifndef _java_util_function_ToLongFunction_h_
#define _java_util_function_ToLongFunction_h_
//$ interface java.util.function.ToLongFunction
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $export ToLongFunction : public ::java::lang::Object {
	$interface(ToLongFunction, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int64_t applyAsLong(Object$* value) {return 0;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_ToLongFunction_h_