#ifndef _ThreadId$1_h_
#define _ThreadId$1_h_
//$ class ThreadId$1
//$ extends java.lang.ThreadLocal

#include <java/lang/ThreadLocal.h>

class ThreadId$1 : public ::java::lang::ThreadLocal {
	$class(ThreadId$1, $NO_CLASS_INIT, ::java::lang::ThreadLocal)
public:
	ThreadId$1();
	void init$();
	virtual $Object* initialValue() override;
};

#endif // _ThreadId$1_h_