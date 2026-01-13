#ifndef _java_math_BigDecimal_h_
#define _java_math_BigDecimal_h_
//$ class java.math.BigDecimal
//$ extends java.lang.Number
//$ implements java.lang.Comparable

#include <java/lang/Array.h>
#include <java/lang/Comparable.h>
#include <java/lang/Number.h>

#pragma push_macro("BIG_TEN_POWERS_TABLE")
#undef BIG_TEN_POWERS_TABLE
#pragma push_macro("BIG_TEN_POWERS_TABLE_INITLEN")
#undef BIG_TEN_POWERS_TABLE_INITLEN
#pragma push_macro("BIG_TEN_POWERS_TABLE_MAX")
#undef BIG_TEN_POWERS_TABLE_MAX
#pragma push_macro("DIV_NUM_BASE")
#undef DIV_NUM_BASE
#pragma push_macro("DOUBLE_10_POW")
#undef DOUBLE_10_POW
#pragma push_macro("FLOAT_10_POW")
#undef FLOAT_10_POW
#pragma push_macro("HALF_LONG_MAX_VALUE")
#undef HALF_LONG_MAX_VALUE
#pragma push_macro("HALF_LONG_MIN_VALUE")
#undef HALF_LONG_MIN_VALUE
#pragma push_macro("INFLATED")
#undef INFLATED
#pragma push_macro("INFLATED_BIGINT")
#undef INFLATED_BIGINT
#pragma push_macro("LONGLONG_TEN_POWERS_TABLE")
#undef LONGLONG_TEN_POWERS_TABLE
#pragma push_macro("LONG_TEN_POWERS_TABLE")
#undef LONG_TEN_POWERS_TABLE
#pragma push_macro("MAX_COMPACT_DIGITS")
#undef MAX_COMPACT_DIGITS
#pragma push_macro("ONE")
#undef ONE
#pragma push_macro("ONE_HALF")
#undef ONE_HALF
#pragma push_macro("ONE_TENTH")
#undef ONE_TENTH
#pragma push_macro("ROUND_CEILING")
#undef ROUND_CEILING
#pragma push_macro("ROUND_DOWN")
#undef ROUND_DOWN
#pragma push_macro("ROUND_FLOOR")
#undef ROUND_FLOOR
#pragma push_macro("ROUND_HALF_DOWN")
#undef ROUND_HALF_DOWN
#pragma push_macro("ROUND_HALF_EVEN")
#undef ROUND_HALF_EVEN
#pragma push_macro("ROUND_HALF_UP")
#undef ROUND_HALF_UP
#pragma push_macro("ROUND_UNNECESSARY")
#undef ROUND_UNNECESSARY
#pragma push_macro("ROUND_UP")
#undef ROUND_UP
#pragma push_macro("TEN")
#undef TEN
#pragma push_macro("THRESHOLDS_TABLE")
#undef THRESHOLDS_TABLE
#pragma push_macro("ZERO")
#undef ZERO
#pragma push_macro("ZERO_SCALED_BY")
#undef ZERO_SCALED_BY
#pragma push_macro("ZERO_THROUGH_TEN")
#undef ZERO_THROUGH_TEN

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace math {
		class BigInteger;
		class MathContext;
		class MutableBigInteger;
		class RoundingMode;
	}
}

