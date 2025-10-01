#ifndef _ImmutableLocal$ImmutableThreadLocal_h_
#define _ImmutableLocal$ImmutableThreadLocal_h_
//$ class ImmutableLocal$ImmutableThreadLocal
//$ extends java.lang.ThreadLocal

#include <java/lang/ThreadLocal.h>

class $export ImmutableLocal$ImmutableThreadLocal : public ::java::lang::ThreadLocal {
	$class(ImmutableLocal$ImmutableThreadLocal, $NO_CLASS_INIT, ::java::lang::ThreadLocal)
public:
	ImmutableLocal$ImmutableThreadLocal();
	void init$();
	virtual $Object* initialValue() override;
	virtual void set(Object$* value) override;
};

#endif // _ImmutableLocal$ImmutableThreadLocal_h_