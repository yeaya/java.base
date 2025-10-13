#include <java/util/concurrent/ScheduledThreadPoolExecutor$ScheduledFutureTask.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/Delayed.h>
#include <java/util/concurrent/FutureTask.h>
#include <java/util/concurrent/RunnableFuture.h>
#include <java/util/concurrent/RunnableScheduledFuture.h>
#include <java/util/concurrent/ScheduledThreadPoolExecutor.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

#undef NANOSECONDS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Callable = ::java::util::concurrent::Callable;
using $Delayed = ::java::util::concurrent::Delayed;
using $FutureTask = ::java::util::concurrent::FutureTask;
using $RunnableFuture = ::java::util::concurrent::RunnableFuture;
using $RunnableScheduledFuture = ::java::util::concurrent::RunnableScheduledFuture;
using $ScheduledThreadPoolExecutor = ::java::util::concurrent::ScheduledThreadPoolExecutor;
using $ThreadPoolExecutor = ::java::util::concurrent::ThreadPoolExecutor;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ScheduledThreadPoolExecutor$ScheduledFutureTask_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/ScheduledThreadPoolExecutor;", nullptr, $FINAL | $SYNTHETIC, $field(ScheduledThreadPoolExecutor$ScheduledFutureTask, this$0)},
	{"sequenceNumber", "J", nullptr, $PRIVATE | $FINAL, $field(ScheduledThreadPoolExecutor$ScheduledFutureTask, sequenceNumber)},
	{"time", "J", nullptr, $PRIVATE | $VOLATILE, $field(ScheduledThreadPoolExecutor$ScheduledFutureTask, time)},
	{"period", "J", nullptr, $PRIVATE | $FINAL, $field(ScheduledThreadPoolExecutor$ScheduledFutureTask, period)},
	{"outerTask", "Ljava/util/concurrent/RunnableScheduledFuture;", "Ljava/util/concurrent/RunnableScheduledFuture<TV;>;", 0, $field(ScheduledThreadPoolExecutor$ScheduledFutureTask, outerTask)},
	{"heapIndex", "I", nullptr, 0, $field(ScheduledThreadPoolExecutor$ScheduledFutureTask, heapIndex)},
	{}
};

