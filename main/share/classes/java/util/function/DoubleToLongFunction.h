#ifndef _java_util_function_DoubleToLongFunction_h_
#define _java_util_function_DoubleToLongFunction_h_
//$ interface java.util.function.DoubleToLongFunction
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $export DoubleToLongFunction : public ::java::lang::Object {
	$interface(DoubleToLongFunction, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int64_t applyAsLong(double value) {return 0;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_DoubleToLongFunction_h_