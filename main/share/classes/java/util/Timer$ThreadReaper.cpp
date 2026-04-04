#include <java/util/Timer$ThreadReaper.h>
#include <java/util/TaskQueue.h>
#include <java/util/Timer.h>
#include <java/util/TimerThread.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TaskQueue = ::java::util::TaskQueue;
using $TimerThread = ::java::util::TimerThread;

namespace java {
	namespace util {

void Timer$ThreadReaper::init$($TaskQueue* queue, $TimerThread* thread) {
	$set(this, queue, queue);
	$set(this, thread, thread);
}

void Timer$ThreadReaper::run() {
	$synchronized(this->queue) {
		$nc(this->thread)->newTasksMayBeScheduled = false;
		this->queue->notify();
	}
}

Timer$ThreadReaper::Timer$ThreadReaper() {
}

$Class* Timer$ThreadReaper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"queue", "Ljava/util/TaskQueue;", nullptr, $PRIVATE | $FINAL, $field(Timer$ThreadReaper, queue)},
		{"thread", "Ljava/util/TimerThread;", nullptr, $PRIVATE | $FINAL, $field(Timer$ThreadReaper, thread)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/TaskQueue;Ljava/util/TimerThread;)V", nullptr, 0, $method(Timer$ThreadReaper, init$, void, $TaskQueue*, $TimerThread*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Timer$ThreadReaper, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Timer$ThreadReaper", "java.util.Timer", "ThreadReaper", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Timer$ThreadReaper",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Timer"
	};
	$loadClass(Timer$ThreadReaper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Timer$ThreadReaper);
	});
	return class$;
}

$Class* Timer$ThreadReaper::class$ = nullptr;

	} // util
} // java