#ifndef _java_math_BigInteger_h_
#define _java_math_BigInteger_h_
//$ class java.math.BigInteger
//$ extends java.lang.Number
//$ implements java.lang.Comparable

#include <java/lang/Array.h>
#include <java/lang/Integer.h>

#pragma push_macro("BURNIKEL_ZIEGLER_OFFSET")
#undef BURNIKEL_ZIEGLER_OFFSET
#pragma push_macro("BURNIKEL_ZIEGLER_THRESHOLD")
#undef BURNIKEL_ZIEGLER_THRESHOLD
#pragma push_macro("DEFAULT_PRIME_CERTAINTY")
#undef DEFAULT_PRIME_CERTAINTY
#pragma push_macro("KARATSUBA_SQUARE_THRESHOLD")
#undef KARATSUBA_SQUARE_THRESHOLD
#pragma push_macro("KARATSUBA_THRESHOLD")
#undef KARATSUBA_THRESHOLD
#pragma push_macro("LOG_TWO")
#undef LOG_TWO
#pragma push_macro("LONG_MASK")
#undef LONG_MASK
#pragma push_macro("MAX_CONSTANT")
#undef MAX_CONSTANT
#pragma push_macro("MAX_MAG_LENGTH")
#undef MAX_MAG_LENGTH
#pragma push_macro("MAX_VALUE")
#undef MAX_VALUE
#pragma push_macro("MONTGOMERY_INTRINSIC_THRESHOLD")
#undef MONTGOMERY_INTRINSIC_THRESHOLD
#pragma push_macro("MULTIPLY_SQUARE_THRESHOLD")
#undef MULTIPLY_SQUARE_THRESHOLD
#pragma push_macro("NEGATIVE_ONE")
#undef NEGATIVE_ONE
#pragma push_macro("NUM_ZEROS")
#undef NUM_ZEROS
#pragma push_macro("ONE")
#undef ONE
#pragma push_macro("PRIME_SEARCH_BIT_LENGTH_LIMIT")
#undef PRIME_SEARCH_BIT_LENGTH_LIMIT
#pragma push_macro("SCHOENHAGE_BASE_CONVERSION_THRESHOLD")
#undef SCHOENHAGE_BASE_CONVERSION_THRESHOLD
#pragma push_macro("SIZE")
#undef SIZE
#pragma push_macro("SMALL_PRIME_PRODUCT")
#undef SMALL_PRIME_PRODUCT
#pragma push_macro("SMALL_PRIME_THRESHOLD")
#undef SMALL_PRIME_THRESHOLD
#pragma push_macro("TEN")
#undef TEN
#pragma push_macro("TOOM_COOK_SQUARE_THRESHOLD")
#undef TOOM_COOK_SQUARE_THRESHOLD
#pragma push_macro("TOOM_COOK_THRESHOLD")
#undef TOOM_COOK_THRESHOLD
#pragma push_macro("TWO")
#undef TWO
#pragma push_macro("ZERO")
#undef ZERO
#pragma push_macro("ZEROS")
#undef ZEROS

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class Random;
	}
}

