#ifndef _java_util_concurrent_Executors$DelegatedScheduledExecutorService_h_
#define _java_util_concurrent_Executors$DelegatedScheduledExecutorService_h_
//$ class java.util.concurrent.Executors$DelegatedScheduledExecutorService
//$ extends java.util.concurrent.Executors$DelegatedExecutorService
//$ implements java.util.concurrent.ScheduledExecutorService

#include <java/util/concurrent/Executors$DelegatedExecutorService.h>
#include <java/util/concurrent/ScheduledExecutorService.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
			class ScheduledFuture;
			class TimeUnit;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class Executors$DelegatedScheduledExecutorService : public ::java::util::concurrent::Executors$DelegatedExecutorService, public ::java::util::concurrent::ScheduledExecutorService {
	$class(Executors$DelegatedScheduledExecutorService, $NO_CLASS_INIT, ::java::util::concurrent::Executors$DelegatedExecutorService, ::java::util::concurrent::ScheduledExecutorService)
public:
	Executors$DelegatedScheduledExecutorService();
	virtual bool awaitTermination(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void execute(::java::lang::Runnable* command) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::concurrent::ScheduledExecutorService* executor);
	virtual ::java::util::List* invokeAll(::java::util::Collection* tasks) override;
	virtual ::java::util::List* invokeAll(::java::util::Collection* tasks, int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual $Object* invokeAny(::java::util::Collection* tasks) override;
	virtual $Object* invokeAny(::java::util::Collection* tasks, int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual bool isShutdown() override;
	virtual bool isTerminated() override;
	virtual ::java::util::concurrent::ScheduledFuture* schedule(::java::lang::Runnable* command, int64_t delay, ::java::util::concurrent::TimeUnit* unit) override;
	virtual ::java::util::concurrent::ScheduledFuture* schedule(::java::util::concurrent::Callable* callable, int64_t delay, ::java::util::concurrent::TimeUnit* unit) override;
	virtual ::java::util::concurrent::ScheduledFuture* scheduleAtFixedRate(::java::lang::Runnable* command, int64_t initialDelay, int64_t period, ::java::util::concurrent::TimeUnit* unit) override;
	virtual ::java::util::concurrent::ScheduledFuture* scheduleWithFixedDelay(::java::lang::Runnable* command, int64_t initialDelay, int64_t delay, ::java::util::concurrent::TimeUnit* unit) override;
	virtual void shutdown() override;
	virtual ::java::util::List* shutdownNow() override;
	virtual ::java::util::concurrent::Future* submit(::java::lang::Runnable* task) override;
	virtual ::java::util::concurrent::Future* submit(::java::util::concurrent::Callable* task) override;
	virtual ::java::util::concurrent::Future* submit(::java::lang::Runnable* task, Object$* result) override;
	virtual $String* toString() override;
	::java::util::concurrent::ScheduledExecutorService* e = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Executors$DelegatedScheduledExecutorService_h_