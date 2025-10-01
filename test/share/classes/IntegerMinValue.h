#ifndef _IntegerMinValue_h_
#define _IntegerMinValue_h_
//$ class IntegerMinValue
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export IntegerMinValue : public ::java::lang::Object {
	$class(IntegerMinValue, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IntegerMinValue();
	void init$();
	static void main($StringArray* strArr);
	virtual void test();
};

#endif // _IntegerMinValue_h_