#ifndef _java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_h_
#define _java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_h_
//$ class java.util.concurrent.ForkJoinWorkerThread$InnocuousForkJoinWorkerThread
//$ extends java.util.concurrent.ForkJoinWorkerThread

#include <java/util/concurrent/ForkJoinWorkerThread.h>

namespace java {
	namespace lang {
		class ClassLoader;
		class Thread$UncaughtExceptionHandler;
		class ThreadGroup;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ForkJoinPool;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ForkJoinWorkerThread$InnocuousForkJoinWorkerThread : public ::java::util::concurrent::ForkJoinWorkerThread {
	$class(ForkJoinWorkerThread$InnocuousForkJoinWorkerThread, 0, ::java::util::concurrent::ForkJoinWorkerThread)
public:
	ForkJoinWorkerThread$InnocuousForkJoinWorkerThread();
	void init$(::java::util::concurrent::ForkJoinPool* pool);
	virtual void setContextClassLoader(::java::lang::ClassLoader* cl) override;
	virtual void setUncaughtExceptionHandler(::java::lang::Thread$UncaughtExceptionHandler* x) override;
	static ::java::lang::ThreadGroup* innocuousThreadGroup;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_h_