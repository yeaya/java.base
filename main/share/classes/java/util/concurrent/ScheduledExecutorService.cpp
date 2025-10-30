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
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $ScheduledFuture = ::java::util::concurrent::ScheduledFuture;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _ScheduledExecutorService_MethodInfo_[] = {
	{"schedule", "(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;", "(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture<*>;", $PUBLIC | $ABSTRACT},
	{"schedule", "(Ljava/util/concurrent/Callable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;", "<V:Ljava/lang/Object;>(Ljava/util/concurrent/Callable<TV;>;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture<TV;>;", $PUBLIC | $ABSTRACT},
	{"scheduleAtFixedRate", "(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;", "(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture<*>;", $PUBLIC | $ABSTRACT},
	{"scheduleWithFixedDelay", "(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;", "(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture<*>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ScheduledExecutorService_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.concurrent.ScheduledExecutorService",
	nullptr,
	"java.util.concurrent.ExecutorService",
	nullptr,
	_ScheduledExecutorService_MethodInfo_
};

$Object* allocate$ScheduledExecutorService($Class* clazz) {
	return $of($alloc(ScheduledExecutorService));
}

$Class* ScheduledExecutorService::load$($String* name, bool initialize) {
	$loadClass(ScheduledExecutorService, name, initialize, &_ScheduledExecutorService_ClassInfo_, allocate$ScheduledExecutorService);
	return class$;
}

$Class* ScheduledExecutorService::class$ = nullptr;

		} // concurrent
	} // util
} // java