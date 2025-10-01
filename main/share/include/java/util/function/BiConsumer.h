#ifndef _java_util_function_BiConsumer_h_
#define _java_util_function_BiConsumer_h_
//$ interface java.util.function.BiConsumer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $import BiConsumer : public ::java::lang::Object {
	$interface(BiConsumer, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void accept(Object$* t, Object$* u) {}
	virtual ::java::util::function::BiConsumer* andThen(::java::util::function::BiConsumer* after);
	void lambda$andThen$0(::java::util::function::BiConsumer* after, Object$* l, Object$* r);
};

		} // function
	} // util
} // java

#endif // _java_util_function_BiConsumer_h_