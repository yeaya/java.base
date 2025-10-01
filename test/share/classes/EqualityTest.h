#ifndef _EqualityTest_h_
#define _EqualityTest_h_
//$ class EqualityTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export EqualityTest : public ::java::lang::Object {
	$class(EqualityTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	EqualityTest();
	void init$();
	static void main($StringArray* args);
	static void testEquality(Object$* a, Object$* b, bool expected);
};

#endif // _EqualityTest_h_