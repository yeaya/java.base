#ifndef _MadThread_h_
#define _MadThread_h_
//$ class MadThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace lang {
		class ThreadGroup;
	}
}

class MadThread : public ::java::lang::Thread {
	$class(MadThread, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	MadThread();
	void init$(::java::lang::ThreadGroup* tg, $String* name);
	virtual void run() override;
	$String* name = nullptr;
};

#endif // _MadThread_h_