namespace java {
	namespace math {

class $export BigDecimal : public ::java::lang::Number, public ::java::lang::Comparable {
	$class(BigDecimal, 0, ::java::lang::Number, ::java::lang::Comparable)
public:
	BigDecimal();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::math::BigInteger* intVal, int64_t val, int32_t scale, int32_t prec);
	void init$($chars* in, int32_t offset, int32_t len);
	void init$($chars* in, int32_t offset, int32_t len, ::java::math::MathContext* mc);
	void init$($chars* in);
	void init$($chars* in, ::java::math::MathContext* mc);
	void init$($String* val);
	void init$($String* val, ::java::math::MathContext* mc);
	void init$(double val);
	void init$(double val, ::java::math::MathContext* mc);
	void init$(::java::math::BigInteger* val);
	void init$(::java::math::BigInteger* val, ::java::math::MathContext* mc);
	void init$(::java::math::BigInteger* unscaledVal, int32_t scale);
	void init$(::java::math::BigInteger* unscaledVal, int32_t scale, ::java::math::MathContext* mc);
	void init$(int32_t val);
	void init$(int32_t val, ::java::math::MathContext* mc);
	void init$(int64_t val);
	void init$(int64_t val, ::java::math::MathContext* mc);
	virtual ::java::math::BigDecimal* abs();
	virtual ::java::math::BigDecimal* abs(::java::math::MathContext* mc);
	virtual ::java::math::BigDecimal* add(::java::math::BigDecimal* augend);
	virtual ::java::math::BigDecimal* add(::java::math::BigDecimal* augend, ::java::math::MathContext* mc);
	static int64_t add(int64_t xs, int64_t ys);
	static ::java::math::BigDecimal* add(int64_t xs, int64_t ys, int32_t scale);
	static ::java::math::BigDecimal* add(int64_t xs, int32_t scale1, int64_t ys, int32_t scale2);
	static ::java::math::BigDecimal* add(int64_t xs, int32_t scale1, ::java::math::BigInteger* snd, int32_t scale2);
	static ::java::math::BigDecimal* add(::java::math::BigInteger* fst, int32_t scale1, ::java::math::BigInteger* snd, int32_t scale2);
	int32_t adjustScale(int32_t scl, int64_t exp);
	::java::math::BigDecimal* audit();
	static int32_t bigDigitLength(::java::math::BigInteger* b);
	::java::math::BigInteger* bigMultiplyPowerTen(int32_t n);
	static ::java::math::BigInteger* bigMultiplyPowerTen(int64_t value, int32_t n);
	static ::java::math::BigInteger* bigMultiplyPowerTen(::java::math::BigInteger* value, int32_t n);
	static ::java::math::BigInteger* bigTenToThe(int32_t n);
	virtual int8_t byteValueExact();
	int32_t checkScale(int64_t val);
	static int32_t checkScale(int64_t intCompact, int64_t val);
	static int32_t checkScale(::java::math::BigInteger* intVal, int64_t val);
	static int32_t checkScaleNonZero(int64_t val);
	static bool commonNeedIncrement(int32_t roundingMode, int32_t qsign, int32_t cmpFracHalf, bool oddQuot);
	static int64_t compactValFor(::java::math::BigInteger* b);
	int32_t compareMagnitude(::java::math::BigDecimal* val);
	static int32_t compareMagnitudeNormalized(int64_t xs, int32_t xscale, int64_t ys, int32_t yscale);
	static int32_t compareMagnitudeNormalized(int64_t xs, int32_t xscale, ::java::math::BigInteger* ys, int32_t yscale);
	static int32_t compareMagnitudeNormalized(::java::math::BigInteger* xs, int32_t xscale, ::java::math::BigInteger* ys, int32_t yscale);
	virtual int32_t compareTo(::java::math::BigDecimal* val);
	virtual int32_t compareTo(Object$* val) override;
	static ::java::math::BigDecimal* createAndStripZerosToMatchScale(::java::math::BigInteger* intVal, int32_t scale, int64_t preferredScale);
	static ::java::math::BigDecimal* createAndStripZerosToMatchScale(int64_t compactVal, int32_t scale, int64_t preferredScale);
	static $longs* divRemNegativeLong(int64_t n, int64_t d);
	virtual ::java::math::BigDecimal* divide(::java::math::BigDecimal* divisor, int32_t scale, int32_t roundingMode);
	virtual ::java::math::BigDecimal* divide(::java::math::BigDecimal* divisor, int32_t scale, ::java::math::RoundingMode* roundingMode);
	virtual ::java::math::BigDecimal* divide(::java::math::BigDecimal* divisor, int32_t roundingMode);
	virtual ::java::math::BigDecimal* divide(::java::math::BigDecimal* divisor, ::java::math::RoundingMode* roundingMode);
	virtual ::java::math::BigDecimal* divide(::java::math::BigDecimal* divisor);
	virtual ::java::math::BigDecimal* divide(::java::math::BigDecimal* divisor, ::java::math::MathContext* mc);
	static ::java::math::BigDecimal* divide(int64_t xs, int32_t xscale, int64_t ys, int32_t yscale, int64_t preferredScale, ::java::math::MathContext* mc);
	static ::java::math::BigDecimal* divide(::java::math::BigInteger* xs, int32_t xscale, int64_t ys, int32_t yscale, int64_t preferredScale, ::java::math::MathContext* mc);
	static ::java::math::BigDecimal* divide(int64_t xs, int32_t xscale, ::java::math::BigInteger* ys, int32_t yscale, int64_t preferredScale, ::java::math::MathContext* mc);
	static ::java::math::BigDecimal* divide(::java::math::BigInteger* xs, int32_t xscale, ::java::math::BigInteger* ys, int32_t yscale, int64_t preferredScale, ::java::math::MathContext* mc);
	static ::java::math::BigDecimal* divide(int64_t dividend, int32_t dividendScale, int64_t divisor, int32_t divisorScale, int32_t scale, int32_t roundingMode);
	static ::java::math::BigDecimal* divide(::java::math::BigInteger* dividend, int32_t dividendScale, int64_t divisor, int32_t divisorScale, int32_t scale, int32_t roundingMode);
	static ::java::math::BigDecimal* divide(int64_t dividend, int32_t dividendScale, ::java::math::BigInteger* divisor, int32_t divisorScale, int32_t scale, int32_t roundingMode);
	static ::java::math::BigDecimal* divide(::java::math::BigInteger* dividend, int32_t dividendScale, ::java::math::BigInteger* divisor, int32_t divisorScale, int32_t scale, int32_t roundingMode);
	virtual $Array<::java::math::BigDecimal>* divideAndRemainder(::java::math::BigDecimal* divisor);
	virtual $Array<::java::math::BigDecimal>* divideAndRemainder(::java::math::BigDecimal* divisor, ::java::math::MathContext* mc);
	static ::java::math::BigDecimal* divideAndRound(int64_t ldividend, int64_t ldivisor, int32_t scale, int32_t roundingMode, int32_t preferredScale);
	static int64_t divideAndRound(int64_t ldividend, int64_t ldivisor, int32_t roundingMode);
	static ::java::math::BigInteger* divideAndRound(::java::math::BigInteger* bdividend, int64_t ldivisor, int32_t roundingMode);
	static ::java::math::BigDecimal* divideAndRound(::java::math::BigInteger* bdividend, int64_t ldivisor, int32_t scale, int32_t roundingMode, int32_t preferredScale);
	static ::java::math::BigInteger* divideAndRound(::java::math::BigInteger* bdividend, ::java::math::BigInteger* bdivisor, int32_t roundingMode);
	static ::java::math::BigDecimal* divideAndRound(::java::math::BigInteger* bdividend, ::java::math::BigInteger* bdivisor, int32_t scale, int32_t roundingMode, int32_t preferredScale);
	static ::java::math::BigDecimal* divideAndRound128(int64_t dividendHi, int64_t dividendLo, int64_t divisor, int32_t sign, int32_t scale, int32_t roundingMode, int32_t preferredScale);
	static ::java::math::BigInteger* divideAndRoundByTenPow(::java::math::BigInteger* intVal, int32_t tenPow, int32_t roundingMode);
	static ::java::math::BigDecimal* divideSmallFastPath(int64_t xs, int32_t xscale, int64_t ys, int32_t yscale, int64_t preferredScale, ::java::math::MathContext* mc);
	virtual ::java::math::BigDecimal* divideToIntegralValue(::java::math::BigDecimal* divisor);
	virtual ::java::math::BigDecimal* divideToIntegralValue(::java::math::BigDecimal* divisor, ::java::math::MathContext* mc);
	static ::java::math::BigDecimal* doRound(::java::math::BigDecimal* val, ::java::math::MathContext* mc);
	static ::java::math::BigDecimal* doRound(int64_t compactVal, int32_t scale, ::java::math::MathContext* mc);
	static ::java::math::BigDecimal* doRound(::java::math::BigInteger* intVal, int32_t scale, ::java::math::MathContext* mc);
	static ::java::math::BigDecimal* doRound128(int64_t hi, int64_t lo, int32_t sign, int32_t scale, ::java::math::MathContext* mc);
	virtual double doubleValue() override;
	virtual bool equals(Object$* x) override;
	static ::java::math::BigInteger* expandBigIntegerTenPowers(int32_t n);
	virtual float floatValue() override;
	bool fractionOnly();
	$String* getValueString(int32_t signum, $String* intString, int32_t scale);
	virtual int32_t hashCode() override;
	::java::math::BigInteger* inflated();
	virtual int32_t intValue() override;
	virtual int32_t intValueExact();
	bool isPowerOfTen();
	$String* layoutChars(bool sci);
	static int32_t longCompareMagnitude(int64_t x, int64_t y);
	static int32_t longDigitLength(int64_t x);
	static bool longLongCompareMagnitude(int64_t hi0, int64_t lo0, int64_t hi1, int64_t lo1);
	static int64_t longMultiplyPowerTen(int64_t val, int32_t n);
	virtual int64_t longValue() override;
	virtual int64_t longValueExact();
	static int64_t make64(int64_t hi, int64_t lo);
	static void matchScale($Array<::java::math::BigDecimal>* val);
	virtual ::java::math::BigDecimal* max(::java::math::BigDecimal* val);
	virtual ::java::math::BigDecimal* min(::java::math::BigDecimal* val);
	virtual ::java::math::BigDecimal* movePointLeft(int32_t n);
	virtual ::java::math::BigDecimal* movePointRight(int32_t n);
	static int64_t mulsub(int64_t u1, int64_t u0, int64_t v1, int64_t v0, int64_t q0);
	virtual ::java::math::BigDecimal* multiply(::java::math::BigDecimal* multiplicand);
	virtual ::java::math::BigDecimal* multiply(::java::math::BigDecimal* multiplicand, ::java::math::MathContext* mc);
	static int64_t multiply(int64_t x, int64_t y);
	static ::java::math::BigDecimal* multiply(int64_t x, int64_t y, int32_t scale);
	static ::java::math::BigDecimal* multiply(int64_t x, ::java::math::BigInteger* y, int32_t scale);
	static ::java::math::BigDecimal* multiply(::java::math::BigInteger* x, ::java::math::BigInteger* y, int32_t scale);
	static ::java::math::BigDecimal* multiplyAndRound(int64_t x, int64_t y, int32_t scale, ::java::math::MathContext* mc);
	static ::java::math::BigDecimal* multiplyAndRound(int64_t x, ::java::math::BigInteger* y, int32_t scale, ::java::math::MathContext* mc);
	static ::java::math::BigDecimal* multiplyAndRound(::java::math::BigInteger* x, ::java::math::BigInteger* y, int32_t scale, ::java::math::MathContext* mc);
	static ::java::math::BigDecimal* multiplyDivideAndRound(int64_t dividend0, int64_t dividend1, int64_t divisor, int32_t scale, int32_t roundingMode, int32_t preferredScale);
	static bool needIncrement(int64_t ldivisor, int32_t roundingMode, int32_t qsign, int64_t q, int64_t r);
	static bool needIncrement(int64_t ldivisor, int32_t roundingMode, int32_t qsign, ::java::math::MutableBigInteger* mq, int64_t r);
	static bool needIncrement(::java::math::MutableBigInteger* mdivisor, int32_t roundingMode, int32_t qsign, ::java::math::MutableBigInteger* mq, ::java::math::MutableBigInteger* mr);
	virtual ::java::math::BigDecimal* negate();
	virtual ::java::math::BigDecimal* negate(::java::math::MathContext* mc);
	static int64_t parseExp($chars* in, int32_t offset, int32_t len);
	virtual ::java::math::BigDecimal* plus();
	virtual ::java::math::BigDecimal* plus(::java::math::MathContext* mc);
	virtual ::java::math::BigDecimal* pow(int32_t n);
	virtual ::java::math::BigDecimal* pow(int32_t n, ::java::math::MathContext* mc);
	$Array<::java::math::BigDecimal>* preAlign(::java::math::BigDecimal* lhs, ::java::math::BigDecimal* augend, int64_t padding, ::java::math::MathContext* mc);
	virtual int32_t precision();
	static int32_t precision(int64_t hi, int64_t lo);
	static void print($String* name, ::java::math::BigDecimal* bd);
	void readObject(::java::io::ObjectInputStream* s);
	virtual ::java::math::BigDecimal* remainder(::java::math::BigDecimal* divisor);
	virtual ::java::math::BigDecimal* remainder(::java::math::BigDecimal* divisor, ::java::math::MathContext* mc);
	virtual ::java::math::BigDecimal* round(::java::math::MathContext* mc);
	static ::java::math::BigDecimal* roundedTenPower(int32_t qsign, int32_t raise, int32_t scale, int32_t preferredScale);
	static int32_t saturateLong(int64_t s);
	virtual int32_t scale();
	virtual ::java::math::BigDecimal* scaleByPowerOfTen(int32_t n);
	static ::java::math::BigDecimal* scaledTenPow(int32_t n, int32_t sign, int32_t scale);
	virtual ::java::math::BigDecimal* setScale(int32_t newScale, ::java::math::RoundingMode* roundingMode);
	virtual ::java::math::BigDecimal* setScale(int32_t newScale, int32_t roundingMode);
	virtual ::java::math::BigDecimal* setScale(int32_t newScale);
	virtual int16_t shortValueExact();
	virtual int32_t signum();
	virtual ::java::math::BigDecimal* sqrt(::java::math::MathContext* mc);
	::java::math::BigDecimal* square();
	bool squareRootResultAssertions(::java::math::BigDecimal* result, ::java::math::MathContext* mc);
	bool squareRootZeroResultAssertions(::java::math::BigDecimal* result, ::java::math::MathContext* mc);
	virtual ::java::math::BigDecimal* stripTrailingZeros();
	static ::java::math::BigDecimal* stripZerosToMatchScale(::java::math::BigInteger* intVal, int64_t intCompact, int32_t scale, int32_t preferredScale);
	virtual ::java::math::BigDecimal* subtract(::java::math::BigDecimal* subtrahend);
	virtual ::java::math::BigDecimal* subtract(::java::math::BigDecimal* subtrahend, ::java::math::MathContext* mc);
	virtual ::java::math::BigInteger* toBigInteger();
	virtual ::java::math::BigInteger* toBigIntegerExact();
	virtual $String* toEngineeringString();
	virtual $String* toPlainString();
	virtual $String* toString() override;
	virtual ::java::math::BigDecimal* ulp();
	virtual ::java::math::BigInteger* unscaledValue();
	static bool unsignedLongCompare(int64_t one, int64_t two);
	static bool unsignedLongCompareEq(int64_t one, int64_t two);
	static ::java::math::BigDecimal* valueOf(int64_t unscaledVal, int32_t scale);
	static ::java::math::BigDecimal* valueOf(int64_t val);
	static ::java::math::BigDecimal* valueOf(int64_t unscaledVal, int32_t scale, int32_t prec);
	static ::java::math::BigDecimal* valueOf(::java::math::BigInteger* intVal, int32_t scale, int32_t prec);
	static ::java::math::BigDecimal* valueOf(double val);
	void writeObject(::java::io::ObjectOutputStream* s);
	static ::java::math::BigDecimal* zeroValueOf(int32_t scale);
	static bool $assertionsDisabled;
	::java::math::BigInteger* intVal = nullptr;
	int32_t scale$ = 0;
	int32_t precision$ = 0;
	$String* stringCache = nullptr;
	static const int64_t INFLATED = 0x8000000000000000; // Long.MIN_VALUE
	static ::java::math::BigInteger* INFLATED_BIGINT;
	int64_t intCompact = 0;
	static const int32_t MAX_COMPACT_DIGITS = 18;
	static const int64_t serialVersionUID = (int64_t)0x54C71557F981284F;
	static $Array<::java::math::BigDecimal>* ZERO_THROUGH_TEN;
	static $Array<::java::math::BigDecimal>* ZERO_SCALED_BY;
	static const int64_t HALF_LONG_MAX_VALUE = 0x3FFFFFFFFFFFFFFF; // Long.MAX_VALUE / 2
	static const int64_t HALF_LONG_MIN_VALUE = 0xC000000000000000; // Long.MIN_VALUE / 2
	static ::java::math::BigDecimal* ZERO;
	static ::java::math::BigDecimal* ONE;
	static ::java::math::BigDecimal* TEN;
	static ::java::math::BigDecimal* ONE_TENTH;
	static ::java::math::BigDecimal* ONE_HALF;
	static const int32_t ROUND_UP = 0;
	static const int32_t ROUND_DOWN = 1;
	static const int32_t ROUND_CEILING = 2;
	static const int32_t ROUND_FLOOR = 3;
	static const int32_t ROUND_HALF_UP = 4;
	static const int32_t ROUND_HALF_DOWN = 5;
	static const int32_t ROUND_HALF_EVEN = 6;
	static const int32_t ROUND_UNNECESSARY = 7;
	static $doubles* DOUBLE_10_POW;
	static $floats* FLOAT_10_POW;
	static $longs* LONG_TEN_POWERS_TABLE;
	static $volatile($Array<::java::math::BigInteger>*) BIG_TEN_POWERS_TABLE;
	static int32_t BIG_TEN_POWERS_TABLE_INITLEN;
	static int32_t BIG_TEN_POWERS_TABLE_MAX;
	static $longs* THRESHOLDS_TABLE;
	static const int64_t DIV_NUM_BASE = 4294967296; // (1L << 32)
	static $Array<int64_t, 2>* LONGLONG_TEN_POWERS_TABLE;
};

	} // math
} // java

