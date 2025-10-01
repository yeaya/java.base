#ifndef _java_lang_Math2_ExactArithTests_h_
#define _java_lang_Math2_ExactArithTests_h_
//$ class java.lang.Math2.ExactArithTests
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace java {
	namespace lang {
		namespace Math2 {

class $export ExactArithTests : public ::java::lang::Object {
	$class(ExactArithTests, 0, ::java::lang::Object)
public:
	ExactArithTests();
	void init$();
	static void checkResult($String* message, int64_t x, int64_t y, int64_t result, ::java::math::BigInteger* expected);
	static void fail($String* message);
	static bool inLongRange(::java::math::BigInteger* value);
	static void main($StringArray* args);
	static void testIntegerExact();
	static void testIntegerExact(int32_t x, int32_t y);
	static void testLongExact();
	static void testLongExact(int64_t x, int64_t y);
	static void testLongExactTwice(int64_t x, int64_t y);
	static void testLongIntExact();
	static void testLongIntExact(int64_t x, int32_t y);
	static int32_t errors;
};

		} // Math2
	} // lang
} // java

#endif // _java_lang_Math2_ExactArithTests_h_