#ifndef _LastErrorString$ClosedFISTest_h_
#define _LastErrorString$ClosedFISTest_h_
//$ class LastErrorString$ClosedFISTest
//$ extends LastErrorString$Test

#include <LastErrorString$Test.h>

namespace java {
	namespace io {
		class FileInputStream;
	}
}

class $export LastErrorString$ClosedFISTest : public ::LastErrorString$Test {
	$class(LastErrorString$ClosedFISTest, $NO_CLASS_INIT, ::LastErrorString$Test)
public:
	LastErrorString$ClosedFISTest();
	void init$($String* name);
	virtual void go() override;
	::java::io::FileInputStream* in = nullptr;
};

#endif // _LastErrorString$ClosedFISTest_h_