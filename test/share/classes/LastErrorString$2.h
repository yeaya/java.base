#ifndef _LastErrorString$2_h_
#define _LastErrorString$2_h_
//$ class LastErrorString$2
//$ extends LastErrorString$Test

#include <LastErrorString$Test.h>

class LastErrorString$2 : public ::LastErrorString$Test {
	$class(LastErrorString$2, $NO_CLASS_INIT, ::LastErrorString$Test)
public:
	LastErrorString$2();
	void init$($String* name);
	virtual void run() override;
};

#endif // _LastErrorString$2_h_