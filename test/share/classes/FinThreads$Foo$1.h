#ifndef _FinThreads$Foo$1_h_
#define _FinThreads$Foo$1_h_
//$ class FinThreads$Foo$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class FinThreads$Foo$1 : public ::java::lang::Runnable {
	$class(FinThreads$Foo$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	FinThreads$Foo$1();
	void init$(bool val$catchFinalizer);
	virtual void run() override;
	bool val$catchFinalizer = false;
};

#endif // _FinThreads$Foo$1_h_