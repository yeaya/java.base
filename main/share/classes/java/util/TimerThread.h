#ifndef _java_util_TimerThread_h_
#define _java_util_TimerThread_h_
//$ class java.util.TimerThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace util {
		class TaskQueue;
	}
}

namespace java {
	namespace util {

class TimerThread : public ::java::lang::Thread {
	$class(TimerThread, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	TimerThread();
	void init$(::java::util::TaskQueue* queue);
	void mainLoop();
	virtual void run() override;
	bool newTasksMayBeScheduled = false;
	::java::util::TaskQueue* queue = nullptr;
};

	} // util
} // java

#endif // _java_util_TimerThread_h_