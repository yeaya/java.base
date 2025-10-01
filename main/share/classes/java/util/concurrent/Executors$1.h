#ifndef _java_util_concurrent_Executors$1_h_
#define _java_util_concurrent_Executors$1_h_
//$ class java.util.concurrent.Executors$1
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace java {
	namespace security {
		class PrivilegedAction;
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class Executors$1 : public ::java::util::concurrent::Callable {
	$class(Executors$1, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	Executors$1();
	void init$(::java::security::PrivilegedAction* val$action);
	virtual $Object* call() override;
	::java::security::PrivilegedAction* val$action = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Executors$1_h_