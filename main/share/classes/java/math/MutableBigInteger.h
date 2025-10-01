#ifndef _java_math_MutableBigInteger_h_
#define _java_math_MutableBigInteger_h_
//$ class java.math.MutableBigInteger
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("KNUTH_POW2_THRESH_LEN")
#undef KNUTH_POW2_THRESH_LEN
#pragma push_macro("ONE")
#undef ONE
#pragma push_macro("KNUTH_POW2_THRESH_ZEROS")
#undef KNUTH_POW2_THRESH_ZEROS

namespace java {
	namespace math {
		class BigDecimal;
		class BigInteger;
	}
}

namespace java {
	namespace math {

class MutableBigInteger : public ::java::lang::Object {
	$class(MutableBigInteger, 0, ::java::lang::Object)
public:
	MutableBigInteger();
	void init$();
	void init$(int32_t val);
	void init$($ints* val);
	void init$(::java::math::BigInteger* b);
	void init$(::java::math::MutableBigInteger* val);
	virtual void add(::java::math::MutableBigInteger* addend);
	virtual void addDisjoint(::java::math::MutableBigInteger* addend, int32_t n);
	virtual void addLower(::java::math::MutableBigInteger* addend, int32_t n);
	virtual void addShifted(::java::math::MutableBigInteger* addend, int32_t n);
	::java::math::MutableBigInteger* binaryGCD(::java::math::MutableBigInteger* v);
	static int32_t binaryGcd(int32_t a, int32_t b);
	virtual int64_t bitLength();
	virtual void clear();
	int32_t compare(::java::math::MutableBigInteger* b);
	int32_t compareHalf(::java::math::MutableBigInteger* b);
	int32_t compareShifted(::java::math::MutableBigInteger* b, int32_t ints);
	static void copyAndShift($ints* src, int32_t srcFrom, int32_t srcLen, $ints* dst, int32_t dstFrom, int32_t shift);
	virtual void copyValue(::java::math::MutableBigInteger* src);
	virtual void copyValue($ints* val);
	int32_t difference(::java::math::MutableBigInteger* b);
	static int64_t divWord(int64_t n, int32_t d);
	int32_t divadd($ints* a, $ints* result, int32_t offset);
	int32_t divaddLong(int32_t dh, int32_t dl, $ints* result, int32_t offset);
	virtual ::java::math::MutableBigInteger* divide(::java::math::MutableBigInteger* b, ::java::math::MutableBigInteger* quotient);
	virtual ::java::math::MutableBigInteger* divide(::java::math::MutableBigInteger* b, ::java::math::MutableBigInteger* quotient, bool needRemainder);
	virtual int64_t divide(int64_t v, ::java::math::MutableBigInteger* quotient);
	::java::math::MutableBigInteger* divide2n1n(::java::math::MutableBigInteger* b, ::java::math::MutableBigInteger* quotient);
	::java::math::MutableBigInteger* divide3n2n(::java::math::MutableBigInteger* b, ::java::math::MutableBigInteger* quotient);
	virtual ::java::math::MutableBigInteger* divideAndRemainderBurnikelZiegler(::java::math::MutableBigInteger* b, ::java::math::MutableBigInteger* quotient);
	virtual ::java::math::MutableBigInteger* divideKnuth(::java::math::MutableBigInteger* b, ::java::math::MutableBigInteger* quotient);
	virtual ::java::math::MutableBigInteger* divideKnuth(::java::math::MutableBigInteger* b, ::java::math::MutableBigInteger* quotient, bool needRemainder);
	::java::math::MutableBigInteger* divideLongMagnitude(int64_t ldivisor, ::java::math::MutableBigInteger* quotient);
	::java::math::MutableBigInteger* divideMagnitude(::java::math::MutableBigInteger* div, ::java::math::MutableBigInteger* quotient, bool needRemainder);
	virtual int32_t divideOneWord(int32_t divisor, ::java::math::MutableBigInteger* quotient);
	void ensureCapacity(int32_t len);
	virtual ::java::math::MutableBigInteger* euclidModInverse(int32_t k);
	static ::java::math::MutableBigInteger* fixup(::java::math::MutableBigInteger* c, ::java::math::MutableBigInteger* p, int32_t k);
	::java::math::MutableBigInteger* getBlock(int32_t index, int32_t numBlocks, int32_t blockLength);
	int32_t getInt(int32_t index);
	int64_t getLong(int32_t index);
	::java::math::BigInteger* getLower(int32_t n);
	int32_t getLowestSetBit();
	$ints* getMagnitudeArray();
	virtual ::java::math::MutableBigInteger* hybridGCD(::java::math::MutableBigInteger* b);
	static int32_t inverseMod32(int32_t val);
	static int64_t inverseMod64(int64_t val);
	virtual bool isEven();
	virtual bool isNormal();
	virtual bool isOdd();
	virtual bool isOne();
	virtual bool isZero();
	void keepLower(int32_t n);
	virtual void leftShift(int32_t n);
	::java::math::MutableBigInteger* modInverse(::java::math::MutableBigInteger* mod);
	static ::java::math::MutableBigInteger* modInverseBP2(::java::math::MutableBigInteger* mod, int32_t k);
	virtual ::java::math::MutableBigInteger* modInverseMP2(int32_t k);
	virtual void mul(int32_t y, ::java::math::MutableBigInteger* z);
	int32_t mulsub($ints* q, $ints* a, int32_t x, int32_t len, int32_t offset);
	int32_t mulsubBorrow($ints* q, $ints* a, int32_t x, int32_t len, int32_t offset);
	int32_t mulsubLong($ints* q, int32_t dh, int32_t dl, int32_t x, int32_t offset);
	virtual void multiply(::java::math::MutableBigInteger* y, ::java::math::MutableBigInteger* z);
	virtual ::java::math::MutableBigInteger* mutableModInverse(::java::math::MutableBigInteger* p);
	void normalize();
	void ones(int32_t n);
	void primitiveLeftShift(int32_t n);
	void primitiveRightShift(int32_t n);
	virtual void reset();
	virtual void rightShift(int32_t n);
	virtual void safeLeftShift(int32_t n);
	virtual void safeRightShift(int32_t n);
	virtual void setInt(int32_t index, int32_t val);
	virtual void setValue($ints* val, int32_t length);
	virtual ::java::math::MutableBigInteger* sqrt();
	virtual int32_t subtract(::java::math::MutableBigInteger* b);
	virtual ::java::math::BigDecimal* toBigDecimal(int32_t sign, int32_t scale);
	virtual ::java::math::BigInteger* toBigInteger(int32_t sign);
	virtual ::java::math::BigInteger* toBigInteger();
	virtual int64_t toCompactValue(int32_t sign);
	virtual $ints* toIntArray();
	int64_t toLong();
	virtual $String* toString() override;
	bool unsignedLongCompare(int64_t one, int64_t two);
	static bool $assertionsDisabled;
	$ints* value = nullptr;
	int32_t intLen = 0;
	int32_t offset = 0;
	static ::java::math::MutableBigInteger* ONE;
	static const int32_t KNUTH_POW2_THRESH_LEN = 6;
	static const int32_t KNUTH_POW2_THRESH_ZEROS = 3;
};

	} // math
} // java

#pragma pop_macro("KNUTH_POW2_THRESH_LEN")
#pragma pop_macro("ONE")
#pragma pop_macro("KNUTH_POW2_THRESH_ZEROS")

#endif // _java_math_MutableBigInteger_h_