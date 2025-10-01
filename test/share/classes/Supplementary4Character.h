#ifndef _Supplementary4Character_h_
#define _Supplementary4Character_h_
//$ class Supplementary4Character
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MAX_SUPPLEMENTARY")
#undef MAX_SUPPLEMENTARY
#pragma push_macro("MIN_CODE_POINT")
#undef MIN_CODE_POINT
#pragma push_macro("MAX_LOW")
#undef MAX_LOW
#pragma push_macro("MIN_HIGH")
#undef MIN_HIGH
#pragma push_macro("MAX_HIGH")
#undef MAX_HIGH
#pragma push_macro("MIN_LOW")
#undef MIN_LOW
#pragma push_macro("MIN_SUPPLEMENTARY")
#undef MIN_SUPPLEMENTARY

namespace java {
	namespace lang {
		class CharSequence;
	}
}

class $export Supplementary4Character : public ::java::lang::Object {
	$class(Supplementary4Character, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Supplementary4Character();
	void init$();
	static void callCodePoint(bool isAt, ::java::lang::CharSequence* cs, int32_t index, $Class* expectedException);
	static void callCodePoint(bool isAt, $chars* a, int32_t index, $Class* expectedException);
	static void callCodePoint(bool isAt, $chars* a, int32_t index, int32_t limit, $Class* expectedException);
	static void callCodePointCount(Object$* data, int32_t beginIndex, int32_t endIndex, $Class* expectedException);
	static void callOffsetByCodePoints(::java::lang::CharSequence* seq, int32_t index, int32_t offset, $Class* expectedException);
	static void callOffsetByCodePoints($chars* a, int32_t start, int32_t count, int32_t index, int32_t offset, $Class* expectedException);
	static void callToChars1(int32_t codePoint, $Class* expectedException);
	static void callToChars3(int32_t codePoint, $chars* dst, int32_t index, $Class* expectedException);
	static void callToString(int32_t codePoint, $Class* expectedException);
	static void checkCodePointCount(Object$* data, int32_t n, int32_t expected);
	static void checkNewIndex(Object$* data, int32_t offset, int32_t result, int32_t expected);
	static int32_t codePointCount(::java::lang::CharSequence* seq);
	static void constantError($String* name, int32_t value, int32_t expectedValue);
	static $String* getType(Object$* data);
	static void main($StringArray* args);
	static void test00();
	static int32_t test01($chars* cu);
	static void test02(::java::lang::CharSequence* cs);
	static void test03($chars* a);
	static void test04($String* str);
	static void test05($String* str);
	static void test06();
	static void testCodePoint($String* str, $ints* codepoints);
	static void testConstants();
	static void testExceptions00();
	static void testExceptions01(::java::lang::CharSequence* cs);
	static void testExceptions02($chars* a);
	static void testUnpaired();
	static $String* toHexString(int32_t c);
	static $String* toHexString($String* name, $chars* a);
	static const char16_t MIN_HIGH = ((char16_t)55296);
	static const char16_t MAX_HIGH = ((char16_t)56319);
	static const char16_t MIN_LOW = 56320; // MAX_HIGH + 1
	static const char16_t MAX_LOW = ((char16_t)57343);
	static const int32_t MIN_CODE_POINT = 0;
	static const int32_t MIN_SUPPLEMENTARY = 0x00010000;
	static const int32_t MAX_SUPPLEMENTARY = 0x0010FFFF;
	static const bool At = true;
	static const bool Before = false;
};

#pragma pop_macro("MAX_SUPPLEMENTARY")
#pragma pop_macro("MIN_CODE_POINT")
#pragma pop_macro("MAX_LOW")
#pragma pop_macro("MIN_HIGH")
#pragma pop_macro("MAX_HIGH")
#pragma pop_macro("MIN_LOW")
#pragma pop_macro("MIN_SUPPLEMENTARY")

#endif // _Supplementary4Character_h_