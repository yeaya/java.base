#ifndef _HoldsLock$LockThread_h_
#define _HoldsLock$LockThread_h_
//$ class HoldsLock$LockThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class $export HoldsLock$LockThread : public ::java::lang::Thread {
	$class(HoldsLock$LockThread, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	HoldsLock$LockThread();
	void init$();
	virtual void run() override;
};

#endif // _HoldsLock$LockThread_h_