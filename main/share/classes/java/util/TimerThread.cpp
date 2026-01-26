#include <java/util/TimerThread.h>

#include <java/lang/InterruptedException.h>
#include <java/util/TaskQueue.h>
#include <java/util/TimerTask.h>
#include <jcpp.h>

#undef CANCELLED
#undef EXECUTED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $TaskQueue = ::java::util::TaskQueue;
using $TimerTask = ::java::util::TimerTask;

namespace java {
	namespace util {

$FieldInfo _TimerThread_FieldInfo_[] = {
	{"newTasksMayBeScheduled", "Z", nullptr, 0, $field(TimerThread, newTasksMayBeScheduled)},
	{"queue", "Ljava/util/TaskQueue;", nullptr, $PRIVATE, $field(TimerThread, queue)},
	{}
};

$MethodInfo _TimerThread_MethodInfo_[] = {
	{"<init>", "(Ljava/util/TaskQueue;)V", nullptr, 0, $method(TimerThread, init$, void, $TaskQueue*)},
	{"mainLoop", "()V", nullptr, $PRIVATE, $method(TimerThread, mainLoop, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TimerThread, run, void)},
	{}
};

$ClassInfo _TimerThread_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.TimerThread",
	"java.lang.Thread",
	nullptr,
	_TimerThread_FieldInfo_,
	_TimerThread_MethodInfo_
};

$Object* allocate$TimerThread($Class* clazz) {
	return $of($alloc(TimerThread));
}

void TimerThread::init$($TaskQueue* queue) {
	$Thread::init$();
	this->newTasksMayBeScheduled = true;
	$set(this, queue, queue);
}

void TimerThread::run() {
	{
		$var($Throwable, var$0, nullptr);
		try {
			mainLoop();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$synchronized(this->queue) {
				this->newTasksMayBeScheduled = false;
				$nc(this->queue)->clear();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TimerThread::mainLoop() {
	$useLocalCurrentObjectStackCache();
	while (true) {
		try {
			$var($TimerTask, task, nullptr);
			bool taskFired = false;
			$synchronized(this->queue) {
				while ($nc(this->queue)->isEmpty() && this->newTasksMayBeScheduled) {
					$nc($of(this->queue))->wait();
				}
				if ($nc(this->queue)->isEmpty()) {
					break;
				}
				int64_t currentTime = 0;
				int64_t executionTime = 0;
				$assign(task, $nc(this->queue)->getMin());
				$synchronized($nc(task)->lock) {
					if (task->state == $TimerTask::CANCELLED) {
						$nc(this->queue)->removeMin();
						continue;
					}
					currentTime = $System::currentTimeMillis();
					executionTime = task->nextExecutionTime;
					if (taskFired = (executionTime <= currentTime)) {
						if (task->period == 0) {
							$nc(this->queue)->removeMin();
							task->state = $TimerTask::EXECUTED;
						} else {
							$nc(this->queue)->rescheduleMin(task->period < 0 ? currentTime - task->period : executionTime + task->period);
						}
					}
				}
				if (!taskFired) {
					$nc($of(this->queue))->wait(executionTime - currentTime);
				}
			}
			if (taskFired) {
				$nc(task)->run();
			}
		} catch ($InterruptedException& e) {
		}
	}
}

TimerThread::TimerThread() {
}

$Class* TimerThread::load$($String* name, bool initialize) {
	$loadClass(TimerThread, name, initialize, &_TimerThread_ClassInfo_, allocate$TimerThread);
	return class$;
}

$Class* TimerThread::class$ = nullptr;

	} // util
} // java