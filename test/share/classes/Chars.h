#ifndef _Chars_h_
#define _Chars_h_
//$ class Chars
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Chars : public ::java::lang::Object {
	$class(Chars, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Chars();
	void init$();
	static void main($StringArray* args);
	static void testCPs($chars* cc, $ints* expected);
	static void testChars($chars* cc, $ints* expected);
};

#endif // _Chars_h_