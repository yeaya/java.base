#ifndef _TestValueExact_h_
#define _TestValueExact_h_
//$ class TestValueExact
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export TestValueExact : public ::java::lang::Object {
	$class(TestValueExact, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestValueExact();
	void init$();
	static void main($StringArray* args);
	static int32_t testByteValueExact();
	static int32_t testIntValueExact();
	static int32_t testLongValueExact();
	static int32_t testShortValueExact();
};

#endif // _TestValueExact_h_