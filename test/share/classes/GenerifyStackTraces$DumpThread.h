#ifndef _GenerifyStackTraces$DumpThread_h_
#define _GenerifyStackTraces$DumpThread_h_
//$ class GenerifyStackTraces$DumpThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class $export GenerifyStackTraces$DumpThread : public ::java::lang::Thread {
	$class(GenerifyStackTraces$DumpThread, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	GenerifyStackTraces$DumpThread();
	void init$();
	virtual void run() override;
	virtual void shutdown();
	$volatile(bool) finished = false;
};

#endif // _GenerifyStackTraces$DumpThread_h_