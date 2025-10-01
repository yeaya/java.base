#ifndef _java_util_function_BiFunction_h_
#define _java_util_function_BiFunction_h_
//$ interface java.util.function.BiFunction
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}

namespace java {
	namespace util {
		namespace function {

class $import BiFunction : public ::java::lang::Object {
	$interface(BiFunction, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::function::BiFunction* andThen(::java::util::function::Function* after);
	virtual $Object* apply(Object$* t, Object$* u) {return nullptr;}
	$Object* lambda$andThen$0(::java::util::function::Function* after, Object$* t, Object$* u);
};

		} // function
	} // util
} // java

#endif // _java_util_function_BiFunction_h_