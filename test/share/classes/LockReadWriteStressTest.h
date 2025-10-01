#ifndef _LockReadWriteStressTest_h_
#define _LockReadWriteStressTest_h_
//$ class LockReadWriteStressTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export LockReadWriteStressTest : public ::java::lang::Object {
	$class(LockReadWriteStressTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LockReadWriteStressTest();
	void init$();
	static void main($StringArray* args);
};

#endif // _LockReadWriteStressTest_h_