namespace java {
	namespace math {

class $export BigInteger : public ::java::lang::Number, public ::java::lang::Comparable {
	$class(BigInteger, 0, ::java::lang::Number, ::java::lang::Comparable)
public:
	BigInteger();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$($bytes* val, int32_t off, int32_t len);
	void init$($bytes* val);
	void init$($ints* val);
	void init$(int32_t signum, $bytes* magnitude, int32_t off, int32_t len);
	void init$(int32_t signum, $bytes* magnitude);
	void init$(int32_t signum, $ints* magnitude);
	void init$($String* val, int32_t radix);
	void init$($chars* val, int32_t sign, int32_t len);
	void init$($String* val);
	void init$(int32_t numBits, ::java::util::Random* rnd);
	void init$(int32_t bitLength, int32_t certainty, ::java::util::Random* rnd);
	void init$($ints* magnitude, int32_t signum);
	void init$($bytes* magnitude, int32_t signum);
	void init$(int64_t val);
	virtual ::java::math::BigInteger* abs();
	virtual ::java::math::BigInteger* add(::java::math::BigInteger* val);
	virtual ::java::math::BigInteger* add(int64_t val);
	static $ints* add($ints* x, int64_t val);
	static $ints* add($ints* x, $ints* y);
	static int32_t addOne($ints* a, int32_t offset, int32_t mlen, int32_t carry);
	virtual ::java::math::BigInteger* and$(::java::math::BigInteger* val);
	virtual ::java::math::BigInteger* andNot(::java::math::BigInteger* val);
	virtual int32_t bitCount();
	static int32_t bitLength($ints* val, int32_t len);
	virtual int32_t bitLength();
	static int32_t bitLengthForInt(int32_t n);
	virtual int8_t byteValueExact();
	void checkRange();
	virtual ::java::math::BigInteger* clearBit(int32_t n);
	int32_t compareMagnitude(::java::math::BigInteger* val);
	int32_t compareMagnitude(int64_t val);
	virtual int32_t compareTo(::java::math::BigInteger* val);
	virtual int32_t compareTo(Object$* val) override;
	static void destructiveMulAdd($ints* x, int32_t y, int32_t z);
	virtual ::java::math::BigInteger* divide(::java::math::BigInteger* val);
	virtual $Array<::java::math::BigInteger>* divideAndRemainder(::java::math::BigInteger* val);
	$Array<::java::math::BigInteger>* divideAndRemainderBurnikelZiegler(::java::math::BigInteger* val);
	$Array<::java::math::BigInteger>* divideAndRemainderKnuth(::java::math::BigInteger* val);
	::java::math::BigInteger* divideBurnikelZiegler(::java::math::BigInteger* val);
	::java::math::BigInteger* divideKnuth(::java::math::BigInteger* val);
	virtual double doubleValue() override;
	virtual bool equals(Object$* x) override;
	::java::math::BigInteger* exactDivideBy3();
	int32_t firstNonzeroIntNum();
	virtual ::java::math::BigInteger* flipBit(int32_t n);
	virtual float floatValue() override;
	virtual ::java::math::BigInteger* gcd(::java::math::BigInteger* val);
	int32_t getInt(int32_t n);
	::java::math::BigInteger* getLower(int32_t n);
	virtual int32_t getLowestSetBit();
	static int32_t getPrimeSearchLen(int32_t bitLength);
	static ::java::math::BigInteger* getRadixConversionCache(int32_t radix, int32_t exponent);
	::java::math::BigInteger* getToomSlice(int32_t lowerSize, int32_t upperSize, int32_t slice, int32_t fullsize);
	::java::math::BigInteger* getUpper(int32_t n);
	virtual int32_t hashCode() override;
	static $ints* implMontgomeryMultiply($ints* a, $ints* b, $ints* n, int32_t len, int64_t inv, $ints* product);
	static void implMontgomeryMultiplyChecks($ints* a, $ints* b, $ints* n, int32_t len, $ints* product);
	static $ints* implMontgomerySquare($ints* a, $ints* n, int32_t len, int64_t inv, $ints* product);
	static int32_t implMulAdd($ints* out, $ints* in, int32_t offset, int32_t len, int32_t k);
	static void implMulAddCheck($ints* out, $ints* in, int32_t offset, int32_t len, int32_t k);
	static $ints* implMultiplyToLen($ints* x, int32_t xlen, $ints* y, int32_t ylen, $ints* z);
	static $ints* implSquareToLen($ints* x, int32_t len, $ints* z, int32_t zlen);
	static void implSquareToLenChecks($ints* x, int32_t len, $ints* z, int32_t zlen);
	static int32_t intArrayCmpToLen($ints* arg1, $ints* arg2, int32_t len);
	int32_t intLength();
	virtual int32_t intValue() override;
	virtual int32_t intValueExact();
	virtual bool isProbablePrime(int32_t certainty);
	static int32_t jacobiSymbol(int32_t p, ::java::math::BigInteger* n);
	virtual $ints* javaIncrement($ints* val);
	static ::java::math::BigInteger* largePrime(int32_t bitLength, int32_t certainty, ::java::util::Random* rnd);
	static $ints* leftShift($ints* a, int32_t len, int32_t n);
	virtual int64_t longValue() override;
	virtual int64_t longValueExact();
	static ::java::math::BigInteger* lucasLehmerSequence(int32_t z, ::java::math::BigInteger* k, ::java::math::BigInteger* n);
	$bytes* magSerializedForm();
	static $ints* makePositive($bytes* a, int32_t off, int32_t len);
	static $ints* makePositive($ints* a);
	static $ints* materialize($ints* z, int32_t len);
	virtual ::java::math::BigInteger* max(::java::math::BigInteger* val);
	virtual ::java::math::BigInteger* min(::java::math::BigInteger* val);
	virtual ::java::math::BigInteger* mod(::java::math::BigInteger* m);
	::java::math::BigInteger* mod2(int32_t p);
	virtual ::java::math::BigInteger* modInverse(::java::math::BigInteger* m);
	virtual ::java::math::BigInteger* modPow(::java::math::BigInteger* exponent, ::java::math::BigInteger* m);
	::java::math::BigInteger* modPow2(::java::math::BigInteger* exponent, int32_t p);
	static $ints* montReduce($ints* n, $ints* mod, int32_t mlen, int32_t inv);
	static $ints* montgomeryMultiply($ints* a, $ints* b, $ints* n, int32_t len, int64_t inv, $ints* product);
	static $ints* montgomerySquare($ints* a, $ints* n, int32_t len, int64_t inv, $ints* product);
	static int32_t mulAdd($ints* out, $ints* in, int32_t offset, int32_t len, int32_t k);
	virtual ::java::math::BigInteger* multiply(::java::math::BigInteger* val);
	::java::math::BigInteger* multiply(::java::math::BigInteger* val, bool isRecursion);
	virtual ::java::math::BigInteger* multiply(int64_t v);
	static ::java::math::BigInteger* multiplyByInt($ints* x, int32_t y, int32_t sign);
	static ::java::math::BigInteger* multiplyKaratsuba(::java::math::BigInteger* x, ::java::math::BigInteger* y);
	static $ints* multiplyToLen($ints* x, int32_t xlen, $ints* y, int32_t ylen, $ints* z);
	static void multiplyToLenCheck($ints* array, int32_t length);
	static ::java::math::BigInteger* multiplyToomCook3(::java::math::BigInteger* a, ::java::math::BigInteger* b);
	virtual ::java::math::BigInteger* negate();
	virtual ::java::math::BigInteger* nextProbablePrime();
	virtual ::java::math::BigInteger* not$();
	::java::math::BigInteger* oddModPow(::java::math::BigInteger* y, ::java::math::BigInteger* z);
	virtual ::java::math::BigInteger* or$(::java::math::BigInteger* val);
	static void padWithZeros(::java::lang::StringBuilder* buf, int32_t numZeros);
	int32_t parseInt($chars* source, int32_t start, int32_t end);
	bool passesLucasLehmer();
	bool passesMillerRabin(int32_t iterations, ::java::util::Random* rnd);
	virtual ::java::math::BigInteger* pow(int32_t exponent);
	virtual bool primeToCertainty(int32_t certainty, ::java::util::Random* random);
	static void primitiveLeftShift($ints* a, int32_t len, int32_t n);
	static void primitiveRightShift($ints* a, int32_t len, int32_t n);
	static ::java::math::BigInteger* probablePrime(int32_t bitLength, ::java::util::Random* rnd);
	static $bytes* randomBits(int32_t numBits, ::java::util::Random* rnd);
	void readObject(::java::io::ObjectInputStream* s);
	virtual ::java::math::BigInteger* remainder(::java::math::BigInteger* val);
	::java::math::BigInteger* remainderBurnikelZiegler(::java::math::BigInteger* val);
	::java::math::BigInteger* remainderKnuth(::java::math::BigInteger* val);
	static void reportOverflow();
	virtual ::java::math::BigInteger* setBit(int32_t n);
	virtual ::java::math::BigInteger* shiftLeft(int32_t n);
	static $ints* shiftLeft($ints* mag, int32_t n);
	static void shiftLeftImplWorker($ints* newArr, $ints* oldArr, int32_t newIdx, int32_t shiftCount, int32_t numIter);
	virtual ::java::math::BigInteger* shiftRight(int32_t n);
	::java::math::BigInteger* shiftRightImpl(int32_t n);
	static void shiftRightImplWorker($ints* newArr, $ints* oldArr, int32_t newIdx, int32_t shiftCount, int32_t numIter);
	virtual int16_t shortValueExact();
	int32_t signBit();
	int32_t signInt();
	virtual int32_t signum();
	static ::java::math::BigInteger* smallPrime(int32_t bitLength, int32_t certainty, ::java::util::Random* rnd);
	void smallToString(int32_t radix, ::java::lang::StringBuilder* buf, int32_t digits);
	virtual ::java::math::BigInteger* sqrt();
	virtual $Array<::java::math::BigInteger>* sqrtAndRemainder();
	::java::math::BigInteger* square();
	::java::math::BigInteger* square(bool isRecursion);
	::java::math::BigInteger* squareKaratsuba();
	static $ints* squareToLen($ints* x, int32_t len, $ints* z);
	::java::math::BigInteger* squareToomCook3();
	static $ints* stripLeadingZeroBytes($bytes* a, int32_t off, int32_t len);
	static $ints* stripLeadingZeroInts($ints* val);
	static int32_t subN($ints* a, $ints* b, int32_t len);
	static $ints* subtract(int64_t val, $ints* little);
	static $ints* subtract($ints* big, int64_t val);
	virtual ::java::math::BigInteger* subtract(::java::math::BigInteger* val);
	static $ints* subtract($ints* big, $ints* little);
	virtual bool testBit(int32_t n);
	virtual $bytes* toByteArray();
	virtual $String* toString(int32_t radix);
	static void toString(::java::math::BigInteger* u, ::java::lang::StringBuilder* sb, int32_t radix, int32_t digits);
	virtual $String* toString() override;
	static $ints* trustedStripLeadingZeroInts($ints* val);
	static ::java::math::BigInteger* valueOf(int64_t val);
	static ::java::math::BigInteger* valueOf($ints* val);
	void writeObject(::java::io::ObjectOutputStream* s);
	virtual ::java::math::BigInteger* xor$(::java::math::BigInteger* val);
	static bool $assertionsDisabled;
	int32_t signum$ = 0;
	$ints* mag = nullptr;
	int32_t bitCountPlusOne = 0;
	int32_t bitLengthPlusOne = 0;
	int32_t lowestSetBitPlusTwo = 0;
	int32_t firstNonzeroIntNumPlusTwo = 0;
	static const int64_t LONG_MASK = (int64_t)0x00000000FFFFFFFF;
	static const int32_t MAX_MAG_LENGTH = 67108864; // ::java::lang::Integer::MAX_VALUE / ::java::lang::Integer::SIZE + 1
	static const int32_t PRIME_SEARCH_BIT_LENGTH_LIMIT = 0x1DCD6500;
	static const int32_t KARATSUBA_THRESHOLD = 80;
	static const int32_t TOOM_COOK_THRESHOLD = 240;
	static const int32_t KARATSUBA_SQUARE_THRESHOLD = 128;
	static const int32_t TOOM_COOK_SQUARE_THRESHOLD = 216;
	static const int32_t BURNIKEL_ZIEGLER_THRESHOLD = 80;
	static const int32_t BURNIKEL_ZIEGLER_OFFSET = 40;
	static const int32_t SCHOENHAGE_BASE_CONVERSION_THRESHOLD = 20;
	static const int32_t MULTIPLY_SQUARE_THRESHOLD = 20;
	static const int32_t MONTGOMERY_INTRINSIC_THRESHOLD = 512;
	static $longs* bitsPerDigit;
	static const int32_t SMALL_PRIME_THRESHOLD = 95;
	static const int32_t DEFAULT_PRIME_CERTAINTY = 100;
	static ::java::math::BigInteger* SMALL_PRIME_PRODUCT;
	static const int32_t MAX_CONSTANT = 16;
	static $Array<::java::math::BigInteger>* posConst;
	static $Array<::java::math::BigInteger>* negConst;
	static $volatile($Array<::java::math::BigInteger, 2>*) powerCache;
	static $doubles* logCache;
	static double LOG_TWO;
	static ::java::math::BigInteger* ZERO;
	static ::java::math::BigInteger* ONE;
	static ::java::math::BigInteger* TWO;
	static ::java::math::BigInteger* NEGATIVE_ONE;
	static ::java::math::BigInteger* TEN;
	static $ints* bnExpModThreshTable;
	static int32_t NUM_ZEROS;
	static $String* ZEROS;
	static $ints* digitsPerLong;
	static $Array<::java::math::BigInteger>* longRadix;
	static $ints* digitsPerInt;
	static $ints* intRadix;
	static const int64_t serialVersionUID = (int64_t)0x8CFC9F1FA93BFB1D;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
};

	} // math
} // java

