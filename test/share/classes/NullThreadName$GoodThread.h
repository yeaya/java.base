#ifndef _NullThreadName$GoodThread_h_
#define _NullThreadName$GoodThread_h_
//$ class NullThreadName$GoodThread
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class $export NullThreadName$GoodThread : public ::java::lang::Runnable {
	$class(NullThreadName$GoodThread, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	NullThreadName$GoodThread();
	void init$();
	virtual void run() override;
};

#endif // _NullThreadName$GoodThread_h_