#ifndef _StartOOMTest$SleepRunnable_h_
#define _StartOOMTest$SleepRunnable_h_
//$ class StartOOMTest$SleepRunnable
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class $export StartOOMTest$SleepRunnable : public ::java::lang::Runnable {
	$class(StartOOMTest$SleepRunnable, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	StartOOMTest$SleepRunnable();
	void init$();
	virtual void run() override;
};

#endif // _StartOOMTest$SleepRunnable_h_