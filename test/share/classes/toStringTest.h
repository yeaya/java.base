#ifndef _toStringTest_h_
#define _toStringTest_h_
//$ class toStringTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export toStringTest : public ::java::lang::Object {
	$class(toStringTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	toStringTest();
	void init$();
	static void main($StringArray* argv);
	static void testString(int32_t test, $String* expected);
};

#endif // _toStringTest_h_