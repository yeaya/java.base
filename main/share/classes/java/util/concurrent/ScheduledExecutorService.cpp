#include <java/util/concurrent/ScheduledExecutorService.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/ScheduledFuture.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Callable = ::java::util::concurrent::Callable;
using $ScheduledFuture = ::java::util::concurrent::ScheduledFuture;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace util {
		namespace concurrent {

$Class* ScheduledExecutorService::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"schedule", "(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;", "(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(ScheduledExecutorService, schedule, $ScheduledFuture*, $Runnable*, int64_t, $TimeUnit*)},
		{"schedule", "(Ljava/util/concurrent/Callable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;", "<V:Ljava/lang/Object;>(Ljava/util/concurrent/Callable<TV;>;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture<TV;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ScheduledExecutorService, schedule, $ScheduledFuture*, $Callable*, int64_t, $TimeUnit*)},
		{"scheduleAtFixedRate", "(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;", "(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(ScheduledExecutorService, scheduleAtFixedRate, $ScheduledFuture*, $Runnable*, int64_t, int64_t, $TimeUnit*)},
		{"scheduleWithFixedDelay", "(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;", "(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(ScheduledExecutorService, scheduleWithFixedDelay, $ScheduledFuture*, $Runnable*, int64_t, int64_t, $TimeUnit*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.concurrent.ScheduledExecutorService",
		nullptr,
		"java.util.concurrent.ExecutorService",
		nullptr,
		methodInfos$$
	};
	$loadClass(ScheduledExecutorService, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScheduledExecutorService);
	});
	return class$;
}

$Class* ScheduledExecutorService::class$ = nullptr;

		} // concurrent
	} // util
} // java