#pragma pop_macro("BURNIKEL_ZIEGLER_OFFSET")
#pragma pop_macro("BURNIKEL_ZIEGLER_THRESHOLD")
#pragma pop_macro("DEFAULT_PRIME_CERTAINTY")
#pragma pop_macro("KARATSUBA_SQUARE_THRESHOLD")
#pragma pop_macro("KARATSUBA_THRESHOLD")
#pragma pop_macro("LOG_TWO")
#pragma pop_macro("LONG_MASK")
#pragma pop_macro("MAX_CONSTANT")
#pragma pop_macro("MAX_MAG_LENGTH")
#pragma pop_macro("MAX_VALUE")
#pragma pop_macro("MONTGOMERY_INTRINSIC_THRESHOLD")
#pragma pop_macro("MULTIPLY_SQUARE_THRESHOLD")
#pragma pop_macro("NEGATIVE_ONE")
#pragma pop_macro("NUM_ZEROS")
#pragma pop_macro("ONE")
#pragma pop_macro("PRIME_SEARCH_BIT_LENGTH_LIMIT")
#pragma pop_macro("SCHOENHAGE_BASE_CONVERSION_THRESHOLD")
#pragma pop_macro("SIZE")
#pragma pop_macro("SMALL_PRIME_PRODUCT")
#pragma pop_macro("SMALL_PRIME_THRESHOLD")
#pragma pop_macro("TEN")
#pragma pop_macro("TOOM_COOK_SQUARE_THRESHOLD")
#pragma pop_macro("TOOM_COOK_THRESHOLD")
#pragma pop_macro("TWO")
#pragma pop_macro("ZERO")
#pragma pop_macro("ZEROS")

#endif // _java_math_BigInteger_h_