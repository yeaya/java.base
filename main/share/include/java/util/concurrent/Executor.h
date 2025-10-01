#ifndef _java_util_concurrent_Executor_h_
#define _java_util_concurrent_Executor_h_
//$ interface java.util.concurrent.Executor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import Executor : public ::java::lang::Object {
	$interface(Executor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void execute(::java::lang::Runnable* command) {}
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Executor_h_