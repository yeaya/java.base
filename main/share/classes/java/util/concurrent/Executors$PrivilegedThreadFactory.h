#ifndef _java_util_concurrent_Executors$PrivilegedThreadFactory_h_
#define _java_util_concurrent_Executors$PrivilegedThreadFactory_h_
//$ class java.util.concurrent.Executors$PrivilegedThreadFactory
//$ extends java.util.concurrent.Executors$DefaultThreadFactory

#include <java/util/concurrent/Executors$DefaultThreadFactory.h>

namespace java {
	namespace lang {
		class ClassLoader;
		class Runnable;
		class Thread;
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

class Executors$PrivilegedThreadFactory : public ::java::util::concurrent::Executors$DefaultThreadFactory {
	$class(Executors$PrivilegedThreadFactory, $NO_CLASS_INIT, ::java::util::concurrent::Executors$DefaultThreadFactory)
public:
	Executors$PrivilegedThreadFactory();
	void init$();
	virtual $Thread* newThread(::java::lang::Runnable* r) override;
	::java::security::AccessControlContext* acc = nullptr;
	::java::lang::ClassLoader* ccl = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Executors$PrivilegedThreadFactory_h_