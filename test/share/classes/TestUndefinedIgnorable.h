#ifndef _TestUndefinedIgnorable_h_
#define _TestUndefinedIgnorable_h_
//$ class TestUndefinedIgnorable
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export TestUndefinedIgnorable : public ::java::lang::Object {
	$class(TestUndefinedIgnorable, 0, ::java::lang::Object)
public:
	TestUndefinedIgnorable();
	void init$();
	static void main($StringArray* args);
	static int32_t endValue;
};

#endif // _TestUndefinedIgnorable_h_