#ifndef _java_util_function_ObjDoubleConsumer_h_
#define _java_util_function_ObjDoubleConsumer_h_
//$ interface java.util.function.ObjDoubleConsumer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $export ObjDoubleConsumer : public ::java::lang::Object {
	$interface(ObjDoubleConsumer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void accept(Object$* t, double value) {}
};

		} // function
	} // util
} // java

#endif // _java_util_function_ObjDoubleConsumer_h_