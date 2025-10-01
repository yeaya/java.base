#ifndef _Supplementary4StringBuffer_h_
#define _Supplementary4StringBuffer_h_
//$ class Supplementary4StringBuffer
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class StringBuffer;
	}
}

class $export Supplementary4StringBuffer : public ::java::lang::Object {
	$class(Supplementary4StringBuffer, 0, ::java::lang::Object)
public:
	Supplementary4StringBuffer();
	void init$();
	static void check(bool err, $String* msg);
	static void check(bool err, $String* s, int32_t got, int32_t expected);
	static void check(bool err, $String* s, ::java::lang::StringBuffer* got, $String* expected);
	static void main($StringArray* args);
	static void test1();
	static void test2();
	static void test3();
	static void test4();
	static void test5();
	static void test6();
	static void testAppendCodePoint(int32_t codePoint, $Class* expectedException);
	static void testCodePoint(bool isAt, ::java::lang::StringBuffer* sb, int32_t index, int32_t expected);
	static void testCodePoint(bool isAt, ::java::lang::StringBuffer* sb, int32_t index);
	static void testCodePointCount(::java::lang::StringBuffer* sb, int32_t beginIndex, int32_t endIndex, $Class* expectedException);
	static void testOffsetByCodePoints(::java::lang::StringBuffer* sb, int32_t index, int32_t offset, $Class* expectedException);
	static $String* toHexString(int32_t c);
	static $String* toHexString($String* s);
	static $StringArray* input;
	static $Array<int32_t, 2>* golden1;
	static $Array<int32_t, 2>* golden2;
	static $StringArray* golden3;
	static $Array<::java::lang::String, 2>* testdata1;
	static const bool At = true;
	static const bool Before = false;
};

#endif // _Supplementary4StringBuffer_h_