#ifndef _Test6987555_h_
#define _Test6987555_h_
//$ class Test6987555
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CLASS")
#undef CLASS
#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("NAME")
#undef NAME

class $export Test6987555 : public ::java::lang::Object {
	$class(Test6987555, 0, ::java::lang::Object)
public:
	Test6987555();
	void init$();
	static void doboolean(bool x);
	static void dobyte(int8_t x);
	static void dochar(char16_t x);
	static void doint(int32_t x);
	static void doshort(int16_t x);
	static bool foo(bool i);
	static int8_t foo(int8_t i);
	static char16_t foo(char16_t i);
	static int16_t foo(int16_t i);
	static int32_t foo(int32_t i);
	static void main($StringArray* args);
	static void testboolean();
	static void testbyte();
	static void testchar();
	static void testint();
	static void testshort();
	static bool $assertionsDisabled;
	static $Class* CLASS;
	static $String* NAME;
	static const bool DEBUG = false;
};

#pragma pop_macro("CLASS")
#pragma pop_macro("DEBUG")
#pragma pop_macro("NAME")

#endif // _Test6987555_h_