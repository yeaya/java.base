#include <java/util/concurrent/CompletableFuture$DelayedExecutor.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $CompletableFuture$Delayer = ::java::util::concurrent::CompletableFuture$Delayer;
using $CompletableFuture$TaskSubmitter = ::java::util::concurrent::CompletableFuture$TaskSubmitter;
using $Executor = ::java::util::concurrent::Executor;
using $ScheduledFuture = ::java::util::concurrent::ScheduledFuture;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CompletableFuture$DelayedExecutor_FieldInfo_[] = {
	{"delay", "J", nullptr, $FINAL, $field(CompletableFuture$DelayedExecutor, delay)},
	{"unit", "Ljava/util/concurrent/TimeUnit;", nullptr, $FINAL, $field(CompletableFuture$DelayedExecutor, unit)},
	{"executor", "Ljava/util/concurrent/Executor;", nullptr, $FINAL, $field(CompletableFuture$DelayedExecutor, executor)},
	{}
};

$MethodInfo _CompletableFuture$DelayedExecutor_MethodInfo_[] = {
	{"<init>", "(JLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/Executor;)V", nullptr, 0, $method(static_cast<void(CompletableFuture$DelayedExecutor::*)(int64_t,$TimeUnit*,$Executor*)>(&CompletableFuture$DelayedExecutor::init$))},
	{"execute", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CompletableFuture$DelayedExecutor_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$DelayedExecutor", "java.util.concurrent.CompletableFuture", "DelayedExecutor", $STATIC | $FINAL},
	{}
};

$ClassInfo _CompletableFuture$DelayedExecutor_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.CompletableFuture$DelayedExecutor",
	"java.lang.Object",
	"java.util.concurrent.Executor",
	_CompletableFuture$DelayedExecutor_FieldInfo_,
	_CompletableFuture$DelayedExecutor_MethodInfo_,
	nullptr,
	nullptr,
	_CompletableFuture$DelayedExecutor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$DelayedExecutor($Class* clazz) {
	return $of($alloc(CompletableFuture$DelayedExecutor));
}

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
	$loadClass(CompletableFuture$DelayedExecutor, name, initialize, &_CompletableFuture$DelayedExecutor_ClassInfo_, allocate$CompletableFuture$DelayedExecutor);
	return class$;
}

$Class* CompletableFuture$DelayedExecutor::class$ = nullptr;

		} // concurrent
	} // util
} // java