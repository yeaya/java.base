#ifndef _java_util_concurrent_Executors$2_h_
#define _java_util_concurrent_Executors$2_h_
//$ class java.util.concurrent.Executors$2
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace java {
	namespace security {
		class PrivilegedExceptionAction;
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class Executors$2 : public ::java::util::concurrent::Callable {
	$class(Executors$2, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	Executors$2();
	void init$(::java::security::PrivilegedExceptionAction* val$action);
	virtual $Object* call() override;
	::java::security::PrivilegedExceptionAction* val$action = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Executors$2_h_