#ifndef _java_util_function_DoubleToIntFunction_h_
#define _java_util_function_DoubleToIntFunction_h_
//$ interface java.util.function.DoubleToIntFunction
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $export DoubleToIntFunction : public ::java::lang::Object {
	$interface(DoubleToIntFunction, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t applyAsInt(double value) {return 0;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_DoubleToIntFunction_h_