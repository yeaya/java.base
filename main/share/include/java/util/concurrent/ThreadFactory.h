#ifndef _java_util_concurrent_ThreadFactory_h_
#define _java_util_concurrent_ThreadFactory_h_
//$ interface java.util.concurrent.ThreadFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Runnable;
		class Thread;
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import ThreadFactory : public ::java::lang::Object {
	$interface(ThreadFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Thread* newThread(::java::lang::Runnable* r) {return nullptr;}
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ThreadFactory_h_