#ifndef _MainThreadTest_h_
#define _MainThreadTest_h_
//$ class MainThreadTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export MainThreadTest : public ::java::lang::Object {
	$class(MainThreadTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MainThreadTest();
	void init$();
	static void main($StringArray* args);
};

#endif // _MainThreadTest_h_