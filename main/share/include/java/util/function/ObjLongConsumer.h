#ifndef _java_util_function_ObjLongConsumer_h_
#define _java_util_function_ObjLongConsumer_h_
//$ interface java.util.function.ObjLongConsumer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $import ObjLongConsumer : public ::java::lang::Object {
	$interface(ObjLongConsumer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void accept(Object$* t, int64_t value) {}
};

		} // function
	} // util
} // java

#endif // _java_util_function_ObjLongConsumer_h_