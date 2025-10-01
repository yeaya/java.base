#ifndef _java_util_function_LongSupplier_h_
#define _java_util_function_LongSupplier_h_
//$ interface java.util.function.LongSupplier
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $import LongSupplier : public ::java::lang::Object {
	$interface(LongSupplier, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int64_t getAsLong() {return 0;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_LongSupplier_h_