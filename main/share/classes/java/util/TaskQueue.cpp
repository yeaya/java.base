#include <java/util/TaskQueue.h>

#include <java/lang/AssertionError.h>
#include <java/util/Arrays.h>
#include <java/util/TimerTask.h>
#include <jcpp.h>

using $TimerTaskArray = $Array<::java::util::TimerTask>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $TimerTask = ::java::util::TimerTask;

namespace java {
	namespace util {

$FieldInfo _TaskQueue_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TaskQueue, $assertionsDisabled)},
	{"queue", "[Ljava/util/TimerTask;", nullptr, $PRIVATE, $field(TaskQueue, queue)},
	{"size", "I", nullptr, $PRIVATE, $field(TaskQueue, size$)},
	{}
};

$MethodInfo _TaskQueue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TaskQueue::*)()>(&TaskQueue::init$))},
	{"add", "(Ljava/util/TimerTask;)V", nullptr, 0},
	{"clear", "()V", nullptr, 0},
	{"fixDown", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(TaskQueue::*)(int32_t)>(&TaskQueue::fixDown))},
	{"fixUp", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(TaskQueue::*)(int32_t)>(&TaskQueue::fixUp))},
	{"get", "(I)Ljava/util/TimerTask;", nullptr, 0},
	{"getMin", "()Ljava/util/TimerTask;", nullptr, 0},
	{"heapify", "()V", nullptr, 0},
	{"isEmpty", "()Z", nullptr, 0},
	{"quickRemove", "(I)V", nullptr, 0},
	{"removeMin", "()V", nullptr, 0},
	{"rescheduleMin", "(J)V", nullptr, 0},
	{"size", "()I", nullptr, 0},
	{}
};

$ClassInfo _TaskQueue_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.TaskQueue",
	"java.lang.Object",
	nullptr,
	_TaskQueue_FieldInfo_,
	_TaskQueue_MethodInfo_
};

$Object* allocate$TaskQueue($Class* clazz) {
	return $of($alloc(TaskQueue));
}

bool TaskQueue::$assertionsDisabled = false;

void TaskQueue::init$() {
	$set(this, queue, $new($TimerTaskArray, 128));
	this->size$ = 0;
}

int32_t TaskQueue::size() {
	return this->size$;
}

void TaskQueue::add($TimerTask* task) {
	if (this->size$ + 1 == $nc(this->queue)->length) {
		$set(this, queue, $fcast($TimerTaskArray, $Arrays::copyOf(this->queue, 2 * $nc(this->queue)->length)));
	}
	$nc(this->queue)->set(++this->size$, task);
	fixUp(this->size$);
}

$TimerTask* TaskQueue::getMin() {
	return $nc(this->queue)->get(1);
}

$TimerTask* TaskQueue::get(int32_t i) {
	return $nc(this->queue)->get(i);
}

void TaskQueue::removeMin() {
	$nc(this->queue)->set(1, $nc(this->queue)->get(this->size$));
	$nc(this->queue)->set(this->size$--, nullptr);
	fixDown(1);
}

void TaskQueue::quickRemove(int32_t i) {
	if (!TaskQueue::$assertionsDisabled && !(i <= this->size$)) {
		$throwNew($AssertionError);
	}
	$nc(this->queue)->set(i, $nc(this->queue)->get(this->size$));
	$nc(this->queue)->set(this->size$--, nullptr);
}

void TaskQueue::rescheduleMin(int64_t newTime) {
	$nc($nc(this->queue)->get(1))->nextExecutionTime = newTime;
	fixDown(1);
}

bool TaskQueue::isEmpty() {
	return this->size$ == 0;
}

void TaskQueue::clear() {
	for (int32_t i = 1; i <= this->size$; ++i) {
		$nc(this->queue)->set(i, nullptr);
	}
	this->size$ = 0;
}

void TaskQueue::fixUp(int32_t k) {
	$useLocalCurrentObjectStackCache();
	while (k > 1) {
		int32_t j = k >> 1;
		if ($nc($nc(this->queue)->get(j))->nextExecutionTime <= $nc($nc(this->queue)->get(k))->nextExecutionTime) {
			break;
		}
		$var($TimerTask, tmp, $nc(this->queue)->get(j));
		$nc(this->queue)->set(j, $nc(this->queue)->get(k));
		$nc(this->queue)->set(k, tmp);
		k = j;
	}
}

void TaskQueue::fixDown(int32_t k) {
	$useLocalCurrentObjectStackCache();
	int32_t j = 0;
	while (true) {
		bool var$0 = (j = k << 1) <= this->size$;
		if (!(var$0 && j > 0)) {
			break;
		}
		{
			if (j < this->size$ && $nc($nc(this->queue)->get(j))->nextExecutionTime > $nc($nc(this->queue)->get(j + 1))->nextExecutionTime) {
				++j;
			}
			if ($nc($nc(this->queue)->get(k))->nextExecutionTime <= $nc($nc(this->queue)->get(j))->nextExecutionTime) {
				break;
			}
			$var($TimerTask, tmp, $nc(this->queue)->get(j));
			$nc(this->queue)->set(j, $nc(this->queue)->get(k));
			$nc(this->queue)->set(k, tmp);
			k = j;
		}
	}
}

void TaskQueue::heapify() {
	for (int32_t i = this->size$ / 2; i >= 1; --i) {
		fixDown(i);
	}
}

void clinit$TaskQueue($Class* class$) {
	TaskQueue::$assertionsDisabled = !TaskQueue::class$->desiredAssertionStatus();
}

TaskQueue::TaskQueue() {
}

$Class* TaskQueue::load$($String* name, bool initialize) {
	$loadClass(TaskQueue, name, initialize, &_TaskQueue_ClassInfo_, clinit$TaskQueue, allocate$TaskQueue);
	return class$;
}

$Class* TaskQueue::class$ = nullptr;

	} // util
} // java