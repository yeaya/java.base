#ifndef _java_util_function_ToIntBiFunction_h_
#define _java_util_function_ToIntBiFunction_h_
//$ interface java.util.function.ToIntBiFunction
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $import ToIntBiFunction : public ::java::lang::Object {
	$interface(ToIntBiFunction, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t applyAsInt(Object$* t, Object$* u) {return 0;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_ToIntBiFunction_h_