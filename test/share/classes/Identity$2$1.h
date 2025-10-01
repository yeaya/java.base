#ifndef _Identity$2$1_h_
#define _Identity$2$1_h_
//$ class Identity$2$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class Identity$2;

class Identity$2$1 : public ::java::lang::Runnable {
	$class(Identity$2$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Identity$2$1();
	void init$(::Identity$2* this$0, ::java::lang::Runnable* val$r);
	virtual void run() override;
	::Identity$2* this$0 = nullptr;
	::java::lang::Runnable* val$r = nullptr;
};

#endif // _Identity$2$1_h_