#pragma pop_macro("BIG_TEN_POWERS_TABLE")
#pragma pop_macro("BIG_TEN_POWERS_TABLE_INITLEN")
#pragma pop_macro("BIG_TEN_POWERS_TABLE_MAX")
#pragma pop_macro("DIV_NUM_BASE")
#pragma pop_macro("DOUBLE_10_POW")
#pragma pop_macro("FLOAT_10_POW")
#pragma pop_macro("HALF_LONG_MAX_VALUE")
#pragma pop_macro("HALF_LONG_MIN_VALUE")
#pragma pop_macro("INFLATED")
#pragma pop_macro("INFLATED_BIGINT")
#pragma pop_macro("LONGLONG_TEN_POWERS_TABLE")
#pragma pop_macro("LONG_TEN_POWERS_TABLE")
#pragma pop_macro("MAX_COMPACT_DIGITS")
#pragma pop_macro("ONE")
#pragma pop_macro("ONE_HALF")
#pragma pop_macro("ONE_TENTH")
#pragma pop_macro("ROUND_CEILING")
#pragma pop_macro("ROUND_DOWN")
#pragma pop_macro("ROUND_FLOOR")
#pragma pop_macro("ROUND_HALF_DOWN")
#pragma pop_macro("ROUND_HALF_EVEN")
#pragma pop_macro("ROUND_HALF_UP")
#pragma pop_macro("ROUND_UNNECESSARY")
#pragma pop_macro("ROUND_UP")
#pragma pop_macro("TEN")
#pragma pop_macro("THRESHOLDS_TABLE")
#pragma pop_macro("ZERO")
#pragma pop_macro("ZERO_SCALED_BY")
#pragma pop_macro("ZERO_THROUGH_TEN")

#endif // _java_math_BigDecimal_h_