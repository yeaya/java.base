#ifndef _NullQueue$1_h_
#define _NullQueue$1_h_
//$ class NullQueue$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class NullQueue$1 : public ::java::lang::Runnable {
	$class(NullQueue$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	NullQueue$1();
	void init$();
	virtual void run() override;
};

#endif // _NullQueue$1_h_