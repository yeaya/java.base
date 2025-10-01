#ifndef _java_lang_Math2_DivModTests_h_
#define _java_lang_Math2_DivModTests_h_
//$ class java.lang.Math2.DivModTests
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace Math2 {

class $export DivModTests : public ::java::lang::Object {
	$class(DivModTests, 0, ::java::lang::Object)
public:
	DivModTests();
	void init$();
	static $Object* doFloorDiv(int32_t x, int32_t y);
	static $Object* doFloorDiv(int64_t x, int32_t y);
	static $Object* doFloorDiv(int64_t x, int64_t y);
	static $Object* doFloorMod(int32_t x, int32_t y);
	static $Object* doFloorMod(int64_t x, int32_t y);
	static $Object* doFloorMod(int64_t x, int64_t y);
	static $Object* doStrictFloorDiv(int32_t x, int32_t y);
	static $Object* doStrictFloorDiv(int64_t x, int32_t y);
	static $Object* doStrictFloorDiv(int64_t x, int64_t y);
	static $Object* doStrictFloorMod(int32_t x, int32_t y);
	static $Object* doStrictFloorMod(int64_t x, int32_t y);
	static $Object* doStrictFloorMod(int64_t x, int64_t y);
	static void fail($String* message, $ObjectArray* args);
	static void main($StringArray* args);
	static bool resultEquals(Object$* result, Object$* expected);
	static void testIntFloorDiv(int32_t x, int32_t y, Object$* expected);
	static void testIntFloorDivMod();
	static void testIntFloorDivMod(int32_t x, int32_t y, Object$* divExpected, Object$* modExpected);
	static void testIntFloorMod(int32_t x, int32_t y, Object$* expected);
	static void testLongFloorDiv(int64_t x, int64_t y, Object$* expected);
	static void testLongFloorDivMod();
	static void testLongFloorDivMod(int64_t x, int64_t y, Object$* divExpected, Object$* modExpected);
	static void testLongFloorMod(int64_t x, int64_t y, Object$* expected);
	static void testLongIntFloorDiv(int64_t x, int32_t y, Object$* expected);
	static void testLongIntFloorDivMod();
	static void testLongIntFloorDivMod(int64_t x, int32_t y, Object$* divExpected, Object$* modExpected);
	static void testLongIntFloorMod(int64_t x, int32_t y, Object$* expected);
	static int32_t errors;
};

		} // Math2
	} // lang
} // java

#endif // _java_lang_Math2_DivModTests_h_