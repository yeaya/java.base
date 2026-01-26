#include <java/util/concurrent/ExecutorService.h>

#include <java/lang/Runnable.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Callable = ::java::util::concurrent::Callable;
using $Future = ::java::util::concurrent::Future;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _ExecutorService_MethodInfo_[] = {
	{"awaitTermination", "(JLjava/util/concurrent/TimeUnit;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExecutorService, awaitTermination, bool, int64_t, $TimeUnit*), "java.lang.InterruptedException"},
	{"invokeAll", "(Ljava/util/Collection;)Ljava/util/List;", "<T:Ljava/lang/Object;>(Ljava/util/Collection<+Ljava/util/concurrent/Callable<TT;>;>;)Ljava/util/List<Ljava/util/concurrent/Future<TT;>;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ExecutorService, invokeAll, $List*, $Collection*), "java.lang.InterruptedException"},
	{"invokeAll", "(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/util/List;", "<T:Ljava/lang/Object;>(Ljava/util/Collection<+Ljava/util/concurrent/Callable<TT;>;>;JLjava/util/concurrent/TimeUnit;)Ljava/util/List<Ljava/util/concurrent/Future<TT;>;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ExecutorService, invokeAll, $List*, $Collection*, int64_t, $TimeUnit*), "java.lang.InterruptedException"},
	{"invokeAny", "(Ljava/util/Collection;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/Collection<+Ljava/util/concurrent/Callable<TT;>;>;)TT;", $PUBLIC | $ABSTRACT, $virtualMethod(ExecutorService, invokeAny, $Object*, $Collection*), "java.lang.InterruptedException,java.util.concurrent.ExecutionException"},
	{"invokeAny", "(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/Collection<+Ljava/util/concurrent/Callable<TT;>;>;JLjava/util/concurrent/TimeUnit;)TT;", $PUBLIC | $ABSTRACT, $virtualMethod(ExecutorService, invokeAny, $Object*, $Collection*, int64_t, $TimeUnit*), "java.lang.InterruptedException,java.util.concurrent.ExecutionException,java.util.concurrent.TimeoutException"},
	{"isShutdown", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExecutorService, isShutdown, bool)},
	{"isTerminated", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExecutorService, isTerminated, bool)},
	{"shutdown", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExecutorService, shutdown, void)},
	{"shutdownNow", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/Runnable;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ExecutorService, shutdownNow, $List*)},
	{"submit", "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;", "<T:Ljava/lang/Object;>(Ljava/util/concurrent/Callable<TT;>;)Ljava/util/concurrent/Future<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ExecutorService, submit, $Future*, $Callable*)},
	{"submit", "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;", "<T:Ljava/lang/Object;>(Ljava/lang/Runnable;TT;)Ljava/util/concurrent/Future<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ExecutorService, submit, $Future*, $Runnable*, Object$*)},
	{"submit", "(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;", "(Ljava/lang/Runnable;)Ljava/util/concurrent/Future<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(ExecutorService, submit, $Future*, $Runnable*)},
	{}
};

$ClassInfo _ExecutorService_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.concurrent.ExecutorService",
	nullptr,
	"java.util.concurrent.Executor",
	nullptr,
	_ExecutorService_MethodInfo_
};

$Object* allocate$ExecutorService($Class* clazz) {
	return $of($alloc(ExecutorService));
}

$Class* ExecutorService::load$($String* name, bool initialize) {
	$loadClass(ExecutorService, name, initialize, &_ExecutorService_ClassInfo_, allocate$ExecutorService);
	return class$;
}

$Class* ExecutorService::class$ = nullptr;

		} // concurrent
	} // util
} // java