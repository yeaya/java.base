#ifndef _java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_h_
#define _java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_h_
//$ class java.util.concurrent.ScheduledThreadPoolExecutor$ScheduledFutureTask
//$ extends java.util.concurrent.FutureTask
//$ implements java.util.concurrent.RunnableScheduledFuture

#include <java/util/concurrent/FutureTask.h>
#include <java/util/concurrent/RunnableScheduledFuture.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
			class Delayed;
			class ScheduledThreadPoolExecutor;
			class TimeUnit;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class ScheduledThreadPoolExecutor$ScheduledFutureTask : public ::java::util::concurrent::FutureTask, public ::java::util::concurrent::RunnableScheduledFuture {
	$class(ScheduledThreadPoolExecutor$ScheduledFutureTask, $NO_CLASS_INIT, ::java::util::concurrent::FutureTask, ::java::util::concurrent::RunnableScheduledFuture)
public:
	ScheduledThreadPoolExecutor$ScheduledFutureTask();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual $Object* get() override;
	virtual $Object* get(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual int32_t hashCode() override;
	void init$(::java::util::concurrent::ScheduledThreadPoolExecutor* this$0, ::java::lang::Runnable* r, Object$* result, int64_t triggerTime, int64_t sequenceNumber);
	void init$(::java::util::concurrent::ScheduledThreadPoolExecutor* this$0, ::java::lang::Runnable* r, Object$* result, int64_t triggerTime, int64_t period, int64_t sequenceNumber);
	void init$(::java::util::concurrent::ScheduledThreadPoolExecutor* this$0, ::java::util::concurrent::Callable* callable, int64_t triggerTime, int64_t sequenceNumber);
	virtual bool cancel(bool mayInterruptIfRunning) override;
	virtual int32_t compareTo(::java::util::concurrent::Delayed* other);
	virtual int32_t compareTo(Object$* other) override;
	virtual int64_t getDelay(::java::util::concurrent::TimeUnit* unit) override;
	virtual bool isCancelled() override;
	virtual bool isDone() override;
	virtual bool isPeriodic() override;
	virtual void run() override;
	void setNextRunTime();
	virtual $String* toString() override;
	::java::util::concurrent::ScheduledThreadPoolExecutor* this$0 = nullptr;
	int64_t sequenceNumber = 0;
	$volatile(int64_t) time = 0;
	int64_t period = 0;
	::java::util::concurrent::RunnableScheduledFuture* outerTask = nullptr;
	int32_t heapIndex = 0;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_h_