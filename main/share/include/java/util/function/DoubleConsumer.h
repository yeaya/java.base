#ifndef _java_util_function_DoubleConsumer_h_
#define _java_util_function_DoubleConsumer_h_
//$ interface java.util.function.DoubleConsumer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $import DoubleConsumer : public ::java::lang::Object {
	$interface(DoubleConsumer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void accept(double value) {}
	virtual ::java::util::function::DoubleConsumer* andThen(::java::util::function::DoubleConsumer* after);
	void lambda$andThen$0(::java::util::function::DoubleConsumer* after, double t);
};

		} // function
	} // util
} // java

#endif // _java_util_function_DoubleConsumer_h_