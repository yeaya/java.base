#ifndef _LastErrorString$ReadOnlyRAFTest_h_
#define _LastErrorString$ReadOnlyRAFTest_h_
//$ class LastErrorString$ReadOnlyRAFTest
//$ extends LastErrorString$Test

#include <LastErrorString$Test.h>

namespace java {
	namespace io {
		class RandomAccessFile;
	}
}

class $export LastErrorString$ReadOnlyRAFTest : public ::LastErrorString$Test {
	$class(LastErrorString$ReadOnlyRAFTest, $NO_CLASS_INIT, ::LastErrorString$Test)
public:
	LastErrorString$ReadOnlyRAFTest();
	void init$($String* name);
	virtual void go() override;
	::java::io::RandomAccessFile* raf = nullptr;
};

#endif // _LastErrorString$ReadOnlyRAFTest_h_