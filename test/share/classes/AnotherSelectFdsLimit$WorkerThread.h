#ifndef _AnotherSelectFdsLimit$WorkerThread_h_
#define _AnotherSelectFdsLimit$WorkerThread_h_
//$ class AnotherSelectFdsLimit$WorkerThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class $export AnotherSelectFdsLimit$WorkerThread : public ::java::lang::Thread {
	$class(AnotherSelectFdsLimit$WorkerThread, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	AnotherSelectFdsLimit$WorkerThread();
	void init$();
	virtual void run() override;
};

#endif // _AnotherSelectFdsLimit$WorkerThread_h_