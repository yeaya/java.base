#ifndef _java_util_concurrent_ThreadPoolExecutor_h_
#define _java_util_concurrent_ThreadPoolExecutor_h_
//$ class java.util.concurrent.ThreadPoolExecutor
//$ extends java.util.concurrent.AbstractExecutorService

#include <java/util/concurrent/AbstractExecutorService.h>

#pragma push_macro("COUNT_BITS")
#undef COUNT_BITS
#pragma push_macro("COUNT_MASK")
#undef COUNT_MASK
#pragma push_macro("ONLY_ONE")
#undef ONLY_ONE
#pragma push_macro("RUNNING")
#undef RUNNING
#pragma push_macro("SHUTDOWN")
#undef SHUTDOWN
#pragma push_macro("STOP")
#undef STOP
#pragma push_macro("TERMINATED")
#undef TERMINATED
#pragma push_macro("TIDYING")
#undef TIDYING

namespace java {
	namespace lang {
		class Runnable;
		class RuntimePermission;
		class Thread;
		class Throwable;
	}
}
namespace java {
	namespace util {
		class HashSet;
		class List;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class BlockingQueue;
			class RejectedExecutionHandler;
			class ThreadFactory;
			class ThreadPoolExecutor$Worker;
			class TimeUnit;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class Condition;
				class ReentrantLock;
			}
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ThreadPoolExecutor : public ::java::util::concurrent::AbstractExecutorService {
	$class(ThreadPoolExecutor, $HAS_FINALIZE, ::java::util::concurrent::AbstractExecutorService)
public:
	ThreadPoolExecutor();
	void init$(int32_t corePoolSize, int32_t maximumPoolSize, int64_t keepAliveTime, ::java::util::concurrent::TimeUnit* unit, ::java::util::concurrent::BlockingQueue* workQueue);
	void init$(int32_t corePoolSize, int32_t maximumPoolSize, int64_t keepAliveTime, ::java::util::concurrent::TimeUnit* unit, ::java::util::concurrent::BlockingQueue* workQueue, ::java::util::concurrent::ThreadFactory* threadFactory);
	void init$(int32_t corePoolSize, int32_t maximumPoolSize, int64_t keepAliveTime, ::java::util::concurrent::TimeUnit* unit, ::java::util::concurrent::BlockingQueue* workQueue, ::java::util::concurrent::RejectedExecutionHandler* handler);
	void init$(int32_t corePoolSize, int32_t maximumPoolSize, int64_t keepAliveTime, ::java::util::concurrent::TimeUnit* unit, ::java::util::concurrent::BlockingQueue* workQueue, ::java::util::concurrent::ThreadFactory* threadFactory, ::java::util::concurrent::RejectedExecutionHandler* handler);
	bool addWorker(::java::lang::Runnable* firstTask, bool core);
	void addWorkerFailed(::java::util::concurrent::ThreadPoolExecutor$Worker* w);
	void advanceRunState(int32_t targetState);
	virtual void afterExecute(::java::lang::Runnable* r, $Throwable* t);
	virtual void allowCoreThreadTimeOut(bool value);
	virtual bool allowsCoreThreadTimeOut();
	virtual bool awaitTermination(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual void beforeExecute($Thread* t, ::java::lang::Runnable* r);
	void checkShutdownAccess();
	bool compareAndDecrementWorkerCount(int32_t expect);
	bool compareAndIncrementWorkerCount(int32_t expect);
	static int32_t ctlOf(int32_t rs, int32_t wc);
	void decrementWorkerCount();
	::java::util::List* drainQueue();
	virtual void ensurePrestart();
	virtual void execute(::java::lang::Runnable* command) override;
	virtual void finalize() override;
	virtual int32_t getActiveCount();
	virtual int64_t getCompletedTaskCount();
	virtual int32_t getCorePoolSize();
	virtual int64_t getKeepAliveTime(::java::util::concurrent::TimeUnit* unit);
	virtual int32_t getLargestPoolSize();
	virtual int32_t getMaximumPoolSize();
	virtual int32_t getPoolSize();
	virtual ::java::util::concurrent::BlockingQueue* getQueue();
	virtual ::java::util::concurrent::RejectedExecutionHandler* getRejectedExecutionHandler();
	::java::lang::Runnable* getTask();
	virtual int64_t getTaskCount();
	virtual ::java::util::concurrent::ThreadFactory* getThreadFactory();
	void interruptIdleWorkers(bool onlyOne);
	void interruptIdleWorkers();
	void interruptWorkers();
	static bool isRunning(int32_t c);
	virtual bool isShutdown() override;
	virtual bool isStopped();
	virtual bool isTerminated() override;
	virtual bool isTerminating();
	virtual void onShutdown();
	virtual int32_t prestartAllCoreThreads();
	virtual bool prestartCoreThread();
	void processWorkerExit(::java::util::concurrent::ThreadPoolExecutor$Worker* w, bool completedAbruptly);
	virtual void purge();
	void reject(::java::lang::Runnable* command);
	virtual bool remove(::java::lang::Runnable* task);
	static bool runStateAtLeast(int32_t c, int32_t s);
	static bool runStateLessThan(int32_t c, int32_t s);
	static int32_t runStateOf(int32_t c);
	void runWorker(::java::util::concurrent::ThreadPoolExecutor$Worker* w);
	virtual void setCorePoolSize(int32_t corePoolSize);
	virtual void setKeepAliveTime(int64_t time, ::java::util::concurrent::TimeUnit* unit);
	virtual void setMaximumPoolSize(int32_t maximumPoolSize);
	virtual void setRejectedExecutionHandler(::java::util::concurrent::RejectedExecutionHandler* handler);
	virtual void setThreadFactory(::java::util::concurrent::ThreadFactory* threadFactory);
	virtual void shutdown() override;
	virtual ::java::util::List* shutdownNow() override;
	virtual void terminated();
	virtual $String* toString() override;
	void tryTerminate();
	static int32_t workerCountOf(int32_t c);
	::java::util::concurrent::atomic::AtomicInteger* ctl = nullptr;
	static const int32_t COUNT_BITS = 29; // Integer.SIZE - 3
	static const int32_t COUNT_MASK = 0x1FFFFFFF; // (1 << COUNT_BITS) - 1
	static const int32_t RUNNING = 0xE0000000; // -1 << COUNT_BITS
	static const int32_t SHUTDOWN = 0; // 0 << COUNT_BITS
	static const int32_t STOP = 0x20000000; // 1 << COUNT_BITS
	static const int32_t TIDYING = 0x40000000; // 2 << COUNT_BITS
	static const int32_t TERMINATED = 0x60000000; // 3 << COUNT_BITS
	::java::util::concurrent::BlockingQueue* workQueue = nullptr;
	::java::util::concurrent::locks::ReentrantLock* mainLock = nullptr;
	::java::util::HashSet* workers = nullptr;
	::java::util::concurrent::locks::Condition* termination = nullptr;
	int32_t largestPoolSize = 0;
	int64_t completedTaskCount = 0;
	$volatile(::java::util::concurrent::ThreadFactory*) threadFactory = nullptr;
	$volatile(::java::util::concurrent::RejectedExecutionHandler*) handler = nullptr;
	$volatile(int64_t) keepAliveTime = 0;
	$volatile(bool) allowCoreThreadTimeOut$ = false;
	$volatile(int32_t) corePoolSize = 0;
	$volatile(int32_t) maximumPoolSize = 0;
	static ::java::util::concurrent::RejectedExecutionHandler* defaultHandler;
	static ::java::lang::RuntimePermission* shutdownPerm;
	static const bool ONLY_ONE = true;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("COUNT_BITS")
#pragma pop_macro("COUNT_MASK")
#pragma pop_macro("ONLY_ONE")
#pragma pop_macro("RUNNING")
#pragma pop_macro("SHUTDOWN")
#pragma pop_macro("STOP")
#pragma pop_macro("TERMINATED")
#pragma pop_macro("TIDYING")

#endif // _java_util_concurrent_ThreadPoolExecutor_h_