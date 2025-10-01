#ifndef _java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory_h_
#define _java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory_h_
//$ interface java.util.concurrent.ForkJoinPool$ForkJoinWorkerThreadFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {
			class ForkJoinPool;
			class ForkJoinWorkerThread;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ForkJoinPool$ForkJoinWorkerThreadFactory : public ::java::lang::Object {
	$interface(ForkJoinPool$ForkJoinWorkerThreadFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::concurrent::ForkJoinWorkerThread* newThread(::java::util::concurrent::ForkJoinPool* pool) {return nullptr;}
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory_h_