$MethodInfo _ScheduledThreadPoolExecutor$ScheduledFutureTask_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*get", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/concurrent/ScheduledThreadPoolExecutor;Ljava/lang/Runnable;Ljava/lang/Object;JJ)V", "(Ljava/lang/Runnable;TV;JJ)V", 0, $method(static_cast<void(ScheduledThreadPoolExecutor$ScheduledFutureTask::*)($ScheduledThreadPoolExecutor*,$Runnable*,Object$*,int64_t,int64_t)>(&ScheduledThreadPoolExecutor$ScheduledFutureTask::init$))},
	{"<init>", "(Ljava/util/concurrent/ScheduledThreadPoolExecutor;Ljava/lang/Runnable;Ljava/lang/Object;JJJ)V", "(Ljava/lang/Runnable;TV;JJJ)V", 0, $method(static_cast<void(ScheduledThreadPoolExecutor$ScheduledFutureTask::*)($ScheduledThreadPoolExecutor*,$Runnable*,Object$*,int64_t,int64_t,int64_t)>(&ScheduledThreadPoolExecutor$ScheduledFutureTask::init$))},
	{"<init>", "(Ljava/util/concurrent/ScheduledThreadPoolExecutor;Ljava/util/concurrent/Callable;JJ)V", "(Ljava/util/concurrent/Callable<TV;>;JJ)V", 0, $method(static_cast<void(ScheduledThreadPoolExecutor$ScheduledFutureTask::*)($ScheduledThreadPoolExecutor*,$Callable*,int64_t,int64_t)>(&ScheduledThreadPoolExecutor$ScheduledFutureTask::init$))},
	{"cancel", "(Z)Z", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/util/concurrent/Delayed;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getDelay", "(Ljava/util/concurrent/TimeUnit;)J", nullptr, $PUBLIC},
	{"*isCancelled", "()Z", nullptr, $PUBLIC},
	{"*isDone", "()Z", nullptr, $PUBLIC},
	{"isPeriodic", "()Z", nullptr, $PUBLIC},
	{"run", "()V", nullptr, $PUBLIC},
	{"setNextRunTime", "()V", nullptr, $PRIVATE, $method(static_cast<void(ScheduledThreadPoolExecutor$ScheduledFutureTask::*)()>(&ScheduledThreadPoolExecutor$ScheduledFutureTask::setNextRunTime))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ScheduledThreadPoolExecutor$ScheduledFutureTask_InnerClassesInfo_[] = {
	{"java.util.concurrent.ScheduledThreadPoolExecutor$ScheduledFutureTask", "java.util.concurrent.ScheduledThreadPoolExecutor", "ScheduledFutureTask", $PRIVATE},
	{}
};

$ClassInfo _ScheduledThreadPoolExecutor$ScheduledFutureTask_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.ScheduledThreadPoolExecutor$ScheduledFutureTask",
	"java.util.concurrent.FutureTask",
	"java.util.concurrent.RunnableScheduledFuture",
	_ScheduledThreadPoolExecutor$ScheduledFutureTask_FieldInfo_,
	_ScheduledThreadPoolExecutor$ScheduledFutureTask_MethodInfo_,
	"<V:Ljava/lang/Object;>Ljava/util/concurrent/FutureTask<TV;>;Ljava/util/concurrent/RunnableScheduledFuture<TV;>;",
	nullptr,
	_ScheduledThreadPoolExecutor$ScheduledFutureTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ScheduledThreadPoolExecutor"
};

$Object* allocate$ScheduledThreadPoolExecutor$ScheduledFutureTask($Class* clazz) {
	return $of($alloc(ScheduledThreadPoolExecutor$ScheduledFutureTask));
}

bool ScheduledThreadPoolExecutor$ScheduledFutureTask::isCancelled() {
	 return this->$FutureTask::isCancelled();
}

bool ScheduledThreadPoolExecutor$ScheduledFutureTask::isDone() {
	 return this->$FutureTask::isDone();
}

$Object* ScheduledThreadPoolExecutor$ScheduledFutureTask::get() {
	 return this->$FutureTask::get();
}

$Object* ScheduledThreadPoolExecutor$ScheduledFutureTask::get(int64_t timeout, $TimeUnit* unit) {
	 return this->$FutureTask::get(timeout, unit);
}

$String* ScheduledThreadPoolExecutor$ScheduledFutureTask::toString() {
	 return this->$FutureTask::toString();
}

int32_t ScheduledThreadPoolExecutor$ScheduledFutureTask::hashCode() {
	 return this->$FutureTask::hashCode();
}

bool ScheduledThreadPoolExecutor$ScheduledFutureTask::equals(Object$* obj) {
	 return this->$FutureTask::equals(obj);
}

$Object* ScheduledThreadPoolExecutor$ScheduledFutureTask::clone() {
	 return this->$FutureTask::clone();
}

void ScheduledThreadPoolExecutor$ScheduledFutureTask::finalize() {
	this->$FutureTask::finalize();
}

void ScheduledThreadPoolExecutor$ScheduledFutureTask::init$($ScheduledThreadPoolExecutor* this$0, $Runnable* r, Object$* result, int64_t triggerTime, int64_t sequenceNumber) {
	$set(this, this$0, this$0);
	$FutureTask::init$(r, result);
	$set(this, outerTask, this);
	this->time = triggerTime;
	this->period = 0;
	this->sequenceNumber = sequenceNumber;
}

void ScheduledThreadPoolExecutor$ScheduledFutureTask::init$($ScheduledThreadPoolExecutor* this$0, $Runnable* r, Object$* result, int64_t triggerTime, int64_t period, int64_t sequenceNumber) {
	$set(this, this$0, this$0);
	$FutureTask::init$(r, result);
	$set(this, outerTask, this);
	this->time = triggerTime;
	this->period = period;
	this->sequenceNumber = sequenceNumber;
}

void ScheduledThreadPoolExecutor$ScheduledFutureTask::init$($ScheduledThreadPoolExecutor* this$0, $Callable* callable, int64_t triggerTime, int64_t sequenceNumber) {
	$set(this, this$0, this$0);
	$FutureTask::init$(callable);
	$set(this, outerTask, this);
	this->time = triggerTime;
	this->period = 0;
	this->sequenceNumber = sequenceNumber;
}

int64_t ScheduledThreadPoolExecutor$ScheduledFutureTask::getDelay($TimeUnit* unit) {
	$init($TimeUnit);
	return $nc(unit)->convert(this->time - $System::nanoTime(), $TimeUnit::NANOSECONDS);
}

int32_t ScheduledThreadPoolExecutor$ScheduledFutureTask::compareTo($Delayed* other) {
	if ($equals(other, this)) {
		return 0;
	}
	if ($instanceOf(ScheduledThreadPoolExecutor$ScheduledFutureTask, other)) {
		$var(ScheduledThreadPoolExecutor$ScheduledFutureTask, x, $cast(ScheduledThreadPoolExecutor$ScheduledFutureTask, other));
		int64_t diff = this->time - $nc(x)->time;
		if (diff < 0) {
			return -1;
		} else if (diff > 0) {
			return 1;
		} else if (this->sequenceNumber < x->sequenceNumber) {
			return -1;
		} else {
			return 1;
		}
	}
	$init($TimeUnit);
	int64_t var$0 = getDelay($TimeUnit::NANOSECONDS);
	int64_t diff = var$0 - $nc(other)->getDelay($TimeUnit::NANOSECONDS);
	return (diff < 0) ? -1 : (diff > 0) ? 1 : 0;
}

bool ScheduledThreadPoolExecutor$ScheduledFutureTask::isPeriodic() {
	return this->period != 0;
}

void ScheduledThreadPoolExecutor$ScheduledFutureTask::setNextRunTime() {
	int64_t p = this->period;
	if (p > 0) {
		this->time += p;
	} else {
		this->time = this->this$0->triggerTime(-p);
	}
}

bool ScheduledThreadPoolExecutor$ScheduledFutureTask::cancel(bool mayInterruptIfRunning) {
	bool cancelled = $FutureTask::cancel(mayInterruptIfRunning);
	if (cancelled && this->this$0->removeOnCancel && this->heapIndex >= 0) {
		this->this$0->remove(static_cast<$Runnable*>(static_cast<$RunnableFuture*>(static_cast<$FutureTask*>(this))));
	}
	return cancelled;
}

void ScheduledThreadPoolExecutor$ScheduledFutureTask::run() {
	if (!this->this$0->canRunInCurrentRunState(this)) {
		cancel(false);
	} else if (!isPeriodic()) {
		$FutureTask::run();
	} else if ($FutureTask::runAndReset()) {
		setNextRunTime();
		this->this$0->reExecutePeriodic(this->outerTask);
	}
}

int32_t ScheduledThreadPoolExecutor$ScheduledFutureTask::compareTo(Object$* other) {
	return this->compareTo($cast($Delayed, other));
}

ScheduledThreadPoolExecutor$ScheduledFutureTask::ScheduledThreadPoolExecutor$ScheduledFutureTask() {
}

$Class* ScheduledThreadPoolExecutor$ScheduledFutureTask::load$($String* name, bool initialize) {
	$loadClass(ScheduledThreadPoolExecutor$ScheduledFutureTask, name, initialize, &_ScheduledThreadPoolExecutor$ScheduledFutureTask_ClassInfo_, allocate$ScheduledThreadPoolExecutor$ScheduledFutureTask);
	return class$;
}

$Class* ScheduledThreadPoolExecutor$ScheduledFutureTask::class$ = nullptr;

		} // concurrent
	} // util
} // java