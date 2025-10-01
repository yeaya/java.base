#ifndef _LastErrorString$20_h_
#define _LastErrorString$20_h_
//$ class LastErrorString$20
//$ extends LastErrorString$ReadOnlyRAFTest

#include <LastErrorString$ReadOnlyRAFTest.h>

class LastErrorString$20 : public ::LastErrorString$ReadOnlyRAFTest {
	$class(LastErrorString$20, $NO_CLASS_INIT, ::LastErrorString$ReadOnlyRAFTest)
public:
	LastErrorString$20();
	void init$($String* name);
	virtual void run() override;
};

#endif // _LastErrorString$20_h_