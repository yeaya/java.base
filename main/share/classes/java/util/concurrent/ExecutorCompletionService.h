#ifndef _java_util_concurrent_ExecutorCompletionService_h_
#define _java_util_concurrent_ExecutorCompletionService_h_
//$ class java.util.concurrent.ExecutorCompletionService
//$ extends java.util.concurrent.CompletionService

#include <java/util/concurrent/CompletionService.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class AbstractExecutorService;
			class BlockingQueue;
			class Callable;
			class Executor;
			class Future;
			class RunnableFuture;
			class TimeUnit;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ExecutorCompletionService : public ::java::util::concurrent::CompletionService {
	$class(ExecutorCompletionService, $NO_CLASS_INIT, ::java::util::concurrent::CompletionService)
public:
	ExecutorCompletionService();
	void init$(::java::util::concurrent::Executor* executor);
	void init$(::java::util::concurrent::Executor* executor, ::java::util::concurrent::BlockingQueue* completionQueue);
	::java::util::concurrent::RunnableFuture* newTaskFor(::java::util::concurrent::Callable* task);
	::java::util::concurrent::RunnableFuture* newTaskFor(::java::lang::Runnable* task, Object$* result);
	virtual ::java::util::concurrent::Future* poll() override;
	virtual ::java::util::concurrent::Future* poll(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual ::java::util::concurrent::Future* submit(::java::util::concurrent::Callable* task) override;
	virtual ::java::util::concurrent::Future* submit(::java::lang::Runnable* task, Object$* result) override;
	virtual ::java::util::concurrent::Future* take() override;
	::java::util::concurrent::Executor* executor = nullptr;
	::java::util::concurrent::AbstractExecutorService* aes = nullptr;
	::java::util::concurrent::BlockingQueue* completionQueue = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ExecutorCompletionService_h_