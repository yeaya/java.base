#ifndef _Basic4InheritableThreadLocal$1_h_
#define _Basic4InheritableThreadLocal$1_h_
//$ class Basic4InheritableThreadLocal$1
//$ extends java.lang.InheritableThreadLocal

#include <java/lang/InheritableThreadLocal.h>

class Basic4InheritableThreadLocal$1 : public ::java::lang::InheritableThreadLocal {
	$class(Basic4InheritableThreadLocal$1, $NO_CLASS_INIT, ::java::lang::InheritableThreadLocal)
public:
	Basic4InheritableThreadLocal$1();
	void init$();
	virtual $Object* childValue(Object$* parentValue) override;
	virtual $Object* initialValue() override;
};

#endif // _Basic4InheritableThreadLocal$1_h_