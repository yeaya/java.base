#ifndef _java_util_function_Consumer_h_
#define _java_util_function_Consumer_h_
//$ interface java.util.function.Consumer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $import Consumer : public ::java::lang::Object {
	$interface(Consumer, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void accept(Object$* t) {}
	virtual ::java::util::function::Consumer* andThen(::java::util::function::Consumer* after);
	void lambda$andThen$0(::java::util::function::Consumer* after, Object$* t);
};

		} // function
	} // util
} // java

#endif // _java_util_function_Consumer_h_