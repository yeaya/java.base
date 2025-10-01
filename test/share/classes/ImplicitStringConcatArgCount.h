#ifndef _ImplicitStringConcatArgCount_h_
#define _ImplicitStringConcatArgCount_h_
//$ class ImplicitStringConcatArgCount
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export ImplicitStringConcatArgCount : public ::java::lang::Object {
	$class(ImplicitStringConcatArgCount, 0, ::java::lang::Object)
public:
	ImplicitStringConcatArgCount();
	void init$();
	static void main($StringArray* args);
	static void test($String* expected, $String* actual);
	static $String* s;
	static $String* s1;
	static $String* s2;
	static int32_t i;
};

#endif // _ImplicitStringConcatArgCount_h_