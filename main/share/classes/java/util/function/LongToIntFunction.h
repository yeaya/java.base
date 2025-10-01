#ifndef _java_util_function_LongToIntFunction_h_
#define _java_util_function_LongToIntFunction_h_
//$ interface java.util.function.LongToIntFunction
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $export LongToIntFunction : public ::java::lang::Object {
	$interface(LongToIntFunction, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t applyAsInt(int64_t value) {return 0;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_LongToIntFunction_h_