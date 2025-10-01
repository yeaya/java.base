#ifndef _java_util_concurrent_ForkJoinPool_h_
#define _java_util_concurrent_ForkJoinPool_h_
//$ class java.util.concurrent.ForkJoinPool
//$ extends java.util.concurrent.AbstractExecutorService

#include <java/lang/Array.h>
#include <java/util/concurrent/AbstractExecutorService.h>

#pragma push_macro("SS_SEQ")
#undef SS_SEQ
#pragma push_macro("TC_MASK")
#undef TC_MASK
#pragma push_macro("POOLIDS")
#undef POOLIDS
#pragma push_macro("SRC")
#undef SRC
#pragma push_macro("TERMINATED")
#undef TERMINATED
#pragma push_macro("MODE")
#undef MODE
#pragma push_macro("RC_MASK")
#undef RC_MASK
#pragma push_macro("QUIET")
#undef QUIET
#pragma push_macro("INITIAL_QUEUE_CAPACITY")
#undef INITIAL_QUEUE_CAPACITY
#pragma push_macro("TIMEOUT_SLOP")
#undef TIMEOUT_SLOP
#pragma push_macro("SP_MASK")
#undef SP_MASK
#pragma push_macro("SMASK")
#undef SMASK
#pragma push_macro("UNCOMPENSATE")
#undef UNCOMPENSATE
#pragma push_macro("TC_UNIT")
#undef TC_UNIT
#pragma push_macro("MAX_CAP")
#undef MAX_CAP
#pragma push_macro("UC_MASK")
#undef UC_MASK
#pragma push_macro("COMMON_PARALLELISM")
#undef COMMON_PARALLELISM
#pragma push_macro("SHUTDOWN")
#undef SHUTDOWN
#pragma push_macro("RC_UNIT")
#undef RC_UNIT
#pragma push_macro("STOP")
#undef STOP
#pragma push_macro("DEFAULT_KEEPALIVE")
#undef DEFAULT_KEEPALIVE
#pragma push_macro("RC_SHIFT")
#undef RC_SHIFT
#pragma push_macro("TC_SHIFT")
#undef TC_SHIFT
#pragma push_macro("UNSIGNALLED")
#undef UNSIGNALLED
#pragma push_macro("FIFO")
#undef FIFO
#pragma push_macro("ADD_WORKER")
#undef ADD_WORKER
#pragma push_macro("THREADIDS")
#undef THREADIDS
#pragma push_macro("INNOCUOUS")
#undef INNOCUOUS
#pragma push_macro("COMMON_MAX_SPARES")
#undef COMMON_MAX_SPARES
#pragma push_macro("CTL")
#undef CTL
#pragma push_macro("DEFAULT_COMMON_MAX_SPARES")
#undef DEFAULT_COMMON_MAX_SPARES
#pragma push_macro("SWIDTH")
#undef SWIDTH

