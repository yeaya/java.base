#include <java/util/concurrent/CompletionService.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Callable = ::java::util::concurrent::Callable;
using $Future = ::java::util::concurrent::Future;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace util {
		namespace concurrent {

$Class* CompletionService::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"poll", "()Ljava/util/concurrent/Future;", "()Ljava/util/concurrent/Future<TV;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionService, poll, $Future*)},
		{"poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Future;", "(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Future<TV;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionService, poll, $Future*, int64_t, $TimeUnit*), "java.lang.InterruptedException"},
		{"submit", "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;", "(Ljava/util/concurrent/Callable<TV;>;)Ljava/util/concurrent/Future<TV;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionService, submit, $Future*, $Callable*)},
		{"submit", "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;", "(Ljava/lang/Runnable;TV;)Ljava/util/concurrent/Future<TV;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionService, submit, $Future*, $Runnable*, Object$*)},
		{"take", "()Ljava/util/concurrent/Future;", "()Ljava/util/concurrent/Future<TV;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionService, take, $Future*), "java.lang.InterruptedException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.concurrent.CompletionService",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<V:Ljava/lang/Object;>Ljava/lang/Object;"
	};
	$loadClass(CompletionService, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompletionService);
	});
	return class$;
}

$Class* CompletionService::class$ = nullptr;

		} // concurrent
	} // util
} // java