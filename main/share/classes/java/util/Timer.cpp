#include <java/util/Timer.h>

#include <java/lang/IllegalStateException.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
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
using $Runnable = ::java::lang::Runnable;
using $Cleaner = ::java::lang::ref::Cleaner;
using $Cleaner$Cleanable = ::java::lang::ref::Cleaner$Cleanable;
using $Date = ::java::util::Date;
using $TaskQueue = ::java::util::TaskQueue;
using $Timer$ThreadReaper = ::java::util::Timer$ThreadReaper;
using $TimerTask = ::java::util::TimerTask;
using $TimerThread = ::java::util::TimerThread;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $CleanerFactory = ::jdk::internal::ref::CleanerFactory;

namespace java {
	namespace util {

$FieldInfo _Timer_FieldInfo_[] = {
	{"queue", "Ljava/util/TaskQueue;", nullptr, $PRIVATE | $FINAL, $field(Timer, queue)},
	{"thread", "Ljava/util/TimerThread;", nullptr, $PRIVATE | $FINAL, $field(Timer, thread)},
	{"cleanup", "Ljava/lang/ref/Cleaner$Cleanable;", nullptr, $PRIVATE | $FINAL, $field(Timer, cleanup)},
	{"nextSerialNumber", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Timer, nextSerialNumber)},
	{}
};

$MethodInfo _Timer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Timer::*)()>(&Timer::init$))},
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(Timer::*)(bool)>(&Timer::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Timer::*)($String*)>(&Timer::init$))},
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Timer::*)($String*,bool)>(&Timer::init$))},
	{"cancel", "()V", nullptr, $PUBLIC},
	{"purge", "()I", nullptr, $PUBLIC},
	{"sched", "(Ljava/util/TimerTask;JJ)V", nullptr, $PRIVATE, $method(static_cast<void(Timer::*)($TimerTask*,int64_t,int64_t)>(&Timer::sched))},
	{"schedule", "(Ljava/util/TimerTask;J)V", nullptr, $PUBLIC},
	{"schedule", "(Ljava/util/TimerTask;Ljava/util/Date;)V", nullptr, $PUBLIC},
	{"schedule", "(Ljava/util/TimerTask;JJ)V", nullptr, $PUBLIC},
	{"schedule", "(Ljava/util/TimerTask;Ljava/util/Date;J)V", nullptr, $PUBLIC},
	{"scheduleAtFixedRate", "(Ljava/util/TimerTask;JJ)V", nullptr, $PUBLIC},
	{"scheduleAtFixedRate", "(Ljava/util/TimerTask;Ljava/util/Date;J)V", nullptr, $PUBLIC},
	{"serialNumber", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&Timer::serialNumber))},
	{}
};

$InnerClassInfo _Timer_InnerClassesInfo_[] = {
	{"java.util.Timer$ThreadReaper", "java.util.Timer", "ThreadReaper", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Timer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.Timer",
	"java.lang.Object",
	nullptr,
	_Timer_FieldInfo_,
	_Timer_MethodInfo_,
	nullptr,
	nullptr,
	_Timer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.Timer$ThreadReaper"
};

$Object* allocate$Timer($Class* clazz) {
	return $of($alloc(Timer));
}

$AtomicInteger* Timer::nextSerialNumber = nullptr;

int32_t Timer::serialNumber() {
	$init(Timer);
	return $nc(Timer::nextSerialNumber)->getAndIncrement();
}

void Timer::init$() {
	$useLocalCurrentObjectStackCache();
	Timer::init$($$str({"Timer-"_s, $$str(serialNumber())}));
}

void Timer::init$(bool isDaemon) {
	$useLocalCurrentObjectStackCache();
	Timer::init$($$str({"Timer-"_s, $$str(serialNumber())}), isDaemon);
}

void Timer::init$($String* name) {
	Timer::init$(name, false);
}

void Timer::init$($String* name, bool isDaemon) {
	$useLocalCurrentObjectStackCache();
	$set(this, queue, $new($TaskQueue));
	$set(this, thread, $new($TimerThread, this->queue));
	$var($Timer$ThreadReaper, threadReaper, $new($Timer$ThreadReaper, this->queue, this->thread));
	$set(this, cleanup, $nc($($CleanerFactory::cleaner()))->register$(this, threadReaper));
	$nc(this->thread)->setName(name);
	$nc(this->thread)->setDaemon(isDaemon);
	$nc(this->thread)->start();
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
		$nc(this->queue)->add(task);
		if ($nc(this->queue)->getMin() == task) {
			$nc($of(this->queue))->notify();
		}
	}
}

void Timer::cancel() {
	$synchronized(this->queue) {
		$nc(this->queue)->clear();
		$nc(this->cleanup)->clean();
	}
}

int32_t Timer::purge() {
	$useLocalCurrentObjectStackCache();
	int32_t result = 0;
	$synchronized(this->queue) {
		for (int32_t i = $nc(this->queue)->size(); i > 0; --i) {
			if ($nc($($nc(this->queue)->get(i)))->state == $TimerTask::CANCELLED) {
				$nc(this->queue)->quickRemove(i);
				++result;
			}
		}
		if (result != 0) {
			$nc(this->queue)->heapify();
		}
	}
	return result;
}

void clinit$Timer($Class* class$) {
	$assignStatic(Timer::nextSerialNumber, $new($AtomicInteger));
}

Timer::Timer() {
}

$Class* Timer::load$($String* name, bool initialize) {
	$loadClass(Timer, name, initialize, &_Timer_ClassInfo_, clinit$Timer, allocate$Timer);
	return class$;
}

$Class* Timer::class$ = nullptr;

	} // util
} // java