#ifndef _ImmutableLocal$1_h_
#define _ImmutableLocal$1_h_
//$ class ImmutableLocal$1
//$ extends ImmutableLocal$ImmutableThreadLocal

#include <ImmutableLocal$ImmutableThreadLocal.h>

class ImmutableLocal$1 : public ::ImmutableLocal$ImmutableThreadLocal {
	$class(ImmutableLocal$1, $NO_CLASS_INIT, ::ImmutableLocal$ImmutableThreadLocal)
public:
	ImmutableLocal$1();
	void init$();
	virtual $Object* initialValue() override;
};

#endif // _ImmutableLocal$1_h_