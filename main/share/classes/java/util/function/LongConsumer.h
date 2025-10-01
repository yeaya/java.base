#ifndef _java_util_function_LongConsumer_h_
#define _java_util_function_LongConsumer_h_
//$ interface java.util.function.LongConsumer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $export LongConsumer : public ::java::lang::Object {
	$interface(LongConsumer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void accept(int64_t value) {}
	virtual ::java::util::function::LongConsumer* andThen(::java::util::function::LongConsumer* after);
	void lambda$andThen$0(::java::util::function::LongConsumer* after, int64_t t);
};

		} // function
	} // util
} // java

#endif // _java_util_function_LongConsumer_h_