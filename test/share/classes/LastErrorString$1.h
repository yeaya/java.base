#ifndef _LastErrorString$1_h_
#define _LastErrorString$1_h_
//$ class LastErrorString$1
//$ extends LastErrorString$Test

#include <LastErrorString$Test.h>

class LastErrorString$1 : public ::LastErrorString$Test {
	$class(LastErrorString$1, $NO_CLASS_INIT, ::LastErrorString$Test)
public:
	LastErrorString$1();
	void init$($String* name);
	virtual void run() override;
};

#endif // _LastErrorString$1_h_