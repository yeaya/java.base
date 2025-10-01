#ifndef _java_util_Timer$ThreadReaper_h_
#define _java_util_Timer$ThreadReaper_h_
//$ class java.util.Timer$ThreadReaper
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace util {
		class TaskQueue;
		class TimerThread;
	}
}

namespace java {
	namespace util {

class Timer$ThreadReaper : public ::java::lang::Runnable {
	$class(Timer$ThreadReaper, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Timer$ThreadReaper();
	void init$(::java::util::TaskQueue* queue, ::java::util::TimerThread* thread);
	virtual void run() override;
	::java::util::TaskQueue* queue = nullptr;
	::java::util::TimerThread* thread = nullptr;
};

	} // util
} // java

#endif // _java_util_Timer$ThreadReaper_h_