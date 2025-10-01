#ifndef _java_util_function_IntConsumer_h_
#define _java_util_function_IntConsumer_h_
//$ interface java.util.function.IntConsumer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $import IntConsumer : public ::java::lang::Object {
	$interface(IntConsumer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void accept(int32_t value) {}
	virtual ::java::util::function::IntConsumer* andThen(::java::util::function::IntConsumer* after);
	void lambda$andThen$0(::java::util::function::IntConsumer* after, int32_t t);
};

		} // function
	} // util
} // java

#endif // _java_util_function_IntConsumer_h_