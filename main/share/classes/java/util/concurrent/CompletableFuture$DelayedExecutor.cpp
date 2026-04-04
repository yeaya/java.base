#include <java/util/concurrent/CompletableFuture$DelayedExecutor.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/CompletableFuture$Delayer.h>
#include <java/util/concurrent/CompletableFuture$TaskSubmitter.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/Executor.h>
#include <java/util/concurrent/ScheduledFuture.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $CompletableFuture$Delayer = ::java::util::concurrent::CompletableFuture$Delayer;
using $CompletableFuture$TaskSubmitter = ::java::util::concurrent::CompletableFuture$TaskSubmitter;
using $Executor = ::java::util::concurrent::Executor;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace util {
		namespace concurrent {

void CompletableFuture$DelayedExecutor::init$(int64_t delay, $TimeUnit* unit, $Executor* executor) {
	this->delay = delay;
	$set(this, unit, unit);
	$set(this, executor, executor);
}

void CompletableFuture$DelayedExecutor::execute($Runnable* r) {
	$CompletableFuture$Delayer::delay($$new($CompletableFuture$TaskSubmitter, this->executor, r), this->delay, this->unit);
}

CompletableFuture$DelayedExecutor::CompletableFuture$DelayedExecutor() {
}

$Class* CompletableFuture$DelayedExecutor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"delay", "J", nullptr, $FINAL, $field(CompletableFuture$DelayedExecutor, delay)},
		{"unit", "Ljava/util/concurrent/TimeUnit;", nullptr, $FINAL, $field(CompletableFuture$DelayedExecutor, unit)},
		{"executor", "Ljava/util/concurrent/Executor;", nullptr, $FINAL, $field(CompletableFuture$DelayedExecutor, executor)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(JLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/Executor;)V", nullptr, 0, $method(CompletableFuture$DelayedExecutor, init$, void, int64_t, $TimeUnit*, $Executor*)},
		{"execute", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $virtualMethod(CompletableFuture$DelayedExecutor, execute, void, $Runnable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.CompletableFuture$DelayedExecutor", "java.util.concurrent.CompletableFuture", "DelayedExecutor", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.CompletableFuture$DelayedExecutor",
		"java.lang.Object",
		"java.util.concurrent.Executor",
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
	$loadClass(CompletableFuture$DelayedExecutor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompletableFuture$DelayedExecutor);
	});
	return class$;
}

$Class* CompletableFuture$DelayedExecutor::class$ = nullptr;

		} // concurrent
	} // util
} // java