#ifndef _Basic4InheritableThreadLocal$MyThread_h_
#define _Basic4InheritableThreadLocal$MyThread_h_
//$ class Basic4InheritableThreadLocal$MyThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class Basic4InheritableThreadLocal$MyThread : public ::java::lang::Thread {
	$class(Basic4InheritableThreadLocal$MyThread, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	Basic4InheritableThreadLocal$MyThread();
	void init$();
	virtual void run() override;
};

#endif // _Basic4InheritableThreadLocal$MyThread_h_