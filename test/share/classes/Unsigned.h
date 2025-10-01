#ifndef _Unsigned_h_
#define _Unsigned_h_
//$ class Unsigned
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TWO")
#undef TWO

namespace java {
	namespace math {
		class BigInteger;
	}
}

class $export Unsigned : public ::java::lang::Object {
	$class(Unsigned, 0, ::java::lang::Object)
public:
	Unsigned();
	void init$();
	static int32_t compUnsigned(int64_t x, int64_t y);
	static void main($StringArray* args);
	static int32_t testByteToUnsignedLong();
	static int32_t testDivideAndRemainder();
	static int32_t testParseUnsignedLong();
	static int32_t testRoundtrip();
	static int32_t testShortToUnsignedLong();
	static int32_t testToStringUnsigned();
	static int32_t testUnsignedCompare();
	static int32_t testUnsignedOverflow($String* s, int32_t radix, bool exception);
	static ::java::math::BigInteger* toUnsignedBigInt(int64_t x);
	static ::java::math::BigInteger* TWO;
};

#pragma pop_macro("TWO")

#endif // _Unsigned_h_