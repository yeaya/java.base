#include <java/util/concurrent/ExecutorCompletionService$QueueingFuture.h>
#include <java/util/concurrent/BlockingQueue.h>
#include <java/util/concurrent/ExecutorCompletionService.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/FutureTask.h>
#include <java/util/concurrent/RunnableFuture.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BlockingQueue = ::java::util::concurrent::BlockingQueue;
using $FutureTask = ::java::util::concurrent::FutureTask;
using $RunnableFuture = ::java::util::concurrent::RunnableFuture;

namespace java {
	namespace util {
		namespace concurrent {

void ExecutorCompletionService$QueueingFuture::init$($RunnableFuture* task, $BlockingQueue* completionQueue) {
	$FutureTask::init$(task, nullptr);
	$set(this, task, task);
	$set(this, completionQueue, completionQueue);
}

void ExecutorCompletionService$QueueingFuture::done() {
	$nc(this->completionQueue)->add(this->task);
}

ExecutorCompletionService$QueueingFuture::ExecutorCompletionService$QueueingFuture() {
}

$Class* ExecutorCompletionService$QueueingFuture::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"task", "Ljava/util/concurrent/Future;", "Ljava/util/concurrent/Future<TV;>;", $PRIVATE | $FINAL, $field(ExecutorCompletionService$QueueingFuture, task)},
		{"completionQueue", "Ljava/util/concurrent/BlockingQueue;", "Ljava/util/concurrent/BlockingQueue<Ljava/util/concurrent/Future<TV;>;>;", $PRIVATE | $FINAL, $field(ExecutorCompletionService$QueueingFuture, completionQueue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/RunnableFuture;Ljava/util/concurrent/BlockingQueue;)V", "(Ljava/util/concurrent/RunnableFuture<TV;>;Ljava/util/concurrent/BlockingQueue<Ljava/util/concurrent/Future<TV;>;>;)V", 0, $method(ExecutorCompletionService$QueueingFuture, init$, void, $RunnableFuture*, $BlockingQueue*)},
		{"done", "()V", nullptr, $PROTECTED, $virtualMethod(ExecutorCompletionService$QueueingFuture, done, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ExecutorCompletionService$QueueingFuture", "java.util.concurrent.ExecutorCompletionService", "QueueingFuture", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.ExecutorCompletionService$QueueingFuture",
		"java.util.concurrent.FutureTask",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<V:Ljava/lang/Object;>Ljava/util/concurrent/FutureTask<Ljava/lang/Void;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.ExecutorCompletionService"
	};
	$loadClass(ExecutorCompletionService$QueueingFuture, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ExecutorCompletionService$QueueingFuture));
	});
	return class$;
}

$Class* ExecutorCompletionService$QueueingFuture::class$ = nullptr;

		} // concurrent
	} // util
} // java