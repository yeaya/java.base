#ifndef _java_util_function_ObjIntConsumer_h_
#define _java_util_function_ObjIntConsumer_h_
//$ interface java.util.function.ObjIntConsumer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $import ObjIntConsumer : public ::java::lang::Object {
	$interface(ObjIntConsumer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void accept(Object$* t, int32_t value) {}
};

		} // function
	} // util
} // java

#endif // _java_util_function_ObjIntConsumer_h_