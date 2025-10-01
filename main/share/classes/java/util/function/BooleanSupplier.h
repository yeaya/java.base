#ifndef _java_util_function_BooleanSupplier_h_
#define _java_util_function_BooleanSupplier_h_
//$ interface java.util.function.BooleanSupplier
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $export BooleanSupplier : public ::java::lang::Object {
	$interface(BooleanSupplier, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool getAsBoolean() {return false;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_BooleanSupplier_h_