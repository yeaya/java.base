#ifndef _ClassForNameTest_h_
#define _ClassForNameTest_h_
//$ class ClassForNameTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NAME")
#undef NAME

class $export ClassForNameTest : public ::java::lang::Object {
	$class(ClassForNameTest, 0, ::java::lang::Object)
public:
	ClassForNameTest();
	void init$();
	static void main($StringArray* args);
	static $String* NAME;
};

#pragma pop_macro("NAME")

#endif // _ClassForNameTest_h_