#ifndef _java_util_Timer_h_
#define _java_util_Timer_h_
//$ class java.util.Timer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace ref {
			class Cleaner$Cleanable;
		}
	}
}
namespace java {
	namespace util {
		class Date;
		class TaskQueue;
		class TimerTask;
		class TimerThread;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
		}
	}
}

namespace java {
	namespace util {

class $import Timer : public ::java::lang::Object {
	$class(Timer, 0, ::java::lang::Object)
public:
	Timer();
	void init$();
	void init$(bool isDaemon);
	void init$($String* name);
	void init$($String* name, bool isDaemon);
	virtual void cancel();
	virtual int32_t purge();
	void sched(::java::util::TimerTask* task, int64_t time, int64_t period);
	virtual void schedule(::java::util::TimerTask* task, int64_t delay);
	virtual void schedule(::java::util::TimerTask* task, ::java::util::Date* time);
	virtual void schedule(::java::util::TimerTask* task, int64_t delay, int64_t period);
	virtual void schedule(::java::util::TimerTask* task, ::java::util::Date* firstTime, int64_t period);
	virtual void scheduleAtFixedRate(::java::util::TimerTask* task, int64_t delay, int64_t period);
	virtual void scheduleAtFixedRate(::java::util::TimerTask* task, ::java::util::Date* firstTime, int64_t period);
	static int32_t serialNumber();
	::java::util::TaskQueue* queue = nullptr;
	::java::util::TimerThread* thread = nullptr;
	::java::lang::ref::Cleaner$Cleanable* cleanup = nullptr;
	static ::java::util::concurrent::atomic::AtomicInteger* nextSerialNumber;
};

	} // util
} // java

#endif // _java_util_Timer_h_