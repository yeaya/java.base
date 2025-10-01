#ifndef _WindowsTest_h_
#define _WindowsTest_h_
//$ class WindowsTest
//$ extends ProcessTest

#include <ProcessTest.h>

class WindowsTest : public ::ProcessTest {
	$class(WindowsTest, $NO_CLASS_INIT, ::ProcessTest)
public:
	WindowsTest();
	void init$();
};

#endif // _WindowsTest_h_