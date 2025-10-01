#ifndef _TestUndefinedNumeric_h_
#define _TestUndefinedNumeric_h_
//$ class TestUndefinedNumeric
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export TestUndefinedNumeric : public ::java::lang::Object {
	$class(TestUndefinedNumeric, 0, ::java::lang::Object)
public:
	TestUndefinedNumeric();
	void init$();
	static void main($StringArray* args);
	static int32_t endValue;
};

#endif // _TestUndefinedNumeric_h_