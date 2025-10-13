#ifndef _Supplementary4String_h_
#define _Supplementary4String_h_
//$ class Supplementary4String
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("FIRST")
#undef FIRST
#pragma push_macro("LAST")
#undef LAST

class $export Supplementary4String : public ::java::lang::Object {
	$class(Supplementary4String, 0, ::java::lang::Object)
public:
	Supplementary4String();
	void init$();
	static void check(bool err, $String* msg);
	static void check(bool err, $String* s, int32_t got, int32_t expected);
	static void main($StringArray* args);
	static void test1();
	static void test10();
	static void test2();
	static void test3();
	static void test4();
	static void test5();
	static void test6();
	static void test7();
	static void test8();
	static void test9();
	static void testCodePoint(bool isAt, $String* s, int32_t index, int32_t expected);
	static void testCodePoint(bool isAt, $String* s, int32_t index);
	static void testCodePointCount($String* str, int32_t beginIndex, int32_t endIndex, $Class* expectedException);
	static void testIndexOf($String* s, int32_t c, int32_t expected);
	static int32_t testIndexOf($String* s, int32_t fromIndex, int32_t c, int32_t expected);
	static void testIndexOf2($String* s, int32_t c, int32_t expected);
	static void testLastIndexOf($String* s, int32_t c, int32_t expected);
	static int32_t testLastIndexOf($String* s, int32_t fromIndex, int32_t c, int32_t expected);
	static void testLastIndexOf2($String* s, int32_t c, int32_t expected);
	static void testNewString($ints* codePoints, int32_t offset, int32_t count, $Class* expectedException);
	static void testOffsetByCodePoints($String* str, int32_t index, int32_t offset, $Class* expectedException);
	static $String* toHexString(int32_t c);
	static $StringArray* input;
	static $Array<int32_t, 2>* golden1;
	static $Array<int32_t, 2>* golden2;
	static $Array<int32_t, 2>* golden3;
	static const bool At = true;
	static const bool Before = false;
	static const bool FIRST = true;
	static const bool LAST = false;
};

#pragma pop_macro("FIRST")
#pragma pop_macro("LAST")

#endif // _Supplementary4String_h_