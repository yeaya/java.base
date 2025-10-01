#ifndef _java_util_concurrent_Executors$PrivilegedCallable_h_
#define _java_util_concurrent_Executors$PrivilegedCallable_h_
//$ class java.util.concurrent.Executors$PrivilegedCallable
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace java {
	namespace security {
		class AccessControlContext;
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class Executors$PrivilegedCallable : public ::java::util::concurrent::Callable {
	$class(Executors$PrivilegedCallable, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	Executors$PrivilegedCallable();
	void init$(::java::util::concurrent::Callable* task);
	virtual $Object* call() override;
	virtual $String* toString() override;
	::java::util::concurrent::Callable* task = nullptr;
	::java::security::AccessControlContext* acc = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Executors$PrivilegedCallable_h_