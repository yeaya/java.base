#include <java/util/concurrent/ExecutorCompletionService.h>

#include <java/lang/Runnable.h>
#include <java/util/concurrent/AbstractExecutorService.h>
#include <java/util/concurrent/BlockingQueue.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/Executor.h>
#include <java/util/concurrent/ExecutorCompletionService$QueueingFuture.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/FutureTask.h>
#include <java/util/concurrent/LinkedBlockingQueue.h>
#include <java/util/concurrent/RunnableFuture.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $Queue = ::java::util::Queue;
using $AbstractExecutorService = ::java::util::concurrent::AbstractExecutorService;
using $BlockingQueue = ::java::util::concurrent::BlockingQueue;
using $Callable = ::java::util::concurrent::Callable;
using $CompletionService = ::java::util::concurrent::CompletionService;
using $Executor = ::java::util::concurrent::Executor;
using $ExecutorCompletionService$QueueingFuture = ::java::util::concurrent::ExecutorCompletionService$QueueingFuture;
using $Future = ::java::util::concurrent::Future;
using $FutureTask = ::java::util::concurrent::FutureTask;
using $LinkedBlockingQueue = ::java::util::concurrent::LinkedBlockingQueue;
using $RunnableFuture = ::java::util::concurrent::RunnableFuture;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ExecutorCompletionService_FieldInfo_[] = {
	{"executor", "Ljava/util/concurrent/Executor;", nullptr, $PRIVATE | $FINAL, $field(ExecutorCompletionService, executor)},
	{"aes", "Ljava/util/concurrent/AbstractExecutorService;", nullptr, $PRIVATE | $FINAL, $field(ExecutorCompletionService, aes)},
	{"completionQueue", "Ljava/util/concurrent/BlockingQueue;", "Ljava/util/concurrent/BlockingQueue<Ljava/util/concurrent/Future<TV;>;>;", $PRIVATE | $FINAL, $field(ExecutorCompletionService, completionQueue)},
	{}
};

$MethodInfo _ExecutorCompletionService_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Executor;)V", nullptr, $PUBLIC, $method(static_cast<void(ExecutorCompletionService::*)($Executor*)>(&ExecutorCompletionService::init$))},
	{"<init>", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/BlockingQueue;)V", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/BlockingQueue<Ljava/util/concurrent/Future<TV;>;>;)V", $PUBLIC, $method(static_cast<void(ExecutorCompletionService::*)($Executor*,$BlockingQueue*)>(&ExecutorCompletionService::init$))},
	{"newTaskFor", "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/RunnableFuture;", "(Ljava/util/concurrent/Callable<TV;>;)Ljava/util/concurrent/RunnableFuture<TV;>;", $PRIVATE, $method(static_cast<$RunnableFuture*(ExecutorCompletionService::*)($Callable*)>(&ExecutorCompletionService::newTaskFor))},
	{"newTaskFor", "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/RunnableFuture;", "(Ljava/lang/Runnable;TV;)Ljava/util/concurrent/RunnableFuture<TV;>;", $PRIVATE, $method(static_cast<$RunnableFuture*(ExecutorCompletionService::*)($Runnable*,Object$*)>(&ExecutorCompletionService::newTaskFor))},
	{"poll", "()Ljava/util/concurrent/Future;", "()Ljava/util/concurrent/Future<TV;>;", $PUBLIC},
	{"poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Future;", "(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Future<TV;>;", $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"submit", "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;", "(Ljava/util/concurrent/Callable<TV;>;)Ljava/util/concurrent/Future<TV;>;", $PUBLIC},
	{"submit", "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;", "(Ljava/lang/Runnable;TV;)Ljava/util/concurrent/Future<TV;>;", $PUBLIC},
	{"take", "()Ljava/util/concurrent/Future;", "()Ljava/util/concurrent/Future<TV;>;", $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{}
};

$InnerClassInfo _ExecutorCompletionService_InnerClassesInfo_[] = {
	{"java.util.concurrent.ExecutorCompletionService$QueueingFuture", "java.util.concurrent.ExecutorCompletionService", "QueueingFuture", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ExecutorCompletionService_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.ExecutorCompletionService",
	"java.lang.Object",
	"java.util.concurrent.CompletionService",
	_ExecutorCompletionService_FieldInfo_,
	_ExecutorCompletionService_MethodInfo_,
	"<V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/concurrent/CompletionService<TV;>;",
	nullptr,
	_ExecutorCompletionService_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.ExecutorCompletionService$QueueingFuture"
};

$Object* allocate$ExecutorCompletionService($Class* clazz) {
	return $of($alloc(ExecutorCompletionService));
}

$RunnableFuture* ExecutorCompletionService::newTaskFor($Callable* task) {
	if (this->aes == nullptr) {
		return $new($FutureTask, task);
	} else {
		return $nc(this->aes)->newTaskFor(task);
	}
}

$RunnableFuture* ExecutorCompletionService::newTaskFor($Runnable* task, Object$* result) {
	if (this->aes == nullptr) {
		return $new($FutureTask, task, result);
	} else {
		return $nc(this->aes)->newTaskFor(task, result);
	}
}

void ExecutorCompletionService::init$($Executor* executor) {
	if (executor == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, executor, executor);
	$set(this, aes, ($instanceOf($AbstractExecutorService, executor)) ? $cast($AbstractExecutorService, executor) : ($AbstractExecutorService*)nullptr);
	$set(this, completionQueue, $new($LinkedBlockingQueue));
}

void ExecutorCompletionService::init$($Executor* executor, $BlockingQueue* completionQueue) {
	if (executor == nullptr || completionQueue == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, executor, executor);
	$set(this, aes, ($instanceOf($AbstractExecutorService, executor)) ? $cast($AbstractExecutorService, executor) : ($AbstractExecutorService*)nullptr);
	$set(this, completionQueue, completionQueue);
}

$Future* ExecutorCompletionService::submit($Callable* task) {
	$useLocalCurrentObjectStackCache();
	if (task == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($RunnableFuture, f, newTaskFor(task));
	$nc(this->executor)->execute($$new($ExecutorCompletionService$QueueingFuture, f, this->completionQueue));
	return f;
}

$Future* ExecutorCompletionService::submit($Runnable* task, Object$* result) {
	$useLocalCurrentObjectStackCache();
	if (task == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($RunnableFuture, f, newTaskFor(task, result));
	$nc(this->executor)->execute($$new($ExecutorCompletionService$QueueingFuture, f, this->completionQueue));
	return f;
}

$Future* ExecutorCompletionService::take() {
	return $cast($Future, $nc(this->completionQueue)->take());
}

$Future* ExecutorCompletionService::poll() {
	return $cast($Future, $nc(this->completionQueue)->poll());
}

$Future* ExecutorCompletionService::poll(int64_t timeout, $TimeUnit* unit) {
	return $cast($Future, $nc(this->completionQueue)->poll(timeout, unit));
}

ExecutorCompletionService::ExecutorCompletionService() {
}

$Class* ExecutorCompletionService::load$($String* name, bool initialize) {
	$loadClass(ExecutorCompletionService, name, initialize, &_ExecutorCompletionService_ClassInfo_, allocate$ExecutorCompletionService);
	return class$;
}

$Class* ExecutorCompletionService::class$ = nullptr;

		} // concurrent
	} // util
} // java