#ifndef _java_util_concurrent_ForkJoinWorkerThread_h_
#define _java_util_concurrent_ForkJoinWorkerThread_h_
//$ class java.util.concurrent.ForkJoinWorkerThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace lang {
		class ThreadGroup;
		class Throwable;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ForkJoinPool;
			class ForkJoinPool$WorkQueue;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ForkJoinWorkerThread : public ::java::lang::Thread {
	$class(ForkJoinWorkerThread, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	ForkJoinWorkerThread();
	void init$(::java::lang::ThreadGroup* group, ::java::util::concurrent::ForkJoinPool* pool, bool useSystemClassLoader, bool isInnocuous);
	void init$(::java::lang::ThreadGroup* group, ::java::util::concurrent::ForkJoinPool* pool);
	void init$(::java::util::concurrent::ForkJoinPool* pool);
	virtual ::java::util::concurrent::ForkJoinPool* getPool();
	virtual int32_t getPoolIndex();
	virtual void onStart();
	virtual void onTermination($Throwable* exception);
	virtual void run() override;
	::java::util::concurrent::ForkJoinPool* pool = nullptr;
	::java::util::concurrent::ForkJoinPool$WorkQueue* workQueue = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ForkJoinWorkerThread_h_