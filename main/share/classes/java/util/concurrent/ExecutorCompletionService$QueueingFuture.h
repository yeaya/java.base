#ifndef _java_util_concurrent_ExecutorCompletionService$QueueingFuture_h_
#define _java_util_concurrent_ExecutorCompletionService$QueueingFuture_h_
//$ class java.util.concurrent.ExecutorCompletionService$QueueingFuture
//$ extends java.util.concurrent.FutureTask

#include <java/util/concurrent/FutureTask.h>

namespace java {
	namespace util {
		namespace concurrent {
			class BlockingQueue;
			class Future;
			class RunnableFuture;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class ExecutorCompletionService$QueueingFuture : public ::java::util::concurrent::FutureTask {
	$class(ExecutorCompletionService$QueueingFuture, $NO_CLASS_INIT, ::java::util::concurrent::FutureTask)
public:
	ExecutorCompletionService$QueueingFuture();
	void init$(::java::util::concurrent::RunnableFuture* task, ::java::util::concurrent::BlockingQueue* completionQueue);
	virtual void done() override;
	::java::util::concurrent::Future* task = nullptr;
	::java::util::concurrent::BlockingQueue* completionQueue = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ExecutorCompletionService$QueueingFuture_h_