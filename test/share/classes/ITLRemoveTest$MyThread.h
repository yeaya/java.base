#ifndef _ITLRemoveTest$MyThread_h_
#define _ITLRemoveTest$MyThread_h_
//$ class ITLRemoveTest$MyThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class ITLRemoveTest$MyThread : public ::java::lang::Thread {
	$class(ITLRemoveTest$MyThread, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	ITLRemoveTest$MyThread();
	void init$();
	virtual void run() override;
};

#endif // _ITLRemoveTest$MyThread_h_