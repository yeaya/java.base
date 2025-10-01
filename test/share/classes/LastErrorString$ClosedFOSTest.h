#ifndef _LastErrorString$ClosedFOSTest_h_
#define _LastErrorString$ClosedFOSTest_h_
//$ class LastErrorString$ClosedFOSTest
//$ extends LastErrorString$Test

#include <LastErrorString$Test.h>

namespace java {
	namespace io {
		class FileOutputStream;
	}
}

class $export LastErrorString$ClosedFOSTest : public ::LastErrorString$Test {
	$class(LastErrorString$ClosedFOSTest, $NO_CLASS_INIT, ::LastErrorString$Test)
public:
	LastErrorString$ClosedFOSTest();
	void init$($String* name);
	virtual void go() override;
	::java::io::FileOutputStream* out = nullptr;
};

#endif // _LastErrorString$ClosedFOSTest_h_