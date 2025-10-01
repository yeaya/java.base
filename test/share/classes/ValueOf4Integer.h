#ifndef _ValueOf4Integer_h_
#define _ValueOf4Integer_h_
//$ class ValueOf4Integer
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TEST_HIGH")
#undef TEST_HIGH
#pragma push_macro("TEST_LOW")
#undef TEST_LOW

class $export ValueOf4Integer : public ::java::lang::Object {
	$class(ValueOf4Integer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ValueOf4Integer();
	void init$();
	static void main($StringArray* args);
	static const int32_t TEST_LOW = (-1024);
	static const int32_t TEST_HIGH = 24576;
};

#pragma pop_macro("TEST_HIGH")
#pragma pop_macro("TEST_LOW")

#endif // _ValueOf4Integer_h_