#ifndef _Latin1Digit_h_
#define _Latin1Digit_h_
//$ class Latin1Digit
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Latin1Digit : public ::java::lang::Object {
	$class(Latin1Digit, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Latin1Digit();
	void init$();
	static int32_t canonicalDigit(int32_t ch, int32_t radix);
	static void main($StringArray* args);
	static void test(int32_t ch, int32_t radix);
};

#endif // _Latin1Digit_h_