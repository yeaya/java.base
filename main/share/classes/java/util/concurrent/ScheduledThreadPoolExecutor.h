#ifndef _java_util_concurrent_ScheduledThreadPoolExecutor_h_
#define _java_util_concurrent_ScheduledThreadPoolExecutor_h_
//$ class java.util.concurrent.ScheduledThreadPoolExecutor
//$ extends java.util.concurrent.ThreadPoolExecutor
//$ implements java.util.concurrent.ScheduledExecutorService

#include <java/util/concurrent/ScheduledExecutorService.h>
#include <java/util/concurrent/ThreadPoolExecutor.h>

#pragma push_macro("DEFAULT_KEEPALIVE_MILLIS")
#undef DEFAULT_KEEPALIVE_MILLIS

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class BlockingQueue;
			class Callable;
			class Future;
			class RejectedExecutionHandler;
			class RunnableScheduledFuture;
			class ScheduledFuture;
			class ThreadFactory;
			class TimeUnit;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicLong;
			}
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ScheduledThreadPoolExecutor : public ::java::util::concurrent::ThreadPoolExecutor, public ::java::util::concurrent::ScheduledExecutorService {
	$class(ScheduledThreadPoolExecutor, 0, ::java::util::concurrent::ThreadPoolExecutor, ::java::util::concurrent::ScheduledExecutorService)
public:
	ScheduledThreadPoolExecutor();
	virtual bool awaitTermination(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual ::java::util::List* invokeAll(::java::util::Collection* tasks) override;
	virtual ::java::util::List* invokeAll(::java::util::Collection* tasks, int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual $Object* invokeAny(::java::util::Collection* tasks) override;
	virtual $Object* invokeAny(::java::util::Collection* tasks, int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual bool isShutdown() override;
	virtual bool isTerminated() override;
	void init$(int32_t corePoolSize);
	void init$(int32_t corePoolSize, ::java::util::concurrent::ThreadFactory* threadFactory);
	void init$(int32_t corePoolSize, ::java::util::concurrent::RejectedExecutionHandler* handler);
	void init$(int32_t corePoolSize, ::java::util::concurrent::ThreadFactory* threadFactory, ::java::util::concurrent::RejectedExecutionHandler* handler);
	virtual bool canRunInCurrentRunState(::java::util::concurrent::RunnableScheduledFuture* task);
	virtual ::java::util::concurrent::RunnableScheduledFuture* decorateTask(::java::lang::Runnable* runnable, ::java::util::concurrent::RunnableScheduledFuture* task);
	virtual ::java::util::concurrent::RunnableScheduledFuture* decorateTask(::java::util::concurrent::Callable* callable, ::java::util::concurrent::RunnableScheduledFuture* task);
	void delayedExecute(::java::util::concurrent::RunnableScheduledFuture* task);
	virtual void execute(::java::lang::Runnable* command) override;
	virtual bool getContinueExistingPeriodicTasksAfterShutdownPolicy();
	virtual bool getExecuteExistingDelayedTasksAfterShutdownPolicy();
	virtual ::java::util::concurrent::BlockingQueue* getQueue() override;
	virtual bool getRemoveOnCancelPolicy();
	virtual void onShutdown() override;
	int64_t overflowFree(int64_t delay);
	virtual void reExecutePeriodic(::java::util::concurrent::RunnableScheduledFuture* task);
	virtual ::java::util::concurrent::ScheduledFuture* schedule(::java::lang::Runnable* command, int64_t delay, ::java::util::concurrent::TimeUnit* unit) override;
	virtual ::java::util::concurrent::ScheduledFuture* schedule(::java::util::concurrent::Callable* callable, int64_t delay, ::java::util::concurrent::TimeUnit* unit) override;
	virtual ::java::util::concurrent::ScheduledFuture* scheduleAtFixedRate(::java::lang::Runnable* command, int64_t initialDelay, int64_t period, ::java::util::concurrent::TimeUnit* unit) override;
	virtual ::java::util::concurrent::ScheduledFuture* scheduleWithFixedDelay(::java::lang::Runnable* command, int64_t initialDelay, int64_t delay, ::java::util::concurrent::TimeUnit* unit) override;
	virtual void setContinueExistingPeriodicTasksAfterShutdownPolicy(bool value);
	virtual void setExecuteExistingDelayedTasksAfterShutdownPolicy(bool value);
	virtual void setRemoveOnCancelPolicy(bool value);
	virtual void shutdown() override;
	virtual ::java::util::List* shutdownNow() override;
	virtual ::java::util::concurrent::Future* submit(::java::lang::Runnable* task) override;
	virtual ::java::util::concurrent::Future* submit(::java::lang::Runnable* task, Object$* result) override;
	virtual ::java::util::concurrent::Future* submit(::java::util::concurrent::Callable* task) override;
	virtual $String* toString() override;
	int64_t triggerTime(int64_t delay, ::java::util::concurrent::TimeUnit* unit);
	virtual int64_t triggerTime(int64_t delay);
	$volatile(bool) continueExistingPeriodicTasksAfterShutdown = false;
	$volatile(bool) executeExistingDelayedTasksAfterShutdown = false;
	$volatile(bool) removeOnCancel = false;
	static ::java::util::concurrent::atomic::AtomicLong* sequencer;
	static const int64_t DEFAULT_KEEPALIVE_MILLIS = (int64_t)10;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("DEFAULT_KEEPALIVE_MILLIS")

#endif // _java_util_concurrent_ScheduledThreadPoolExecutor_h_