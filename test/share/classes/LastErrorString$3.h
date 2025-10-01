#ifndef _LastErrorString$3_h_
#define _LastErrorString$3_h_
//$ class LastErrorString$3
//$ extends LastErrorString$Test

#include <LastErrorString$Test.h>

class LastErrorString$3 : public ::LastErrorString$Test {
	$class(LastErrorString$3, $NO_CLASS_INIT, ::LastErrorString$Test)
public:
	LastErrorString$3();
	void init$($String* name);
	virtual void run() override;
};

#endif // _LastErrorString$3_h_