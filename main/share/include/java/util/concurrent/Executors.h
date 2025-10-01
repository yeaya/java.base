#ifndef _java_util_concurrent_Executors_h_
#define _java_util_concurrent_Executors_h_
//$ class java.util.concurrent.Executors
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace security {
		class PrivilegedAction;
		class PrivilegedExceptionAction;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
			class ExecutorService;
			class ScheduledExecutorService;
			class ThreadFactory;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import Executors : public ::java::lang::Object {
	$class(Executors, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Executors();
	void init$();
	static ::java::util::concurrent::Callable* callable(::java::lang::Runnable* task, Object$* result);
	static ::java::util::concurrent::Callable* callable(::java::lang::Runnable* task);
	static ::java::util::concurrent::Callable* callable(::java::security::PrivilegedAction* action);
	static ::java::util::concurrent::Callable* callable(::java::security::PrivilegedExceptionAction* action);
	static ::java::util::concurrent::ThreadFactory* defaultThreadFactory();
	static ::java::util::concurrent::ExecutorService* newCachedThreadPool();
	static ::java::util::concurrent::ExecutorService* newCachedThreadPool(::java::util::concurrent::ThreadFactory* threadFactory);
	static ::java::util::concurrent::ExecutorService* newFixedThreadPool(int32_t nThreads);
	static ::java::util::concurrent::ExecutorService* newFixedThreadPool(int32_t nThreads, ::java::util::concurrent::ThreadFactory* threadFactory);
	static ::java::util::concurrent::ScheduledExecutorService* newScheduledThreadPool(int32_t corePoolSize);
	static ::java::util::concurrent::ScheduledExecutorService* newScheduledThreadPool(int32_t corePoolSize, ::java::util::concurrent::ThreadFactory* threadFactory);
	static ::java::util::concurrent::ExecutorService* newSingleThreadExecutor();
	static ::java::util::concurrent::ExecutorService* newSingleThreadExecutor(::java::util::concurrent::ThreadFactory* threadFactory);
	static ::java::util::concurrent::ScheduledExecutorService* newSingleThreadScheduledExecutor();
	static ::java::util::concurrent::ScheduledExecutorService* newSingleThreadScheduledExecutor(::java::util::concurrent::ThreadFactory* threadFactory);
	static ::java::util::concurrent::ExecutorService* newWorkStealingPool(int32_t parallelism);
	static ::java::util::concurrent::ExecutorService* newWorkStealingPool();
	static ::java::util::concurrent::Callable* privilegedCallable(::java::util::concurrent::Callable* callable);
	static ::java::util::concurrent::Callable* privilegedCallableUsingCurrentClassLoader(::java::util::concurrent::Callable* callable);
	static ::java::util::concurrent::ThreadFactory* privilegedThreadFactory();
	static ::java::util::concurrent::ExecutorService* unconfigurableExecutorService(::java::util::concurrent::ExecutorService* executor);
	static ::java::util::concurrent::ScheduledExecutorService* unconfigurableScheduledExecutorService(::java::util::concurrent::ScheduledExecutorService* executor);
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Executors_h_