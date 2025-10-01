#ifndef _SampleNest$1_h_
#define _SampleNest$1_h_
//$ class SampleNest$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class SampleNest;

class SampleNest$1 : public ::java::lang::Runnable {
	$class(SampleNest$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	SampleNest$1();
	void init$(::SampleNest* this$0);
	virtual void run() override;
	::SampleNest* this$0 = nullptr;
};

#endif // _SampleNest$1_h_