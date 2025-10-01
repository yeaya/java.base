#ifndef _NullThreadName$1_h_
#define _NullThreadName$1_h_
//$ class NullThreadName$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class NullThreadName$1 : public ::java::lang::Runnable {
	$class(NullThreadName$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	NullThreadName$1();
	void init$();
	virtual void run() override;
};

#endif // _NullThreadName$1_h_