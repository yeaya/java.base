#ifndef _GenericStringTest_h_
#define _GenericStringTest_h_
//$ class GenericStringTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export GenericStringTest : public ::java::lang::Object {
	$class(GenericStringTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GenericStringTest();
	void init$();
	static int32_t checkForFailure($String* expected, $String* actual);
	static void main($StringArray* argv);
};

#endif // _GenericStringTest_h_