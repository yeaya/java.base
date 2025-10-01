#ifndef _java_util_concurrent_Executors$PrivilegedCallableUsingCurrentClassLoader_h_
#define _java_util_concurrent_Executors$PrivilegedCallableUsingCurrentClassLoader_h_
//$ class java.util.concurrent.Executors$PrivilegedCallableUsingCurrentClassLoader
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class Executors$PrivilegedCallableUsingCurrentClassLoader : public ::java::util::concurrent::Callable {
	$class(Executors$PrivilegedCallableUsingCurrentClassLoader, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	Executors$PrivilegedCallableUsingCurrentClassLoader();
	void init$(::java::util::concurrent::Callable* task);
	virtual $Object* call() override;
	virtual $String* toString() override;
	::java::util::concurrent::Callable* task = nullptr;
	::java::security::AccessControlContext* acc = nullptr;
	::java::lang::ClassLoader* ccl = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Executors$PrivilegedCallableUsingCurrentClassLoader_h_