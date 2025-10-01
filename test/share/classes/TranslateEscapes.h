#ifndef _TranslateEscapes_h_
#define _TranslateEscapes_h_
//$ class TranslateEscapes
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export TranslateEscapes : public ::java::lang::Object {
	$class(TranslateEscapes, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TranslateEscapes();
	void init$();
	static void exceptionThrown($String* string);
	static void main($StringArray* arg);
	static void test1();
	static void test2();
	static void test3();
	static void test4();
	static void verifyEscape($String* string, char16_t ch);
	static void verifyLineTerminator($String* string);
	static void verifyOctalEscape($String* string, int32_t octal);
};

#endif // _TranslateEscapes_h_