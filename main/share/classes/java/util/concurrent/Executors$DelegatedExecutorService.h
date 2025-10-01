#ifndef _java_util_concurrent_Executors$DelegatedExecutorService_h_
#define _java_util_concurrent_Executors$DelegatedExecutorService_h_
//$ class java.util.concurrent.Executors$DelegatedExecutorService
//$ extends java.util.concurrent.ExecutorService

#include <java/util/concurrent/ExecutorService.h>

namespace java {
	namespace lang {
		class Runnable;
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
			class Future;
			class TimeUnit;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class Executors$DelegatedExecutorService : public ::java::util::concurrent::ExecutorService {
	$class(Executors$DelegatedExecutorService, $NO_CLASS_INIT, ::java::util::concurrent::ExecutorService)
public:
	Executors$DelegatedExecutorService();
	void init$(::java::util::concurrent::ExecutorService* executor);
	virtual bool awaitTermination(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual void execute(::java::lang::Runnable* command) override;
	virtual ::java::util::List* invokeAll(::java::util::Collection* tasks) override;
	virtual ::java::util::List* invokeAll(::java::util::Collection* tasks, int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual $Object* invokeAny(::java::util::Collection* tasks) override;
	virtual $Object* invokeAny(::java::util::Collection* tasks, int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual bool isShutdown() override;
	virtual bool isTerminated() override;
	virtual void shutdown() override;
	virtual ::java::util::List* shutdownNow() override;
	virtual ::java::util::concurrent::Future* submit(::java::lang::Runnable* task) override;
	virtual ::java::util::concurrent::Future* submit(::java::util::concurrent::Callable* task) override;
	virtual ::java::util::concurrent::Future* submit(::java::lang::Runnable* task, Object$* result) override;
	::java::util::concurrent::ExecutorService* e = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Executors$DelegatedExecutorService_h_