namespace java {
	namespace lang {
		class Runnable;
		class RuntimePermission;
		class Thread$UncaughtExceptionHandler;
		class Throwable;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
		class Permission;
	}
}
namespace java {
	namespace util {
		class Collection;
		class List;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
			class Executor;
			class ForkJoinPool$ForkJoinWorkerThreadFactory;
			class ForkJoinPool$ManagedBlocker;
			class ForkJoinPool$WorkQueue;
			class ForkJoinTask;
			class ForkJoinWorkerThread;
			class Future;
			class RunnableFuture;
			class TimeUnit;
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
		namespace function {
			class Predicate;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ForkJoinPool : public ::java::util::concurrent::AbstractExecutorService {
	$class(ForkJoinPool, 0, ::java::util::concurrent::AbstractExecutorService)
public:
	ForkJoinPool();
	void init$();
	void init$(int32_t parallelism);
	void init$(int32_t parallelism, ::java::util::concurrent::ForkJoinPool$ForkJoinWorkerThreadFactory* factory, ::java::lang::Thread$UncaughtExceptionHandler* handler, bool asyncMode);
	void init$(int32_t parallelism, ::java::util::concurrent::ForkJoinPool$ForkJoinWorkerThreadFactory* factory, ::java::lang::Thread$UncaughtExceptionHandler* handler, bool asyncMode, int32_t corePoolSize, int32_t maximumPoolSize, int32_t minimumRunnable, ::java::util::function::Predicate* saturate, int64_t keepAliveTime, ::java::util::concurrent::TimeUnit* unit);
	void init$(int8_t forCommonPoolOnly);
	virtual bool awaitQuiescence(int64_t timeout, ::java::util::concurrent::TimeUnit* unit);
	virtual bool awaitTermination(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	int32_t awaitWork(::java::util::concurrent::ForkJoinPool$WorkQueue* w);
	bool canStop();
	static void checkPermission();
	static ::java::util::concurrent::ForkJoinPool* commonPool();
	static ::java::util::concurrent::ForkJoinPool$WorkQueue* commonQueue();
	int64_t compareAndExchangeCtl(int64_t c, int64_t v);
	bool compareAndSetCtl(int64_t c, int64_t v);
	void compensatedBlock(::java::util::concurrent::ForkJoinPool$ManagedBlocker* blocker);
	static ::java::security::AccessControlContext* contextWithPermissions($Array<::java::security::Permission>* perms);
	bool createWorker();
	void deregisterWorker(::java::util::concurrent::ForkJoinWorkerThread* wt, $Throwable* ex);
	virtual int32_t drainTasksTo(::java::util::Collection* c);
	virtual void execute(::java::util::concurrent::ForkJoinTask* task);
	virtual void execute(::java::lang::Runnable* task) override;
	int32_t externalHelpQuiescePool(int64_t nanos, bool interruptible);
	void externalPush(::java::util::concurrent::ForkJoinTask* task);
	::java::util::concurrent::ForkJoinPool$WorkQueue* externalQueue();
	::java::util::concurrent::ForkJoinTask* externalSubmit(::java::util::concurrent::ForkJoinTask* task);
	virtual int32_t getActiveThreadCount();
	int64_t getAndAddCtl(int64_t v);
	static int32_t getAndAddPoolIds(int32_t x);
	int32_t getAndAddThreadIds(int32_t x);
	int32_t getAndBitwiseOrMode(int32_t v);
	virtual bool getAsyncMode();
	static int32_t getCommonPoolParallelism();
	virtual ::java::util::concurrent::ForkJoinPool$ForkJoinWorkerThreadFactory* getFactory();
	virtual int32_t getParallelism();
	virtual int32_t getPoolSize();
	virtual int32_t getQueuedSubmissionCount();
	virtual int64_t getQueuedTaskCount();
	virtual int32_t getRunningThreadCount();
	virtual int64_t getStealCount();
	static int32_t getSurplusQueuedTaskCount();
	virtual ::java::lang::Thread$UncaughtExceptionHandler* getUncaughtExceptionHandler();
	virtual bool hasQueuedSubmissions();
	static void helpAsyncBlocker(::java::util::concurrent::Executor* e, ::java::util::concurrent::ForkJoinPool$ManagedBlocker* blocker);
	int32_t helpComplete(::java::util::concurrent::ForkJoinTask* task, ::java::util::concurrent::ForkJoinPool$WorkQueue* w, bool owned);
	int32_t helpJoin(::java::util::concurrent::ForkJoinTask* task, ::java::util::concurrent::ForkJoinPool$WorkQueue* w, bool canHelp);
	int32_t helpQuiescePool(::java::util::concurrent::ForkJoinPool$WorkQueue* w, int64_t nanos, bool interruptible);
	virtual $Object* invoke(::java::util::concurrent::ForkJoinTask* task);
	virtual ::java::util::List* invokeAll(::java::util::Collection* tasks) override;
	virtual ::java::util::List* invokeAll(::java::util::Collection* tasks, int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual $Object* invokeAny(::java::util::Collection* tasks) override;
	virtual $Object* invokeAny(::java::util::Collection* tasks, int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual bool isQuiescent();
	virtual bool isShutdown() override;
	virtual bool isTerminated() override;
	virtual bool isTerminating();
	static void managedBlock(::java::util::concurrent::ForkJoinPool$ManagedBlocker* blocker);
	static $Object* newInstanceFromSystemProperty($String* property);
	virtual ::java::util::concurrent::RunnableFuture* newTaskFor(::java::lang::Runnable* runnable, Object$* value) override;
	virtual ::java::util::concurrent::RunnableFuture* newTaskFor(::java::util::concurrent::Callable* callable) override;
	::java::util::concurrent::ForkJoinTask* nextTaskFor(::java::util::concurrent::ForkJoinPool$WorkQueue* w);
	$String* nextWorkerThreadName();
	::java::util::concurrent::ForkJoinTask* pollScan(bool submissionsOnly);
	virtual ::java::util::concurrent::ForkJoinTask* pollSubmission();
	void registerWorker(::java::util::concurrent::ForkJoinPool$WorkQueue* w);
	void runWorker(::java::util::concurrent::ForkJoinPool$WorkQueue* w);
	int32_t scan(::java::util::concurrent::ForkJoinPool$WorkQueue* w, int32_t prevSrc, int32_t r);
	virtual void shutdown() override;
	virtual ::java::util::List* shutdownNow() override;
	void signalWork();
	::java::util::concurrent::ForkJoinPool$WorkQueue* submissionQueue();
	virtual ::java::util::concurrent::ForkJoinTask* submit(::java::util::concurrent::ForkJoinTask* task);
	virtual ::java::util::concurrent::Future* submit(::java::util::concurrent::Callable* task) override;
	virtual ::java::util::concurrent::Future* submit(::java::lang::Runnable* task, Object$* result) override;
	virtual ::java::util::concurrent::Future* submit(::java::lang::Runnable* task) override;
	virtual $String* toString() override;
	int32_t tryCompensate(int64_t c);
	bool tryTerminate(bool now, bool enable);
	void uncompensate();
	static void unmanagedBlock(::java::util::concurrent::ForkJoinPool$ManagedBlocker* blocker);
	static const int32_t SWIDTH = 16;
	static const int32_t SMASK = 0x0000FFFF;
	static const int32_t MAX_CAP = 32767;
	static const int32_t UNSIGNALLED = 0x80000000; // 1 << 31
	static const int32_t SS_SEQ = 65536; // 1 << 16
	static const int32_t FIFO = 65536; // 1 << 16
	static const int32_t SRC = 131072; // 1 << 17
	static const int32_t INNOCUOUS = 262144; // 1 << 18
	static const int32_t QUIET = 524288; // 1 << 19
	static const int32_t SHUTDOWN = 16777216; // 1 << 24
	static const int32_t TERMINATED = 33554432; // 1 << 25
	static const int32_t STOP = 0x80000000; // 1 << 31
	static const int32_t UNCOMPENSATE = 65536; // 1 << 16
	static const int32_t INITIAL_QUEUE_CAPACITY = 256; // 1 << 8
	static ::java::util::concurrent::ForkJoinPool$ForkJoinWorkerThreadFactory* defaultForkJoinWorkerThreadFactory;
	static ::java::lang::RuntimePermission* modifyThreadPermission;
	static ::java::util::concurrent::ForkJoinPool* common;
	static int32_t COMMON_PARALLELISM;
	static int32_t COMMON_MAX_SPARES;
	static $volatile(int32_t) poolIds;
	static const int64_t DEFAULT_KEEPALIVE = (int64_t)60000;
	static const int64_t TIMEOUT_SLOP = (int64_t)20;
	static const int32_t DEFAULT_COMMON_MAX_SPARES = 256;
	static const int64_t SP_MASK = (int64_t)0x00000000FFFFFFFF;
	static const int64_t UC_MASK = ~SP_MASK;
	static const int32_t RC_SHIFT = 48;
	static const int64_t RC_UNIT = 281474976710656; // (int64_t)1 << RC_SHIFT
	static const int64_t RC_MASK = -281474976710656; // (int64_t)65535 << RC_SHIFT
	static const int32_t TC_SHIFT = 32;
	static const int64_t TC_UNIT = 4294967296; // (int64_t)1 << TC_SHIFT
	static const int64_t TC_MASK = 281470681743360; // (int64_t)65535 << TC_SHIFT
	static const int64_t ADD_WORKER = 140737488355328; // (int64_t)1 << (TC_SHIFT + 15)
	int64_t keepAlive = 0;
	$volatile(int64_t) stealCount = 0;
	int32_t scanRover = 0;
	$volatile(int32_t) threadIds = 0;
	int32_t bounds = 0;
	$volatile(int32_t) mode = 0;
	$Array<::java::util::concurrent::ForkJoinPool$WorkQueue>* queues = nullptr;
	::java::util::concurrent::locks::ReentrantLock* registrationLock = nullptr;
	::java::util::concurrent::locks::Condition* termination = nullptr;
	$String* workerNamePrefix = nullptr;
	::java::util::concurrent::ForkJoinPool$ForkJoinWorkerThreadFactory* factory = nullptr;
	::java::lang::Thread$UncaughtExceptionHandler* ueh = nullptr;
	::java::util::function::Predicate* saturate = nullptr;
	$volatile(int64_t) ctl = 0;
	static ::java::lang::invoke::VarHandle* CTL;
	static ::java::lang::invoke::VarHandle* MODE;
	static ::java::lang::invoke::VarHandle* THREADIDS;
	static ::java::lang::invoke::VarHandle* POOLIDS;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("SS_SEQ")
#pragma pop_macro("TC_MASK")
#pragma pop_macro("POOLIDS")
#pragma pop_macro("SRC")
#pragma pop_macro("TERMINATED")
#pragma pop_macro("MODE")
#pragma pop_macro("RC_MASK")
#pragma pop_macro("QUIET")
#pragma pop_macro("INITIAL_QUEUE_CAPACITY")
#pragma pop_macro("TIMEOUT_SLOP")
#pragma pop_macro("SP_MASK")
#pragma pop_macro("SMASK")
#pragma pop_macro("UNCOMPENSATE")
#pragma pop_macro("TC_UNIT")
#pragma pop_macro("MAX_CAP")
#pragma pop_macro("UC_MASK")
#pragma pop_macro("COMMON_PARALLELISM")
#pragma pop_macro("SHUTDOWN")
#pragma pop_macro("RC_UNIT")
#pragma pop_macro("STOP")
#pragma pop_macro("DEFAULT_KEEPALIVE")
#pragma pop_macro("RC_SHIFT")
#pragma pop_macro("TC_SHIFT")
#pragma pop_macro("UNSIGNALLED")
#pragma pop_macro("FIFO")
#pragma pop_macro("ADD_WORKER")
#pragma pop_macro("THREADIDS")
#pragma pop_macro("INNOCUOUS")
#pragma pop_macro("COMMON_MAX_SPARES")
#pragma pop_macro("CTL")
#pragma pop_macro("DEFAULT_COMMON_MAX_SPARES")
#pragma pop_macro("SWIDTH")

#endif // _java_util_concurrent_ForkJoinPool_h_