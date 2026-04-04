#ifndef _TestUndefinedMirrored_h_
#define _TestUndefinedMirrored_h_
//$ class TestUndefinedMirrored
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export TestUndefinedMirrored : public ::java::lang::Object {
	$class(TestUndefinedMirrored, 0, ::java::lang::Object)
public:
	TestUndefinedMirrored();
	static void clinit$(::java::lang::Class* clazz);
	void init$();
	static void main($StringArray* args);
	static int32_t endValue;
};

#endif // _TestUndefinedMirrored_h_