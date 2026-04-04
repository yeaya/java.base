#include <java/util/concurrent/CompletableFuture$Delayer.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/CompletableFuture$Delayer$DaemonThreadFactory.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/ScheduledFuture.h>
#include <java/util/concurrent/ScheduledThreadPoolExecutor.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $CompletableFuture$Delayer$DaemonThreadFactory = ::java::util::concurrent::CompletableFuture$Delayer$DaemonThreadFactory;
using $ScheduledFuture = ::java::util::concurrent::ScheduledFuture;
using $ScheduledThreadPoolExecutor = ::java::util::concurrent::ScheduledThreadPoolExecutor;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace util {
		namespace concurrent {

$ScheduledThreadPoolExecutor* CompletableFuture$Delayer::delayer = nullptr;

void CompletableFuture$Delayer::init$() {
}

$ScheduledFuture* CompletableFuture$Delayer::delay($Runnable* command, int64_t delay, $TimeUnit* unit) {
	$init(CompletableFuture$Delayer);
	return $nc(CompletableFuture$Delayer::delayer)->schedule(command, delay, unit);
}

void CompletableFuture$Delayer::clinit$($Class* clazz) {
	{
		$nc(($assignStatic(CompletableFuture$Delayer::delayer, $new($ScheduledThreadPoolExecutor, 1, $$new($CompletableFuture$Delayer$DaemonThreadFactory)))))->setRemoveOnCancelPolicy(true);
	}
}

CompletableFuture$Delayer::CompletableFuture$Delayer() {
}

$Class* CompletableFuture$Delayer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"delayer", "Ljava/util/concurrent/ScheduledThreadPoolExecutor;", nullptr, $STATIC | $FINAL, $staticField(CompletableFuture$Delayer, delayer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CompletableFuture$Delayer, init$, void)},
		{"delay", "(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;", "(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture<*>;", $STATIC, $staticMethod(CompletableFuture$Delayer, delay, $ScheduledFuture*, $Runnable*, int64_t, $TimeUnit*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.CompletableFuture$Delayer", "java.util.concurrent.CompletableFuture", "Delayer", $STATIC | $FINAL},
		{"java.util.concurrent.CompletableFuture$Delayer$DaemonThreadFactory", "java.util.concurrent.CompletableFuture$Delayer", "DaemonThreadFactory", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.CompletableFuture$Delayer",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.CompletableFuture"
	};
	$loadClass(CompletableFuture$Delayer, name, initialize, &classInfo$$, CompletableFuture$Delayer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CompletableFuture$Delayer);
	});
	return class$;
}

$Class* CompletableFuture$Delayer::class$ = nullptr;

		} // concurrent
	} // util
} // java