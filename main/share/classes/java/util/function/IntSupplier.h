#ifndef _java_util_function_IntSupplier_h_
#define _java_util_function_IntSupplier_h_
//$ interface java.util.function.IntSupplier
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $export IntSupplier : public ::java::lang::Object {
	$interface(IntSupplier, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getAsInt() {return 0;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_IntSupplier_h_