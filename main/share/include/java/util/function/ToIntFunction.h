#ifndef _java_util_function_ToIntFunction_h_
#define _java_util_function_ToIntFunction_h_
//$ interface java.util.function.ToIntFunction
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $import ToIntFunction : public ::java::lang::Object {
	$interface(ToIntFunction, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t applyAsInt(Object$* value) {return 0;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_ToIntFunction_h_