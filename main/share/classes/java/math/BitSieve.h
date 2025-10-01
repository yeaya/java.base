#ifndef _java_math_BitSieve_h_
#define _java_math_BitSieve_h_
//$ class java.math.BitSieve
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace util {
		class Random;
	}
}

namespace java {
	namespace math {

class BitSieve : public ::java::lang::Object {
	$class(BitSieve, 0, ::java::lang::Object)
public:
	BitSieve();
	void init$();
	void init$(::java::math::BigInteger* base, int32_t searchLen);
	static int64_t bit(int32_t bitIndex);
	bool get(int32_t bitIndex);
	virtual ::java::math::BigInteger* retrieve(::java::math::BigInteger* initValue, int32_t certainty, ::java::util::Random* random);
	void set(int32_t bitIndex);
	int32_t sieveSearch(int32_t limit, int32_t start);
	void sieveSingle(int32_t limit, int32_t start, int32_t step);
	static int32_t unitIndex(int32_t bitIndex);
	$longs* bits = nullptr;
	int32_t length = 0;
	static ::java::math::BitSieve* smallSieve;
};

	} // math
} // java

#endif // _java_math_BitSieve_h_