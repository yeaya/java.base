#include <java/util/concurrent/ExecutorCompletionService$QueueingFuture.h>

#include <java/lang/Runnable.h>
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
using $Runnable = ::java::lang::Runnable;
using $BlockingQueue = ::java::util::concurrent::BlockingQueue;
using $ExecutorCompletionService = ::java::util::concurrent::ExecutorCompletionService;
using $Future = ::java::util::concurrent::Future;
using $FutureTask = ::java::util::concurrent::FutureTask;
using $RunnableFuture = ::java::util::concurrent::RunnableFuture;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ExecutorCompletionService$QueueingFuture_FieldInfo_[] = {
	{"task", "Ljava/util/concurrent/Future;", "Ljava/util/concurrent/Future<TV;>;", $PRIVATE | $FINAL, $field(ExecutorCompletionService$QueueingFuture, task)},
	{"completionQueue", "Ljava/util/concurrent/BlockingQueue;", "Ljava/util/concurrent/BlockingQueue<Ljava/util/concurrent/Future<TV;>;>;", $PRIVATE | $FINAL, $field(ExecutorCompletionService$QueueingFuture, completionQueue)},
	{}
};

$MethodInfo _ExecutorCompletionService$QueueingFuture_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/RunnableFuture;Ljava/util/concurrent/BlockingQueue;)V", "(Ljava/util/concurrent/RunnableFuture<TV;>;Ljava/util/concurrent/BlockingQueue<Ljava/util/concurrent/Future<TV;>;>;)V", 0, $method(static_cast<void(ExecutorCompletionService$QueueingFuture::*)($RunnableFuture*,$BlockingQueue*)>(&ExecutorCompletionService$QueueingFuture::init$))},
	{"done", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _ExecutorCompletionService$QueueingFuture_InnerClassesInfo_[] = {
	{"java.util.concurrent.ExecutorCompletionService$QueueingFuture", "java.util.concurrent.ExecutorCompletionService", "QueueingFuture", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ExecutorCompletionService$QueueingFuture_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.ExecutorCompletionService$QueueingFuture",
	"java.util.concurrent.FutureTask",
	nullptr,
	_ExecutorCompletionService$QueueingFuture_FieldInfo_,
	_ExecutorCompletionService$QueueingFuture_MethodInfo_,
	"<V:Ljava/lang/Object;>Ljava/util/concurrent/FutureTask<Ljava/lang/Void;>;",
	nullptr,
	_ExecutorCompletionService$QueueingFuture_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ExecutorCompletionService"
};

$Object* allocate$ExecutorCompletionService$QueueingFuture($Class* clazz) {
	return $of($alloc(ExecutorCompletionService$QueueingFuture));
}

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
	$loadClass(ExecutorCompletionService$QueueingFuture, name, initialize, &_ExecutorCompletionService$QueueingFuture_ClassInfo_, allocate$ExecutorCompletionService$QueueingFuture);
	return class$;
}

$Class* ExecutorCompletionService$QueueingFuture::class$ = nullptr;

		} // concurrent
	} // util
} // java