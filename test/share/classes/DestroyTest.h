#ifndef _DestroyTest_h_
#define _DestroyTest_h_
//$ class DestroyTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

class ProcessTest;

class $export DestroyTest : public ::java::lang::Object {
	$class(DestroyTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DestroyTest();
	void init$();
	static ::ProcessTest* getTest();
	static void main($StringArray* args);
};

#endif // _DestroyTest_h_