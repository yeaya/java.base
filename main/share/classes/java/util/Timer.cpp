#include <java/util/Timer.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Math.h>
#include <java/lang/ref/Cleaner$Cleanable.h>
#include <java/lang/ref/Cleaner.h>
#include <java/util/Date.h>
#include <java/util/TaskQueue.h>
#include <java/util/Timer$ThreadReaper.h>
#include <java/util/TimerTask.h>
#include <java/util/TimerThread.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jdk/internal/ref/CleanerFactory.h>
#include <jcpp.h>

#undef CANCELLED
#undef MAX_VALUE
#undef SCHEDULED
#undef VIRGIN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Date = ::java::util::Date;
using $TaskQueue = ::java::util::TaskQueue;
using $Timer$ThreadReaper = ::java::util::Timer$ThreadReaper;
using $TimerTask = ::java::util::TimerTask;
using $TimerThread = ::java::util::TimerThread;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $CleanerFactory = ::jdk::internal::ref::CleanerFactory;

namespace java {
	namespace util {

$AtomicInteger* Timer::nextSerialNumber = nullptr;

int32_t Timer::serialNumber() {
	$init(Timer);
	return Timer::nextSerialNumber->getAndIncrement();
}

void Timer::init$() {
	$useLocalObjectStack();
	Timer::init$($$str({"Timer-"_s, $$str(serialNumber())}));
}

void Timer::init$(bool isDaemon) {
	$useLocalObjectStack();
	Timer::init$($$str({"Timer-"_s, $$str(serialNumber())}), isDaemon);
}

void Timer::init$($String* name) {
	Timer::init$(name, false);
}

void Timer::init$($String* name, bool isDaemon) {
	$useLocalObjectStack();
	$set(this, queue, $new($TaskQueue));
	$set(this, thread, $new($TimerThread, this->queue));
	$var($Timer$ThreadReaper, threadReaper, $new($Timer$ThreadReaper, this->queue, this->thread));
	$set(this, cleanup, $$nc($CleanerFactory::cleaner())->register$(this, threadReaper));
	this->thread->setName(name);
	this->thread->setDaemon(isDaemon);
	this->thread->start();
}

void Timer::schedule($TimerTask* task, int64_t delay) {
	if (delay < 0) {
		$throwNew($IllegalArgumentException, "Negative delay."_s);
	}
	sched(task, $System::currentTimeMillis() + delay, 0);
}

void Timer::schedule($TimerTask* task, $Date* time) {
	sched(task, $nc(time)->getTime(), 0);
}

void Timer::schedule($TimerTask* task, int64_t delay, int64_t period) {
	if (delay < 0) {
		$throwNew($IllegalArgumentException, "Negative delay."_s);
	}
	if (period <= 0) {
		$throwNew($IllegalArgumentException, "Non-positive period."_s);
	}
	sched(task, $System::currentTimeMillis() + delay, -period);
}

void Timer::schedule($TimerTask* task, $Date* firstTime, int64_t period) {
	if (period <= 0) {
		$throwNew($IllegalArgumentException, "Non-positive period."_s);
	}
	sched(task, $nc(firstTime)->getTime(), -period);
}

void Timer::scheduleAtFixedRate($TimerTask* task, int64_t delay, int64_t period) {
	if (delay < 0) {
		$throwNew($IllegalArgumentException, "Negative delay."_s);
	}
	if (period <= 0) {
		$throwNew($IllegalArgumentException, "Non-positive period."_s);
	}
	sched(task, $System::currentTimeMillis() + delay, period);
}

void Timer::scheduleAtFixedRate($TimerTask* task, $Date* firstTime, int64_t period) {
	if (period <= 0) {
		$throwNew($IllegalArgumentException, "Non-positive period."_s);
	}
	sched(task, $nc(firstTime)->getTime(), period);
}

void Timer::sched($TimerTask* task, int64_t time, int64_t period) {
	if (time < 0) {
		$throwNew($IllegalArgumentException, "Illegal execution time."_s);
	}
	if ($Math::abs(period) > ($Long::MAX_VALUE >> 1)) {
		period >>= 1;
	}
	$synchronized(this->queue) {
		if (!$nc(this->thread)->newTasksMayBeScheduled) {
			$throwNew($IllegalStateException, "Timer already cancelled."_s);
		}
		$synchronized($nc(task)->lock) {
			if (task->state != $TimerTask::VIRGIN) {
				$throwNew($IllegalStateException, "Task already scheduled or cancelled"_s);
			}
			task->nextExecutionTime = time;
			task->period = period;
			task->state = $TimerTask::SCHEDULED;
		}
		this->queue->add(task);
		if (this->queue->getMin() == task) {
			this->queue->notify();
		}
	}
}

void Timer::cancel() {
	$synchronized(this->queue) {
		this->queue->clear();
		$nc(this->cleanup)->clean();
	}
}

int32_t Timer::purge() {
	$useLocalObjectStack();
	int32_t result = 0;
	$synchronized(this->queue) {
		for (int32_t i = this->queue->size(); i > 0; --i) {
			if ($nc($(this->queue->get(i)))->state == $TimerTask::CANCELLED) {
				this->queue->quickRemove(i);
				++result;
			}
		}
		if (result != 0) {
			this->queue->heapify();
		}
	}
	return result;
}

void Timer::clinit$($Class* clazz) {
	$assignStatic(Timer::nextSerialNumber, $new($AtomicInteger));
}

Timer::Timer() {
}

$Class* Timer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"queue", "Ljava/util/TaskQueue;", nullptr, $PRIVATE | $FINAL, $field(Timer, queue)},
		{"thread", "Ljava/util/TimerThread;", nullptr, $PRIVATE | $FINAL, $field(Timer, thread)},
		{"cleanup", "Ljava/lang/ref/Cleaner$Cleanable;", nullptr, $PRIVATE | $FINAL, $field(Timer, cleanup)},
		{"nextSerialNumber", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Timer, nextSerialNumber)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Timer, init$, void)},
		{"<init>", "(Z)V", nullptr, $PUBLIC, $method(Timer, init$, void, bool)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Timer, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(Timer, init$, void, $String*, bool)},
		{"cancel", "()V", nullptr, $PUBLIC, $virtualMethod(Timer, cancel, void)},
		{"purge", "()I", nullptr, $PUBLIC, $virtualMethod(Timer, purge, int32_t)},
		{"sched", "(Ljava/util/TimerTask;JJ)V", nullptr, $PRIVATE, $method(Timer, sched, void, $TimerTask*, int64_t, int64_t)},
		{"schedule", "(Ljava/util/TimerTask;J)V", nullptr, $PUBLIC, $virtualMethod(Timer, schedule, void, $TimerTask*, int64_t)},
		{"schedule", "(Ljava/util/TimerTask;Ljava/util/Date;)V", nullptr, $PUBLIC, $virtualMethod(Timer, schedule, void, $TimerTask*, $Date*)},
		{"schedule", "(Ljava/util/TimerTask;JJ)V", nullptr, $PUBLIC, $virtualMethod(Timer, schedule, void, $TimerTask*, int64_t, int64_t)},
		{"schedule", "(Ljava/util/TimerTask;Ljava/util/Date;J)V", nullptr, $PUBLIC, $virtualMethod(Timer, schedule, void, $TimerTask*, $Date*, int64_t)},
		{"scheduleAtFixedRate", "(Ljava/util/TimerTask;JJ)V", nullptr, $PUBLIC, $virtualMethod(Timer, scheduleAtFixedRate, void, $TimerTask*, int64_t, int64_t)},
		{"scheduleAtFixedRate", "(Ljava/util/TimerTask;Ljava/util/Date;J)V", nullptr, $PUBLIC, $virtualMethod(Timer, scheduleAtFixedRate, void, $TimerTask*, $Date*, int64_t)},
		{"serialNumber", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(Timer, serialNumber, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Timer$ThreadReaper", "java.util.Timer", "ThreadReaper", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.Timer",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.util.Timer$ThreadReaper"
	};
	$loadClass(Timer, name, initialize, &classInfo$$, Timer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Timer);
	});
	return class$;
}

$Class* Timer::class$ = nullptr;

	} // util
} // java