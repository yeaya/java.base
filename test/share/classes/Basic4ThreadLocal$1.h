#ifndef _Basic4ThreadLocal$1_h_
#define _Basic4ThreadLocal$1_h_
//$ class Basic4ThreadLocal$1
//$ extends java.lang.ThreadLocal

#include <java/lang/ThreadLocal.h>

class Basic4ThreadLocal$1 : public ::java::lang::ThreadLocal {
	$class(Basic4ThreadLocal$1, $NO_CLASS_INIT, ::java::lang::ThreadLocal)
public:
	Basic4ThreadLocal$1();
	void init$();
	virtual $Object* initialValue() override;
	int32_t i = 0;
};

#endif // _Basic4ThreadLocal$1_h_