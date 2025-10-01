#ifndef _Basic4ThreadLocal$2_h_
#define _Basic4ThreadLocal$2_h_
//$ class Basic4ThreadLocal$2
//$ extends java.lang.Thread

#include <java/lang/Array.h>
#include <java/lang/Thread.h>

class Basic4ThreadLocal$2 : public ::java::lang::Thread {
	$class(Basic4ThreadLocal$2, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	Basic4ThreadLocal$2();
	void init$($ints* val$x);
	virtual void run() override;
	$ints* val$x = nullptr;
};

#endif // _Basic4ThreadLocal$2_h_