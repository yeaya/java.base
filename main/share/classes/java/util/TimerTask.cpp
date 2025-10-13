#include <java/util/TimerTask.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef CANCELLED
#undef EXECUTED
#undef SCHEDULED
#undef VIRGIN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

namespace java {
	namespace util {

$FieldInfo _TimerTask_FieldInfo_[] = {
	{"lock", "Ljava/lang/Object;", nullptr, $FINAL, $field(TimerTask, lock)},
	{"state", "I", nullptr, 0, $field(TimerTask, state)},
	{"VIRGIN", "I", nullptr, $STATIC | $FINAL, $constField(TimerTask, VIRGIN)},
	{"SCHEDULED", "I", nullptr, $STATIC | $FINAL, $constField(TimerTask, SCHEDULED)},
	{"EXECUTED", "I", nullptr, $STATIC | $FINAL, $constField(TimerTask, EXECUTED)},
	{"CANCELLED", "I", nullptr, $STATIC | $FINAL, $constField(TimerTask, CANCELLED)},
	{"nextExecutionTime", "J", nullptr, 0, $field(TimerTask, nextExecutionTime)},
	{"period", "J", nullptr, 0, $field(TimerTask, period)},
	{}
};

$MethodInfo _TimerTask_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(TimerTask::*)()>(&TimerTask::init$))},
	{"cancel", "()Z", nullptr, $PUBLIC},
	{"run", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"scheduledExecutionTime", "()J", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TimerTask_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.TimerTask",
	"java.lang.Object",
	"java.lang.Runnable",
	_TimerTask_FieldInfo_,
	_TimerTask_MethodInfo_
};

$Object* allocate$TimerTask($Class* clazz) {
	return $of($alloc(TimerTask));
}

void TimerTask::init$() {
	$set(this, lock, $new($Object));
	this->state = TimerTask::VIRGIN;
	this->period = 0;
}

bool TimerTask::cancel() {
	$synchronized(this->lock) {
		bool result = (this->state == TimerTask::SCHEDULED);
		this->state = TimerTask::CANCELLED;
		return result;
	}
}

int64_t TimerTask::scheduledExecutionTime() {
	$synchronized(this->lock) {
		return (this->period < 0 ? this->nextExecutionTime + this->period : this->nextExecutionTime - this->period);
	}
}

TimerTask::TimerTask() {
}

$Class* TimerTask::load$($String* name, bool initialize) {
	$loadClass(TimerTask, name, initialize, &_TimerTask_ClassInfo_, allocate$TimerTask);
	return class$;
}

$Class* TimerTask::class$ = nullptr;

	} // util
} // java