#ifndef _LastErrorString$4_h_
#define _LastErrorString$4_h_
//$ class LastErrorString$4
//$ extends LastErrorString$Test

#include <LastErrorString$Test.h>

class LastErrorString$4 : public ::LastErrorString$Test {
	$class(LastErrorString$4, $NO_CLASS_INIT, ::LastErrorString$Test)
public:
	LastErrorString$4();
	void init$($String* name);
	virtual void run() override;
};

#endif // _LastErrorString$4_h_