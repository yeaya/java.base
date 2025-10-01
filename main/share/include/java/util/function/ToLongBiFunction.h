#ifndef _java_util_function_ToLongBiFunction_h_
#define _java_util_function_ToLongBiFunction_h_
//$ interface java.util.function.ToLongBiFunction
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $import ToLongBiFunction : public ::java::lang::Object {
	$interface(ToLongBiFunction, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int64_t applyAsLong(Object$* t, Object$* u) {return 0;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_ToLongBiFunction_h_