#ifndef _java_util_function_DoubleSupplier_h_
#define _java_util_function_DoubleSupplier_h_
//$ interface java.util.function.DoubleSupplier
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $export DoubleSupplier : public ::java::lang::Object {
	$interface(DoubleSupplier, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual double getAsDouble() {return 0.0;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_DoubleSupplier_h_