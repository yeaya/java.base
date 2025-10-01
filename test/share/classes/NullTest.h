#ifndef _NullTest_h_
#define _NullTest_h_
//$ class NullTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export NullTest : public ::java::lang::Object {
	$class(NullTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NullTest();
	void init$();
	static void main($StringArray* args);
};

#endif // _NullTest_h_