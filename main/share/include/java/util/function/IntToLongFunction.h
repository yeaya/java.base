#ifndef _java_util_function_IntToLongFunction_h_
#define _java_util_function_IntToLongFunction_h_
//$ interface java.util.function.IntToLongFunction
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $import IntToLongFunction : public ::java::lang::Object {
	$interface(IntToLongFunction, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int64_t applyAsLong(int32_t value) {return 0;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_IntToLongFunction_h_