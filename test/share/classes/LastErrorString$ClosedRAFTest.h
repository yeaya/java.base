#ifndef _LastErrorString$ClosedRAFTest_h_
#define _LastErrorString$ClosedRAFTest_h_
//$ class LastErrorString$ClosedRAFTest
//$ extends LastErrorString$Test

#include <LastErrorString$Test.h>

namespace java {
	namespace io {
		class RandomAccessFile;
	}
}

class $export LastErrorString$ClosedRAFTest : public ::LastErrorString$Test {
	$class(LastErrorString$ClosedRAFTest, $NO_CLASS_INIT, ::LastErrorString$Test)
public:
	LastErrorString$ClosedRAFTest();
	void init$($String* name);
	virtual void go() override;
	::java::io::RandomAccessFile* raf = nullptr;
};

#endif // _LastErrorString$ClosedRAFTest_h_