#ifndef _LastErrorString$9_h_
#define _LastErrorString$9_h_
//$ class LastErrorString$9
//$ extends LastErrorString$Test

#include <LastErrorString$Test.h>

class LastErrorString$9 : public ::LastErrorString$Test {
	$class(LastErrorString$9, $NO_CLASS_INIT, ::LastErrorString$Test)
public:
	LastErrorString$9();
	void init$($String* name);
	virtual void run() override;
};

#endif // _LastErrorString$9_h_