#ifndef _GetUnsafeTest_h_
#define _GetUnsafeTest_h_
//$ class GetUnsafeTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NAME")
#undef NAME

class $export GetUnsafeTest : public ::java::lang::Object {
	$class(GetUnsafeTest, 0, ::java::lang::Object)
public:
	GetUnsafeTest();
	void init$();
	static void fail();
	static void main($StringArray* args);
	static $String* NAME;
	static bool isTestFailed;
};

#pragma pop_macro("NAME")

#endif // _GetUnsafeTest_h_