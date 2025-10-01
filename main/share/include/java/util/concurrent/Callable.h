#ifndef _java_util_concurrent_Callable_h_
#define _java_util_concurrent_Callable_h_
//$ interface java.util.concurrent.Callable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {

class $import Callable : public ::java::lang::Object {
	$interface(Callable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* call() {return nullptr;}
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Callable_h_