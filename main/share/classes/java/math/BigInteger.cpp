#include <java/math/BigInteger.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/io/StreamCorruptedException.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <java/lang/Number.h>
#include <java/lang/NumberFormatException.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger$UnsafeHolder.h>
#include <java/math/BitSieve.h>
#include <java/math/MutableBigInteger.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <java/util/Random.h>
#include <java/util/concurrent/ThreadLocalRandom.h>
#include <jdk/internal/math/DoubleConsts.h>
#include <jdk/internal/math/FloatConsts.h>
#include <jcpp.h>

#undef BURNIKEL_ZIEGLER_OFFSET
#undef BURNIKEL_ZIEGLER_THRESHOLD
#undef DEFAULT_PRIME_CERTAINTY
#undef EXP_BIAS
#undef INFLATED
#undef KARATSUBA_SQUARE_THRESHOLD
#undef KARATSUBA_THRESHOLD
#undef LOG_TWO
#undef LONG_MASK
#undef MAX_CONSTANT
#undef MAX_EXPONENT
#undef MAX_MAG_LENGTH
#undef MAX_RADIX
#undef MAX_VALUE
#undef MIN_RADIX
#undef MIN_VALUE
#undef MONTGOMERY_INTRINSIC_THRESHOLD
#undef MULTIPLY_SQUARE_THRESHOLD
#undef NEGATIVE_INFINITY
#undef NEGATIVE_ONE
#undef NUM_ZEROS
#undef ONE
#undef POSITIVE_INFINITY
#undef PRIME_SEARCH_BIT_LENGTH_LIMIT
#undef SCHOENHAGE_BASE_CONVERSION_THRESHOLD
#undef SIGNIFICAND_WIDTH
#undef SIGNIF_BIT_MASK
#undef SIGN_BIT_MASK
#undef SIZE
#undef SMALL_PRIME_PRODUCT
#undef SMALL_PRIME_THRESHOLD
#undef TEN
#undef TOOM_COOK_SQUARE_THRESHOLD
#undef TOOM_COOK_THRESHOLD
#undef TWO
#undef TYPE
#undef ZERO
#undef ZEROS

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $BigIntegerArray = $Array<::java::math::BigInteger>;
using $intArray2 = $Array<int32_t, 2>;
using $BigIntegerArray2 = $Array<::java::math::BigInteger, 2>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $StreamCorruptedException = ::java::io::StreamCorruptedException;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $AssertionError = ::java::lang::AssertionError;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Short = ::java::lang::Short;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger$UnsafeHolder = ::java::math::BigInteger$UnsafeHolder;
using $BitSieve = ::java::math::BitSieve;
using $MutableBigInteger = ::java::math::MutableBigInteger;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;
using $Random = ::java::util::Random;
using $ThreadLocalRandom = ::java::util::concurrent::ThreadLocalRandom;
using $DoubleConsts = ::jdk::internal::math::DoubleConsts;
using $FloatConsts = ::jdk::internal::math::FloatConsts;

namespace java {
	namespace math {

$Object* BigInteger::clone() {
	 return this->$Number::clone();
}

void BigInteger::finalize() {
	this->$Number::finalize();
}

bool BigInteger::$assertionsDisabled = false;
$longs* BigInteger::bitsPerDigit = nullptr;
BigInteger* BigInteger::SMALL_PRIME_PRODUCT = nullptr;
$BigIntegerArray* BigInteger::posConst = nullptr;
$BigIntegerArray* BigInteger::negConst = nullptr;
$volatile($BigIntegerArray2*) BigInteger::powerCache = nullptr;
$doubles* BigInteger::logCache = nullptr;
double BigInteger::LOG_TWO = 0.0;
BigInteger* BigInteger::ZERO = nullptr;
BigInteger* BigInteger::ONE = nullptr;
BigInteger* BigInteger::TWO = nullptr;
BigInteger* BigInteger::NEGATIVE_ONE = nullptr;
BigInteger* BigInteger::TEN = nullptr;
$ints* BigInteger::bnExpModThreshTable = nullptr;
int32_t BigInteger::NUM_ZEROS = 0;
$String* BigInteger::ZEROS = nullptr;
$ints* BigInteger::digitsPerLong = nullptr;
$BigIntegerArray* BigInteger::longRadix = nullptr;
$ints* BigInteger::digitsPerInt = nullptr;
$ints* BigInteger::intRadix = nullptr;
$ObjectStreamFieldArray* BigInteger::serialPersistentFields = nullptr;

void BigInteger::init$($bytes* val, int32_t off, int32_t len) {
	$Number::init$();
	if ($nc(val)->length == 0) {
		$throwNew($NumberFormatException, "Zero length BigInteger"_s);
	}
	$Objects::checkFromIndexSize(off, len, val->length);
	if (val->get(off) < 0) {
		$set(this, mag, makePositive(val, off, len));
		this->signum$ = -1;
	} else {
		$set(this, mag, stripLeadingZeroBytes(val, off, len));
		this->signum$ = (this->mag->length == 0 ? 0 : 1);
	}
	if ($nc(this->mag)->length >= BigInteger::MAX_MAG_LENGTH) {
		checkRange();
	}
}

void BigInteger::init$($bytes* val) {
	BigInteger::init$(val, 0, $nc(val)->length);
}

void BigInteger::init$($ints* val) {
	$Number::init$();
	if ($nc(val)->length == 0) {
		$throwNew($NumberFormatException, "Zero length BigInteger"_s);
	}
	if (val->get(0) < 0) {
		$set(this, mag, makePositive(val));
		this->signum$ = -1;
	} else {
		$set(this, mag, trustedStripLeadingZeroInts(val));
		this->signum$ = (this->mag->length == 0 ? 0 : 1);
	}
	if ($nc(this->mag)->length >= BigInteger::MAX_MAG_LENGTH) {
		checkRange();
	}
}

void BigInteger::init$(int32_t signum, $bytes* magnitude, int32_t off, int32_t len) {
	$useLocalObjectStack();
	$Number::init$();
	if (signum < -1 || signum > 1) {
		$throw($$new($NumberFormatException, "Invalid signum value"_s));
	}
	$Objects::checkFromIndexSize(off, len, $nc(magnitude)->length);
	$set(this, mag, stripLeadingZeroBytes(magnitude, off, len));
	if (this->mag->length == 0) {
		this->signum$ = 0;
	} else {
		if (signum == 0) {
			$throw($$new($NumberFormatException, "signum-magnitude mismatch"_s));
		}
		this->signum$ = signum;
	}
	if ($nc(this->mag)->length >= BigInteger::MAX_MAG_LENGTH) {
		checkRange();
	}
}

void BigInteger::init$(int32_t signum, $bytes* magnitude) {
	BigInteger::init$(signum, magnitude, 0, $nc(magnitude)->length);
}

void BigInteger::init$(int32_t signum, $ints* magnitude) {
	$useLocalObjectStack();
	$Number::init$();
	$set(this, mag, stripLeadingZeroInts(magnitude));
	if (signum < -1 || signum > 1) {
		$throw($$new($NumberFormatException, "Invalid signum value"_s));
	}
	if (this->mag->length == 0) {
		this->signum$ = 0;
	} else {
		if (signum == 0) {
			$throw($$new($NumberFormatException, "signum-magnitude mismatch"_s));
		}
		this->signum$ = signum;
	}
	if ($nc(this->mag)->length >= BigInteger::MAX_MAG_LENGTH) {
		checkRange();
	}
}

void BigInteger::init$($String* val, int32_t radix) {
	$useLocalObjectStack();
	$Number::init$();
	int32_t cursor = 0;
	int32_t numDigits = 0;
	int32_t len = $nc(val)->length();
	if (radix < $Character::MIN_RADIX || radix > $Character::MAX_RADIX) {
		$throwNew($NumberFormatException, "Radix out of range"_s);
	}
	if (len == 0) {
		$throwNew($NumberFormatException, "Zero length BigInteger"_s);
	}
	int32_t sign = 1;
	int32_t index1 = val->lastIndexOf(u'-');
	int32_t index2 = val->lastIndexOf(u'+');
	if (index1 >= 0) {
		if (index1 != 0 || index2 >= 0) {
			$throwNew($NumberFormatException, "Illegal embedded sign character"_s);
		}
		sign = -1;
		cursor = 1;
	} else if (index2 >= 0) {
		if (index2 != 0) {
			$throwNew($NumberFormatException, "Illegal embedded sign character"_s);
		}
		cursor = 1;
	}
	if (cursor == len) {
		$throwNew($NumberFormatException, "Zero length BigInteger"_s);
	}
	while (cursor < len && $Character::digit(val->charAt(cursor), radix) == 0) {
		++cursor;
	}
	if (cursor == len) {
		this->signum$ = 0;
		$set(this, mag, BigInteger::ZERO->mag);
		return;
	}
	numDigits = len - cursor;
	this->signum$ = sign;
	int64_t numBits = ((int64_t)((uint64_t)(numDigits * $nc(BigInteger::bitsPerDigit)->get(radix)) >> 10)) + 1;
	if (numBits + 31 >= ((int64_t)1 << 32)) {
		reportOverflow();
	}
	int32_t numWords = (int32_t)((uint32_t)(int32_t)(numBits + 31) >> 5);
	$var($ints, magnitude, $new($ints, numWords));
	int32_t firstGroupLen = $mod(numDigits, $nc(BigInteger::digitsPerInt)->get(radix));
	if (firstGroupLen == 0) {
		firstGroupLen = BigInteger::digitsPerInt->get(radix);
	}
	int32_t var$0 = cursor;
	$var($String, group, val->substring(var$0, cursor += firstGroupLen));
	magnitude->set(numWords - 1, $Integer::parseInt(group, radix));
	if (magnitude->get(numWords - 1) < 0) {
		$throwNew($NumberFormatException, "Illegal digit"_s);
	}
	int32_t superRadix = $nc(BigInteger::intRadix)->get(radix);
	int32_t groupVal = 0;
	while (cursor < len) {
		int32_t var$1 = cursor;
		$assign(group, val->substring(var$1, cursor += BigInteger::digitsPerInt->get(radix)));
		groupVal = $Integer::parseInt(group, radix);
		if (groupVal < 0) {
			$throwNew($NumberFormatException, "Illegal digit"_s);
		}
		destructiveMulAdd(magnitude, superRadix, groupVal);
	}
	$set(this, mag, trustedStripLeadingZeroInts(magnitude));
	if (this->mag->length >= BigInteger::MAX_MAG_LENGTH) {
		checkRange();
	}
}

void BigInteger::init$($chars* val, int32_t sign, int32_t len) {
	$Number::init$();
	int32_t cursor = 0;
	int32_t numDigits = 0;
	while (cursor < len && $Character::digit($nc(val)->get(cursor), 10) == 0) {
		++cursor;
	}
	if (cursor == len) {
		this->signum$ = 0;
		$set(this, mag, BigInteger::ZERO->mag);
		return;
	}
	numDigits = len - cursor;
	this->signum$ = sign;
	int32_t numWords = 0;
	if (len < 10) {
		numWords = 1;
	} else {
		int64_t numBits = ((int64_t)((uint64_t)(numDigits * $nc(BigInteger::bitsPerDigit)->get(10)) >> 10)) + 1;
		if (numBits + 31 >= ((int64_t)1 << 32)) {
			reportOverflow();
		}
		numWords = (int32_t)((uint32_t)(int32_t)(numBits + 31) >> 5);
	}
	$var($ints, magnitude, $new($ints, numWords));
	int32_t firstGroupLen = $mod(numDigits, $nc(BigInteger::digitsPerInt)->get(10));
	if (firstGroupLen == 0) {
		firstGroupLen = BigInteger::digitsPerInt->get(10);
	}
	int32_t var$0 = cursor;
	magnitude->set(numWords - 1, parseInt(val, var$0, cursor += firstGroupLen));
	while (cursor < len) {
		int32_t var$1 = cursor;
		int32_t groupVal = parseInt(val, var$1, cursor += BigInteger::digitsPerInt->get(10));
		destructiveMulAdd(magnitude, $nc(BigInteger::intRadix)->get(10), groupVal);
	}
	$set(this, mag, trustedStripLeadingZeroInts(magnitude));
	if (this->mag->length >= BigInteger::MAX_MAG_LENGTH) {
		checkRange();
	}
}

int32_t BigInteger::parseInt($chars* source, int32_t start, int32_t end) {
	$useLocalObjectStack();
	int32_t result = $Character::digit($nc(source)->get(start++), 10);
	if (result == -1) {
		$throwNew($NumberFormatException, $$new($String, source));
	}
	for (int32_t index = start; index < end; ++index) {
		int32_t nextVal = $Character::digit(source->get(index), 10);
		if (nextVal == -1) {
			$throwNew($NumberFormatException, $$new($String, source));
		}
		result = 10 * result + nextVal;
	}
	return result;
}

void BigInteger::destructiveMulAdd($ints* x, int32_t y, int32_t z) {
	$init(BigInteger);
	int64_t ylong = y & BigInteger::LONG_MASK;
	int64_t zlong = z & BigInteger::LONG_MASK;
	int32_t len = $nc(x)->length;
	int64_t product = 0;
	int64_t carry = 0;
	for (int32_t i = len - 1; i >= 0; --i) {
		product = ylong * (x->get(i) & BigInteger::LONG_MASK) + carry;
		x->set(i, (int32_t)product);
		carry = (int64_t)((uint64_t)product >> 32);
	}
	int64_t sum = (x->get(len - 1) & BigInteger::LONG_MASK) + zlong;
	x->set(len - 1, (int32_t)sum);
	carry = (int64_t)((uint64_t)sum >> 32);
	for (int32_t i = len - 2; i >= 0; --i) {
		sum = (x->get(i) & BigInteger::LONG_MASK) + carry;
		x->set(i, (int32_t)sum);
		carry = (int64_t)((uint64_t)sum >> 32);
	}
}

void BigInteger::init$($String* val) {
	BigInteger::init$(val, 10);
}

void BigInteger::init$(int32_t numBits, $Random* rnd) {
	$useLocalObjectStack();
	$Number::init$();
	$var($bytes, magnitude, randomBits(numBits, rnd));
	$var($Throwable, var$0, nullptr);
	try {
		$set(this, mag, stripLeadingZeroBytes(magnitude, 0, magnitude->length));
		if (this->mag->length == 0) {
			this->signum$ = 0;
		} else {
			this->signum$ = 1;
		}
		if ($nc(this->mag)->length >= BigInteger::MAX_MAG_LENGTH) {
			checkRange();
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Arrays::fill(magnitude, (int8_t)0);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

$bytes* BigInteger::randomBits(int32_t numBits, $Random* rnd) {
	$init(BigInteger);
	if (numBits < 0) {
		$throwNew($IllegalArgumentException, "numBits must be non-negative"_s);
	}
	int32_t numBytes = (int32_t)(((int64_t)numBits + 7) / 8);
	$var($bytes, randomBits, $new($bytes, numBytes));
	if (numBytes > 0) {
		$nc(rnd)->nextBytes(randomBits);
		int32_t excessBits = 8 * numBytes - numBits;
		(*randomBits)[0] &= (uint8_t)(($sl(1, 8 - excessBits)) - 1);
	}
	return randomBits;
}

void BigInteger::init$(int32_t bitLength, int32_t certainty, $Random* rnd) {
	$Number::init$();
	$var(BigInteger, prime, nullptr);
	if (bitLength < 2) {
		$throwNew($ArithmeticException, "bitLength < 2"_s);
	}
	$assign(prime, bitLength < BigInteger::SMALL_PRIME_THRESHOLD ? smallPrime(bitLength, certainty, rnd) : largePrime(bitLength, certainty, rnd));
	this->signum$ = 1;
	$set(this, mag, $nc(prime)->mag);
}

BigInteger* BigInteger::probablePrime(int32_t bitLength, $Random* rnd) {
	$init(BigInteger);
	if (bitLength < 2) {
		$throwNew($ArithmeticException, "bitLength < 2"_s);
	}
	return (bitLength < BigInteger::SMALL_PRIME_THRESHOLD ? smallPrime(bitLength, BigInteger::DEFAULT_PRIME_CERTAINTY, rnd) : largePrime(bitLength, BigInteger::DEFAULT_PRIME_CERTAINTY, rnd));
}

BigInteger* BigInteger::smallPrime(int32_t bitLength, int32_t certainty, $Random* rnd) {
	$init(BigInteger);
	$useLocalObjectStack();
	int32_t magLen = (int32_t)((uint32_t)(bitLength + 31) >> 5);
	$var($ints, temp, $new($ints, magLen));
	int32_t highBit = $sl(1, (bitLength + 31) & 0x1f);
	int32_t highMask = (highBit << 1) - 1;
	while (true) {
		for (int32_t i = 0; i < magLen; ++i) {
			temp->set(i, $nc(rnd)->nextInt());
		}
		temp->set(0, (temp->get(0) & highMask) | highBit);
		if (bitLength > 2) {
			(*temp)[magLen - 1] |= 1;
		}
		$var(BigInteger, p, $new(BigInteger, temp, 1));
		if (bitLength > 6) {
			int64_t r = $(p->remainder(BigInteger::SMALL_PRIME_PRODUCT))->longValue();
			if ((r % 3 == 0) || (r % 5 == 0) || (r % 7 == 0) || (r % 11 == 0) || (r % 13 == 0) || (r % 17 == 0) || (r % 19 == 0) || (r % 23 == 0) || (r % 29 == 0) || (r % 31 == 0) || (r % 37 == 0) || (r % 41 == 0)) {
				continue;
			}
		}
		if (bitLength < 4) {
			return p;
		}
		if (p->primeToCertainty(certainty, rnd)) {
			return p;
		}
	}
}

BigInteger* BigInteger::largePrime(int32_t bitLength, int32_t certainty, $Random* rnd) {
	$init(BigInteger);
	$useLocalObjectStack();
	$var(BigInteger, p, nullptr);
	$assign(p, $$new(BigInteger, bitLength, rnd)->setBit(bitLength - 1));
	(*$nc(p->mag))[$nc(p->mag)->length - 1] &= (uint32_t)-2;
	int32_t searchLen = getPrimeSearchLen(bitLength);
	$var($BitSieve, searchSieve, $new($BitSieve, p, searchLen));
	$var(BigInteger, candidate, searchSieve->retrieve(p, certainty, rnd));
	while ((candidate == nullptr) || (candidate->bitLength() != bitLength)) {
		$assign(p, p->add($(BigInteger::valueOf(2 * searchLen))));
		if (p->bitLength() != bitLength) {
			$assign(p, $$new(BigInteger, bitLength, rnd)->setBit(bitLength - 1));
		}
		(*p->mag)[p->mag->length - 1] &= (uint32_t)-2;
		$assign(searchSieve, $new($BitSieve, p, searchLen));
		$assign(candidate, searchSieve->retrieve(p, certainty, rnd));
	}
	return candidate;
}

BigInteger* BigInteger::nextProbablePrime() {
	$useLocalObjectStack();
	if (this->signum$ < 0) {
		$throwNew($ArithmeticException, $$str({"start < 0: "_s, this}));
	}
	if ((this->signum$ == 0) || this->equals(BigInteger::ONE)) {
		return BigInteger::TWO;
	}
	$var(BigInteger, result, this->add(BigInteger::ONE));
	if (result->bitLength() < BigInteger::SMALL_PRIME_THRESHOLD) {
		if (!result->testBit(0)) {
			$assign(result, result->add(BigInteger::ONE));
		}
		while (true) {
			if (result->bitLength() > 6) {
				int64_t r = $(result->remainder(BigInteger::SMALL_PRIME_PRODUCT))->longValue();
				if ((r % 3 == 0) || (r % 5 == 0) || (r % 7 == 0) || (r % 11 == 0) || (r % 13 == 0) || (r % 17 == 0) || (r % 19 == 0) || (r % 23 == 0) || (r % 29 == 0) || (r % 31 == 0) || (r % 37 == 0) || (r % 41 == 0)) {
					$assign(result, result->add(BigInteger::TWO));
					continue;
				}
			}
			if (result->bitLength() < 4) {
				return result;
			}
			if (result->primeToCertainty(BigInteger::DEFAULT_PRIME_CERTAINTY, nullptr)) {
				return result;
			}
			$assign(result, result->add(BigInteger::TWO));
		}
	}
	if (result->testBit(0)) {
		$assign(result, result->subtract(BigInteger::ONE));
	}
	int32_t searchLen = getPrimeSearchLen(result->bitLength());
	while (true) {
		$var($BitSieve, searchSieve, $new($BitSieve, result, searchLen));
		$var(BigInteger, candidate, searchSieve->retrieve(result, BigInteger::DEFAULT_PRIME_CERTAINTY, nullptr));
		if (candidate != nullptr) {
			return candidate;
		}
		$assign(result, result->add($(BigInteger::valueOf(2 * searchLen))));
	}
}

int32_t BigInteger::getPrimeSearchLen(int32_t bitLength) {
	$init(BigInteger);
	if (bitLength > BigInteger::PRIME_SEARCH_BIT_LENGTH_LIMIT + 1) {
		$throwNew($ArithmeticException, "Prime search implementation restriction on bitLength"_s);
	}
	return bitLength / 20 * 64;
}

bool BigInteger::primeToCertainty(int32_t certainty, $Random* random) {
	int32_t rounds = 0;
	int32_t n = ($Math::min(certainty, $Integer::MAX_VALUE - 1) + 1) / 2;
	int32_t sizeInBits = this->bitLength();
	if (sizeInBits < 100) {
		rounds = 50;
		rounds = n < rounds ? n : rounds;
		return passesMillerRabin(rounds, random);
	}
	if (sizeInBits < 256) {
		rounds = 27;
	} else if (sizeInBits < 512) {
		rounds = 15;
	} else if (sizeInBits < 768) {
		rounds = 8;
	} else if (sizeInBits < 1024) {
		rounds = 4;
	} else {
		rounds = 2;
	}
	rounds = n < rounds ? n : rounds;
	bool var$0 = passesMillerRabin(rounds, random);
	return var$0 && passesLucasLehmer();
}

bool BigInteger::passesLucasLehmer() {
	$useLocalObjectStack();
	$var(BigInteger, thisPlusOne, this->add(BigInteger::ONE));
	int32_t d = 5;
	while (jacobiSymbol(d, this) != -1) {
		d = (d < 0) ? $Math::abs(d) + 2 : -(d + 2);
	}
	$var(BigInteger, u, lucasLehmerSequence(d, thisPlusOne, this));
	return $(u->mod(this))->equals(BigInteger::ZERO);
}

int32_t BigInteger::jacobiSymbol(int32_t p, BigInteger* n) {
	$init(BigInteger);
	$useLocalObjectStack();
	if (p == 0) {
		return 0;
	}
	int32_t j = 1;
	int32_t u = $nc($nc(n)->mag)->get($nc($nc(n)->mag)->length - 1);
	if (p < 0) {
		p = -p;
		int32_t n8 = u & 7;
		if ((n8 == 3) || (n8 == 7)) {
			j = -j;
		}
	}
	while ((p & 3) == 0) {
		p >>= 2;
	}
	if ((p & 1) == 0) {
		p >>= 1;
		if (((u ^ (u >> 1)) & 2) != 0) {
			j = -j;
		}
	}
	if (p == 1) {
		return j;
	}
	if (((p & u) & 2) != 0) {
		j = -j;
	}
	u = $(n->mod($(BigInteger::valueOf(p))))->intValue();
	while (u != 0) {
		while ((u & 3) == 0) {
			u >>= 2;
		}
		if ((u & 1) == 0) {
			u >>= 1;
			if (((p ^ (p >> 1)) & 2) != 0) {
				j = -j;
			}
		}
		if (u == 1) {
			return j;
		}
		if (!BigInteger::$assertionsDisabled && !(u < p)) {
			$throwNew($AssertionError);
		}
		int32_t t = u;
		u = p;
		p = t;
		if (((u & p) & 2) != 0) {
			j = -j;
		}
		$modAssign(u, p);
	}
	return 0;
}

BigInteger* BigInteger::lucasLehmerSequence(int32_t z, BigInteger* k, BigInteger* n) {
	$init(BigInteger);
	$useLocalObjectStack();
	$var(BigInteger, d, BigInteger::valueOf(z));
	$var(BigInteger, u, BigInteger::ONE);
	$var(BigInteger, u2, nullptr);
	$var(BigInteger, v, BigInteger::ONE);
	$var(BigInteger, v2, nullptr);
	for (int32_t i = $nc(k)->bitLength() - 2; i >= 0; --i) {
		$assign(u2, $($nc(u)->multiply(v))->mod(n));
		$assign(v2, $($($nc(v)->square())->add($(d->multiply($(u->square())))))->mod(n));
		if (v2->testBit(0)) {
			$assign(v2, v2->subtract(n));
		}
		$assign(v2, v2->shiftRight(1));
		$assign(u, u2);
		$assign(v, v2);
		if (k->testBit(i)) {
			$assign(u2, $(u->add(v))->mod(n));
			if (u2->testBit(0)) {
				$assign(u2, u2->subtract(n));
			}
			$assign(u2, u2->shiftRight(1));
			$assign(v2, $(v->add($(d->multiply(u))))->mod(n));
			if (v2->testBit(0)) {
				$assign(v2, v2->subtract(n));
			}
			$assign(v2, v2->shiftRight(1));
			$assign(u, u2);
			$assign(v, v2);
		}
	}
	return u;
}

bool BigInteger::passesMillerRabin(int32_t iterations, $Random* rnd$renamed) {
	$useLocalObjectStack();
	$var($Random, rnd, rnd$renamed);
	$var(BigInteger, thisMinusOne, this->subtract(BigInteger::ONE));
	$var(BigInteger, m, thisMinusOne);
	int32_t a = m->getLowestSetBit();
	$assign(m, m->shiftRight(a));
	if (rnd == nullptr) {
		$assign(rnd, $ThreadLocalRandom::current());
	}
	for (int32_t i = 0; i < iterations; ++i) {
		$var(BigInteger, b, nullptr);
		bool var$0 = false;
		do {
			$assign(b, $new(BigInteger, this->bitLength(), rnd));
			var$0 = b->compareTo(BigInteger::ONE) <= 0;
		} while (var$0 || $nc(b)->compareTo(this) >= 0);
		int32_t j = 0;
		$var(BigInteger, z, $nc(b)->modPow(m, this));
		while (true) {
			bool var$1 = j == 0 && z->equals(BigInteger::ONE);
			if (!(!(var$1 || z->equals(thisMinusOne)))) {
				break;
			}
			{
				bool var$2 = j > 0 && z->equals(BigInteger::ONE);
				if (var$2 || ++j == a) {
					return false;
				}
				$assign(z, z->modPow(BigInteger::TWO, this));
			}
		}
	}
	return true;
}

void BigInteger::init$($ints* magnitude, int32_t signum) {
	$Number::init$();
	this->signum$ = ($nc(magnitude)->length == 0 ? 0 : signum);
	$set(this, mag, magnitude);
	if ($nc(this->mag)->length >= BigInteger::MAX_MAG_LENGTH) {
		checkRange();
	}
}

void BigInteger::init$($bytes* magnitude, int32_t signum) {
	$Number::init$();
	this->signum$ = ($nc(magnitude)->length == 0 ? 0 : signum);
	$set(this, mag, stripLeadingZeroBytes(magnitude, 0, magnitude->length));
	if ($nc(this->mag)->length >= BigInteger::MAX_MAG_LENGTH) {
		checkRange();
	}
}

void BigInteger::checkRange() {
	if ($nc(this->mag)->length > BigInteger::MAX_MAG_LENGTH || this->mag->length == BigInteger::MAX_MAG_LENGTH && this->mag->get(0) < 0) {
		reportOverflow();
	}
}

void BigInteger::reportOverflow() {
	$init(BigInteger);
	$throwNew($ArithmeticException, "BigInteger would overflow supported range"_s);
}

BigInteger* BigInteger::valueOf(int64_t val) {
	$init(BigInteger);
	if (val == 0) {
		return BigInteger::ZERO;
	}
	if (val > 0 && val <= BigInteger::MAX_CONSTANT) {
		return BigInteger::posConst->get((int32_t)val);
	} else if (val < 0 && val >= -BigInteger::MAX_CONSTANT) {
		return BigInteger::negConst->get((int32_t)-val);
	}
	return $new(BigInteger, val);
}

void BigInteger::init$(int64_t val) {
	$Number::init$();
	if (val < 0) {
		val = -val;
		this->signum$ = -1;
	} else {
		this->signum$ = 1;
	}
	int32_t highWord = (int32_t)((int64_t)((uint64_t)val >> 32));
	if (highWord == 0) {
		$set(this, mag, $new($ints, 1));
		this->mag->set(0, (int32_t)val);
	} else {
		$set(this, mag, $new($ints, 2));
		this->mag->set(0, highWord);
		this->mag->set(1, (int32_t)val);
	}
}

BigInteger* BigInteger::valueOf($ints* val) {
	$init(BigInteger);
	return ($nc(val)->get(0) > 0 ? $new(BigInteger, val, 1) : $new(BigInteger, val));
}

BigInteger* BigInteger::add(BigInteger* val) {
	$useLocalObjectStack();
	if ($nc(val)->signum$ == 0) {
		return this;
	}
	if (this->signum$ == 0) {
		return val;
	}
	if (val->signum$ == this->signum$) {
		return $new(BigInteger, $(add(this->mag, val->mag)), this->signum$);
	}
	int32_t cmp = compareMagnitude(val);
	if (cmp == 0) {
		return BigInteger::ZERO;
	}
	$var($ints, resultMag, cmp > 0 ? subtract(this->mag, val->mag) : subtract(val->mag, this->mag));
	$assign(resultMag, trustedStripLeadingZeroInts(resultMag));
	return $new(BigInteger, resultMag, cmp == this->signum$ ? 1 : -1);
}

BigInteger* BigInteger::add(int64_t val) {
	$useLocalObjectStack();
	if (val == 0) {
		return this;
	}
	if (this->signum$ == 0) {
		return valueOf(val);
	}
	if ($Long::signum(val) == this->signum$) {
		return $new(BigInteger, $(add(this->mag, $Math::abs(val))), this->signum$);
	}
	int32_t cmp = compareMagnitude(val);
	if (cmp == 0) {
		return BigInteger::ZERO;
	}
	$var($ints, resultMag, cmp > 0 ? subtract(this->mag, $Math::abs(val)) : subtract($Math::abs(val), this->mag));
	$assign(resultMag, trustedStripLeadingZeroInts(resultMag));
	return $new(BigInteger, resultMag, cmp == this->signum$ ? 1 : -1);
}

$ints* BigInteger::add($ints* x, int64_t val) {
	$init(BigInteger);
	$useLocalObjectStack();
	$var($ints, y, nullptr);
	int64_t sum = 0;
	int32_t xIndex = $nc(x)->length;
	$var($ints, result, nullptr);
	int32_t highWord = (int32_t)((int64_t)((uint64_t)val >> 32));
	if (highWord == 0) {
		$assign(result, $new($ints, xIndex));
		sum = (x->get(--xIndex) & BigInteger::LONG_MASK) + val;
		result->set(xIndex, (int32_t)sum);
	} else if (xIndex == 1) {
		$assign(result, $new($ints, 2));
		sum = val + (x->get(0) & BigInteger::LONG_MASK);
		result->set(1, (int32_t)sum);
		result->set(0, (int32_t)((int64_t)((uint64_t)sum >> 32)));
		return result;
	} else {
		$assign(result, $new($ints, xIndex));
		sum = (x->get(--xIndex) & BigInteger::LONG_MASK) + (val & BigInteger::LONG_MASK);
		result->set(xIndex, (int32_t)sum);
		sum = (x->get(--xIndex) & BigInteger::LONG_MASK) + (highWord & BigInteger::LONG_MASK) + ((int64_t)((uint64_t)sum >> 32));
		result->set(xIndex, (int32_t)sum);
	}
	bool carry = ((int64_t)((uint64_t)sum >> 32) != 0);
	while (xIndex > 0 && carry) {
		int32_t var$0 = --xIndex;
		carry = (($nc(result)->set(var$0, x->get(xIndex) + 1)) == 0);
	}
	while (xIndex > 0) {
		int32_t var$1 = --xIndex;
		$nc(result)->set(var$1, x->get(xIndex));
	}
	if (carry) {
		$var($ints, bigger, $new($ints, $nc(result)->length + 1));
		$System::arraycopy(result, 0, bigger, 1, result->length);
		bigger->set(0, 1);
		return bigger;
	}
	return result;
}

$ints* BigInteger::add($ints* x$renamed, $ints* y$renamed) {
	$init(BigInteger);
	$useLocalObjectStack();
	$var($ints, x, x$renamed);
	$var($ints, y, y$renamed);
	if ($nc(x)->length < $nc(y)->length) {
		$var($ints, tmp, x);
		$assign(x, y);
		$assign(y, tmp);
	}
	int32_t xIndex = x->length;
	int32_t yIndex = y->length;
	$var($ints, result, $new($ints, xIndex));
	int64_t sum = 0;
	if (yIndex == 1) {
		sum = (x->get(--xIndex) & BigInteger::LONG_MASK) + (y->get(0) & BigInteger::LONG_MASK);
		result->set(xIndex, (int32_t)sum);
	} else {
		while (yIndex > 0) {
			sum = (x->get(--xIndex) & BigInteger::LONG_MASK) + (y->get(--yIndex) & BigInteger::LONG_MASK) + ((int64_t)((uint64_t)sum >> 32));
			result->set(xIndex, (int32_t)sum);
		}
	}
	bool carry = ((int64_t)((uint64_t)sum >> 32) != 0);
	while (xIndex > 0 && carry) {
		int32_t var$0 = --xIndex;
		carry = ((result->set(var$0, x->get(xIndex) + 1)) == 0);
	}
	while (xIndex > 0) {
		int32_t var$1 = --xIndex;
		result->set(var$1, x->get(xIndex));
	}
	if (carry) {
		$var($ints, bigger, $new($ints, result->length + 1));
		$System::arraycopy(result, 0, bigger, 1, result->length);
		bigger->set(0, 1);
		return bigger;
	}
	return result;
}

$ints* BigInteger::subtract(int64_t val, $ints* little) {
	$init(BigInteger);
	$useLocalObjectStack();
	int32_t highWord = (int32_t)((int64_t)((uint64_t)val >> 32));
	if (highWord == 0) {
		$var($ints, result, $new($ints, 1));
		result->set(0, (int32_t)(val - ($nc(little)->get(0) & BigInteger::LONG_MASK)));
		return result;
	} else {
		$var($ints, result, $new($ints, 2));
		if ($nc(little)->length == 1) {
			int64_t difference = ((int32_t)val & BigInteger::LONG_MASK) - (little->get(0) & BigInteger::LONG_MASK);
			result->set(1, (int32_t)difference);
			bool borrow = (difference >> 32 != 0);
			if (borrow) {
				result->set(0, highWord - 1);
			} else {
				result->set(0, highWord);
			}
			return result;
		} else {
			int64_t difference = ((int32_t)val & BigInteger::LONG_MASK) - (little->get(1) & BigInteger::LONG_MASK);
			result->set(1, (int32_t)difference);
			difference = (highWord & BigInteger::LONG_MASK) - (little->get(0) & BigInteger::LONG_MASK) + (difference >> 32);
			result->set(0, (int32_t)difference);
			return result;
		}
	}
}

$ints* BigInteger::subtract($ints* big, int64_t val) {
	$init(BigInteger);
	int32_t highWord = (int32_t)((int64_t)((uint64_t)val >> 32));
	int32_t bigIndex = $nc(big)->length;
	$var($ints, result, $new($ints, bigIndex));
	int64_t difference = 0;
	if (highWord == 0) {
		difference = (big->get(--bigIndex) & BigInteger::LONG_MASK) - val;
		result->set(bigIndex, (int32_t)difference);
	} else {
		difference = (big->get(--bigIndex) & BigInteger::LONG_MASK) - (val & BigInteger::LONG_MASK);
		result->set(bigIndex, (int32_t)difference);
		difference = (big->get(--bigIndex) & BigInteger::LONG_MASK) - (highWord & BigInteger::LONG_MASK) + (difference >> 32);
		result->set(bigIndex, (int32_t)difference);
	}
	bool borrow = (difference >> 32 != 0);
	while (bigIndex > 0 && borrow) {
		int32_t var$0 = --bigIndex;
		borrow = ((result->set(var$0, big->get(bigIndex) - 1)) == -1);
	}
	while (bigIndex > 0) {
		int32_t var$1 = --bigIndex;
		result->set(var$1, big->get(bigIndex));
	}
	return result;
}

BigInteger* BigInteger::subtract(BigInteger* val) {
	$useLocalObjectStack();
	if ($nc(val)->signum$ == 0) {
		return this;
	}
	if (this->signum$ == 0) {
		return val->negate();
	}
	if (val->signum$ != this->signum$) {
		return $new(BigInteger, $(add(this->mag, val->mag)), this->signum$);
	}
	int32_t cmp = compareMagnitude(val);
	if (cmp == 0) {
		return BigInteger::ZERO;
	}
	$var($ints, resultMag, cmp > 0 ? subtract(this->mag, val->mag) : subtract(val->mag, this->mag));
	$assign(resultMag, trustedStripLeadingZeroInts(resultMag));
	return $new(BigInteger, resultMag, cmp == this->signum$ ? 1 : -1);
}

$ints* BigInteger::subtract($ints* big, $ints* little) {
	$init(BigInteger);
	int32_t bigIndex = $nc(big)->length;
	$var($ints, result, $new($ints, bigIndex));
	int32_t littleIndex = $nc(little)->length;
	int64_t difference = 0;
	while (littleIndex > 0) {
		difference = (big->get(--bigIndex) & BigInteger::LONG_MASK) - (little->get(--littleIndex) & BigInteger::LONG_MASK) + (difference >> 32);
		result->set(bigIndex, (int32_t)difference);
	}
	bool borrow = (difference >> 32 != 0);
	while (bigIndex > 0 && borrow) {
		int32_t var$0 = --bigIndex;
		borrow = ((result->set(var$0, big->get(bigIndex) - 1)) == -1);
	}
	while (bigIndex > 0) {
		int32_t var$1 = --bigIndex;
		result->set(var$1, big->get(bigIndex));
	}
	return result;
}

BigInteger* BigInteger::multiply(BigInteger* val) {
	return multiply(val, false);
}

BigInteger* BigInteger::multiply(BigInteger* val, bool isRecursion) {
	if ($nc(val)->signum$ == 0 || this->signum$ == 0) {
		return BigInteger::ZERO;
	}
	int32_t xlen = $nc(this->mag)->length;
	if (val == this && xlen > BigInteger::MULTIPLY_SQUARE_THRESHOLD) {
		return square();
	}
	int32_t ylen = $nc(val->mag)->length;
	if ((xlen < BigInteger::KARATSUBA_THRESHOLD) || (ylen < BigInteger::KARATSUBA_THRESHOLD)) {
		int32_t resultSign = this->signum$ == val->signum$ ? 1 : -1;
		if (val->mag->length == 1) {
			return multiplyByInt(this->mag, val->mag->get(0), resultSign);
		}
		if (this->mag->length == 1) {
			return multiplyByInt(val->mag, this->mag->get(0), resultSign);
		}
		$var($ints, result, multiplyToLen(this->mag, xlen, val->mag, ylen, nullptr));
		$assign(result, trustedStripLeadingZeroInts(result));
		return $new(BigInteger, result, resultSign);
	} else if ((xlen < BigInteger::TOOM_COOK_THRESHOLD) && (ylen < BigInteger::TOOM_COOK_THRESHOLD)) {
		return multiplyKaratsuba(this, val);
	} else {
		if (!isRecursion) {
			int32_t var$0 = bitLength(this->mag, this->mag->length);
			if (var$0 + bitLength(val->mag, val->mag->length) > (int64_t)32 * BigInteger::MAX_MAG_LENGTH) {
				reportOverflow();
			}
		}
		return multiplyToomCook3(this, val);
	}
}

BigInteger* BigInteger::multiplyByInt($ints* x, int32_t y, int32_t sign) {
	$init(BigInteger);
	$useLocalObjectStack();
	if ($Integer::bitCount(y) == 1) {
		return $new(BigInteger, $(shiftLeft(x, $Integer::numberOfTrailingZeros(y))), sign);
	}
	int32_t xlen = $nc(x)->length;
	$var($ints, rmag, $new($ints, xlen + 1));
	int64_t carry = 0;
	int64_t yl = y & BigInteger::LONG_MASK;
	int32_t rstart = rmag->length - 1;
	for (int32_t i = xlen - 1; i >= 0; --i) {
		int64_t product = (x->get(i) & BigInteger::LONG_MASK) * yl + carry;
		rmag->set(rstart--, (int32_t)product);
		carry = (int64_t)((uint64_t)product >> 32);
	}
	if (carry == 0) {
		$assign(rmag, $Arrays::copyOfRange(rmag, 1, rmag->length));
	} else {
		rmag->set(rstart, (int32_t)carry);
	}
	return $new(BigInteger, rmag, sign);
}

BigInteger* BigInteger::multiply(int64_t v) {
	$useLocalObjectStack();
	if (v == 0 || this->signum$ == 0) {
		return BigInteger::ZERO;
	}
	if (v == $BigDecimal::INFLATED) {
		return multiply($(BigInteger::valueOf(v)));
	}
	int32_t rsign = (v > 0 ? this->signum$ : -this->signum$);
	if (v < 0) {
		v = -v;
	}
	int64_t dh = (int64_t)((uint64_t)v >> 32);
	int64_t dl = v & BigInteger::LONG_MASK;
	int32_t xlen = $nc(this->mag)->length;
	$var($ints, value, this->mag);
	$var($ints, rmag, (dh == 0) ? ($new($ints, xlen + 1)) : ($new($ints, xlen + 2)));
	int64_t carry = 0;
	int32_t rstart = $nc(rmag)->length - 1;
	for (int32_t i = xlen - 1; i >= 0; --i) {
		int64_t product = ($nc(value)->get(i) & BigInteger::LONG_MASK) * dl + carry;
		rmag->set(rstart--, (int32_t)product);
		carry = (int64_t)((uint64_t)product >> 32);
	}
	rmag->set(rstart, (int32_t)carry);
	if (dh != 0) {
		carry = 0;
		rstart = rmag->length - 2;
		for (int32_t i = xlen - 1; i >= 0; --i) {
			int64_t product = ($nc(value)->get(i) & BigInteger::LONG_MASK) * dh + (rmag->get(rstart) & BigInteger::LONG_MASK) + carry;
			rmag->set(rstart--, (int32_t)product);
			carry = (int64_t)((uint64_t)product >> 32);
		}
		rmag->set(0, (int32_t)carry);
	}
	if (carry == 0) {
		$assign(rmag, $Arrays::copyOfRange(rmag, 1, rmag->length));
	}
	return $new(BigInteger, rmag, rsign);
}

$ints* BigInteger::multiplyToLen($ints* x, int32_t xlen, $ints* y, int32_t ylen, $ints* z) {
	$init(BigInteger);
	multiplyToLenCheck(x, xlen);
	multiplyToLenCheck(y, ylen);
	return implMultiplyToLen(x, xlen, y, ylen, z);
}

$ints* BigInteger::implMultiplyToLen($ints* x, int32_t xlen, $ints* y, int32_t ylen, $ints* z$renamed) {
	$init(BigInteger);
	$var($ints, z, z$renamed);
	int32_t xstart = xlen - 1;
	int32_t ystart = ylen - 1;
	if (z == nullptr || z->length < (xlen + ylen)) {
		$assign(z, $new($ints, xlen + ylen));
	}
	int64_t carry = 0;
	for (int32_t j = ystart, k = ystart + 1 + xstart; j >= 0; --j, --k) {
		int64_t product = ($nc(y)->get(j) & BigInteger::LONG_MASK) * ($nc(x)->get(xstart) & BigInteger::LONG_MASK) + carry;
		$nc(z)->set(k, (int32_t)product);
		carry = (int64_t)((uint64_t)product >> 32);
	}
	$nc(z)->set(xstart, (int32_t)carry);
	for (int32_t i = xstart - 1; i >= 0; --i) {
		carry = 0;
		for (int32_t j = ystart, k = ystart + 1 + i; j >= 0; --j, --k) {
			int64_t product = ($nc(y)->get(j) & BigInteger::LONG_MASK) * ($nc(x)->get(i) & BigInteger::LONG_MASK) + (z->get(k) & BigInteger::LONG_MASK) + carry;
			z->set(k, (int32_t)product);
			carry = (int64_t)((uint64_t)product >> 32);
		}
		z->set(i, (int32_t)carry);
	}
	return z;
}

void BigInteger::multiplyToLenCheck($ints* array, int32_t length) {
	$init(BigInteger);
	if (length <= 0) {
		return;
	}
	$Objects::requireNonNull(array);
	if (length > array->length) {
		$throwNew($ArrayIndexOutOfBoundsException, length - 1);
	}
}

BigInteger* BigInteger::multiplyKaratsuba(BigInteger* x, BigInteger* y) {
	$init(BigInteger);
	$useLocalObjectStack();
	int32_t xlen = $nc($nc(x)->mag)->length;
	int32_t ylen = $nc($nc(y)->mag)->length;
	int32_t half = ($Math::max(xlen, ylen) + 1) / 2;
	$var(BigInteger, xl, x->getLower(half));
	$var(BigInteger, xh, x->getUpper(half));
	$var(BigInteger, yl, y->getLower(half));
	$var(BigInteger, yh, y->getUpper(half));
	$var(BigInteger, p1, xh->multiply(yh));
	$var(BigInteger, p2, xl->multiply(yl));
	$var(BigInteger, p3, $(xh->add(xl))->multiply($(yh->add(yl))));
	$var(BigInteger, result, $($($(p1->shiftLeft(32 * half))->add($($(p3->subtract(p1))->subtract(p2))))->shiftLeft(32 * half))->add(p2));
	if (x->signum$ != y->signum$) {
		return result->negate();
	} else {
		return result;
	}
}

BigInteger* BigInteger::multiplyToomCook3(BigInteger* a, BigInteger* b) {
	$init(BigInteger);
	$useLocalObjectStack();
	int32_t alen = $nc($nc(a)->mag)->length;
	int32_t blen = $nc($nc(b)->mag)->length;
	int32_t largest = $Math::max(alen, blen);
	int32_t k = (largest + 2) / 3;
	int32_t r = largest - 2 * k;
	$var(BigInteger, a0, nullptr);
	$var(BigInteger, a1, nullptr);
	$var(BigInteger, a2, nullptr);
	$var(BigInteger, b0, nullptr);
	$var(BigInteger, b1, nullptr);
	$var(BigInteger, b2, nullptr);
	$assign(a2, a->getToomSlice(k, r, 0, largest));
	$assign(a1, a->getToomSlice(k, r, 1, largest));
	$assign(a0, a->getToomSlice(k, r, 2, largest));
	$assign(b2, b->getToomSlice(k, r, 0, largest));
	$assign(b1, b->getToomSlice(k, r, 1, largest));
	$assign(b0, b->getToomSlice(k, r, 2, largest));
	$var(BigInteger, v0, nullptr);
	$var(BigInteger, v1, nullptr);
	$var(BigInteger, v2, nullptr);
	$var(BigInteger, vm1, nullptr);
	$var(BigInteger, vinf, nullptr);
	$var(BigInteger, t1, nullptr);
	$var(BigInteger, t2, nullptr);
	$var(BigInteger, tm1, nullptr);
	$var(BigInteger, da1, nullptr);
	$var(BigInteger, db1, nullptr);
	$assign(v0, a0->multiply(b0, true));
	$assign(da1, a2->add(a0));
	$assign(db1, b2->add(b0));
	$assign(vm1, $(da1->subtract(a1))->multiply($(db1->subtract(b1)), true));
	$assign(da1, da1->add(a1));
	$assign(db1, db1->add(b1));
	$assign(v1, da1->multiply(db1, true));
	$assign(v2, $($($(da1->add(a2))->shiftLeft(1))->subtract(a0))->multiply($($($(db1->add(b2))->shiftLeft(1))->subtract(b0)), true));
	$assign(vinf, a2->multiply(b2, true));
	$assign(t2, $(v2->subtract(vm1))->exactDivideBy3());
	$assign(tm1, $(v1->subtract(vm1))->shiftRight(1));
	$assign(t1, v1->subtract(v0));
	$assign(t2, $(t2->subtract(t1))->shiftRight(1));
	$assign(t1, $(t1->subtract(tm1))->subtract(vinf));
	$assign(t2, t2->subtract($(vinf->shiftLeft(1))));
	$assign(tm1, tm1->subtract(t2));
	int32_t ss = k * 32;
	$var(BigInteger, result, $($($($($($($(vinf->shiftLeft(ss))->add(t2))->shiftLeft(ss))->add(t1))->shiftLeft(ss))->add(tm1))->shiftLeft(ss))->add(v0));
	if (a->signum$ != b->signum$) {
		return result->negate();
	} else {
		return result;
	}
}

BigInteger* BigInteger::getToomSlice(int32_t lowerSize, int32_t upperSize, int32_t slice, int32_t fullsize) {
	$useLocalObjectStack();
	int32_t start = 0;
	int32_t end = 0;
	int32_t sliceSize = 0;
	int32_t len = 0;
	int32_t offset = 0;
	len = $nc(this->mag)->length;
	offset = fullsize - len;
	if (slice == 0) {
		start = 0 - offset;
		end = upperSize - 1 - offset;
	} else {
		start = upperSize + (slice - 1) * lowerSize - offset;
		end = start + lowerSize - 1;
	}
	if (start < 0) {
		start = 0;
	}
	if (end < 0) {
		return BigInteger::ZERO;
	}
	sliceSize = (end - start) + 1;
	if (sliceSize <= 0) {
		return BigInteger::ZERO;
	}
	if (start == 0 && sliceSize >= len) {
		return this->abs();
	}
	$var($ints, intSlice, $new($ints, sliceSize));
	$System::arraycopy(this->mag, start, intSlice, 0, sliceSize);
	return $new(BigInteger, $(trustedStripLeadingZeroInts(intSlice)), 1);
}

BigInteger* BigInteger::exactDivideBy3() {
	int32_t len = $nc(this->mag)->length;
	$var($ints, result, $new($ints, len));
	int64_t x = 0;
	int64_t w = 0;
	int64_t q = 0;
	int64_t borrow = 0;
	borrow = 0;
	for (int32_t i = len - 1; i >= 0; --i) {
		x = (this->mag->get(i) & BigInteger::LONG_MASK);
		w = x - borrow;
		if (borrow > x) {
			borrow = 1;
		} else {
			borrow = 0;
		}
		q = (w * (int64_t)0x00000000aaaaaaab) & BigInteger::LONG_MASK;
		result->set(i, (int32_t)q);
		if (q >= 1431655766) {
			++borrow;
			if (q >= (int64_t)0x00000000aaaaaaab) {
				++borrow;
			}
		}
	}
	$assign(result, trustedStripLeadingZeroInts(result));
	return $new(BigInteger, result, this->signum$);
}

BigInteger* BigInteger::getLower(int32_t n) {
	$useLocalObjectStack();
	int32_t len = $nc(this->mag)->length;
	if (len <= n) {
		return abs();
	}
	$var($ints, lowerInts, $new($ints, n));
	$System::arraycopy(this->mag, len - n, lowerInts, 0, n);
	return $new(BigInteger, $(trustedStripLeadingZeroInts(lowerInts)), 1);
}

BigInteger* BigInteger::getUpper(int32_t n) {
	$useLocalObjectStack();
	int32_t len = $nc(this->mag)->length;
	if (len <= n) {
		return BigInteger::ZERO;
	}
	int32_t upperLen = len - n;
	$var($ints, upperInts, $new($ints, upperLen));
	$System::arraycopy(this->mag, 0, upperInts, 0, upperLen);
	return $new(BigInteger, $(trustedStripLeadingZeroInts(upperInts)), 1);
}

BigInteger* BigInteger::square() {
	return square(false);
}

BigInteger* BigInteger::square(bool isRecursion) {
	$useLocalObjectStack();
	if (this->signum$ == 0) {
		return BigInteger::ZERO;
	}
	int32_t len = $nc(this->mag)->length;
	if (len < BigInteger::KARATSUBA_SQUARE_THRESHOLD) {
		$var($ints, z, squareToLen(this->mag, len, nullptr));
		return $new(BigInteger, $(trustedStripLeadingZeroInts(z)), 1);
	} else if (len < BigInteger::TOOM_COOK_SQUARE_THRESHOLD) {
		return squareKaratsuba();
	} else {
		if (!isRecursion) {
			if (bitLength(this->mag, this->mag->length) > (int64_t)16 * BigInteger::MAX_MAG_LENGTH) {
				reportOverflow();
			}
		}
		return squareToomCook3();
	}
}

$ints* BigInteger::squareToLen($ints* x, int32_t len, $ints* z$renamed) {
	$init(BigInteger);
	$var($ints, z, z$renamed);
	int32_t zlen = len << 1;
	if (z == nullptr || z->length < zlen) {
		$assign(z, $new($ints, zlen));
	}
	implSquareToLenChecks(x, len, z, zlen);
	return implSquareToLen(x, len, z, zlen);
}

void BigInteger::implSquareToLenChecks($ints* x, int32_t len, $ints* z, int32_t zlen) {
	$init(BigInteger);
	$useLocalObjectStack();
	if (len < 1) {
		$throwNew($IllegalArgumentException, $$str({"invalid input length: "_s, $$str(len)}));
	}
	if (len > $nc(x)->length) {
		$throwNew($IllegalArgumentException, $$str({"input length out of bound: "_s, $$str(len), " > "_s, $$str(x->length)}));
	}
	if (len * 2 > $nc(z)->length) {
		$throwNew($IllegalArgumentException, $$str({"input length out of bound: "_s, $$str((len * 2)), " > "_s, $$str(z->length)}));
	}
	if (zlen < 1) {
		$throwNew($IllegalArgumentException, $$str({"invalid input length: "_s, $$str(zlen)}));
	}
	if (zlen > z->length) {
		$throwNew($IllegalArgumentException, $$str({"input length out of bound: "_s, $$str(len), " > "_s, $$str(z->length)}));
	}
}

$ints* BigInteger::implSquareToLen($ints* x, int32_t len, $ints* z, int32_t zlen) {
	$init(BigInteger);
	int32_t lastProductLowWord = 0;
	for (int32_t j = 0, i = 0; j < len; ++j) {
		int64_t piece = ($nc(x)->get(j) & BigInteger::LONG_MASK);
		int64_t product = piece * piece;
		$nc(z)->set(i++, (lastProductLowWord << 31) | (int32_t)((int64_t)((uint64_t)product >> 33)));
		z->set(i++, (int32_t)((int64_t)((uint64_t)product >> 1)));
		lastProductLowWord = (int32_t)product;
	}
	for (int32_t i = len, offset = 1; i > 0; --i, offset += 2) {
		int32_t t = $nc(x)->get(i - 1);
		t = mulAdd(z, x, offset, i - 1, t);
		addOne(z, offset - 1, i, t);
	}
	primitiveLeftShift(z, zlen, 1);
	(*$nc(z))[zlen - 1] |= $nc(x)->get(len - 1) & 1;
	return z;
}

BigInteger* BigInteger::squareKaratsuba() {
	$useLocalObjectStack();
	int32_t half = ($nc(this->mag)->length + 1) / 2;
	$var(BigInteger, xl, getLower(half));
	$var(BigInteger, xh, getUpper(half));
	$var(BigInteger, xhs, xh->square());
	$var(BigInteger, xls, xl->square());
	return $($($(xhs->shiftLeft(half * 32))->add($($($(xl->add(xh))->square())->subtract($(xhs->add(xls))))))->shiftLeft(half * 32))->add(xls);
}

BigInteger* BigInteger::squareToomCook3() {
	$useLocalObjectStack();
	int32_t len = $nc(this->mag)->length;
	int32_t k = (len + 2) / 3;
	int32_t r = len - 2 * k;
	$var(BigInteger, a0, nullptr);
	$var(BigInteger, a1, nullptr);
	$var(BigInteger, a2, nullptr);
	$assign(a2, getToomSlice(k, r, 0, len));
	$assign(a1, getToomSlice(k, r, 1, len));
	$assign(a0, getToomSlice(k, r, 2, len));
	$var(BigInteger, v0, nullptr);
	$var(BigInteger, v1, nullptr);
	$var(BigInteger, v2, nullptr);
	$var(BigInteger, vm1, nullptr);
	$var(BigInteger, vinf, nullptr);
	$var(BigInteger, t1, nullptr);
	$var(BigInteger, t2, nullptr);
	$var(BigInteger, tm1, nullptr);
	$var(BigInteger, da1, nullptr);
	$assign(v0, a0->square(true));
	$assign(da1, a2->add(a0));
	$assign(vm1, $(da1->subtract(a1))->square(true));
	$assign(da1, da1->add(a1));
	$assign(v1, da1->square(true));
	$assign(vinf, a2->square(true));
	$assign(v2, $($($(da1->add(a2))->shiftLeft(1))->subtract(a0))->square(true));
	$assign(t2, $(v2->subtract(vm1))->exactDivideBy3());
	$assign(tm1, $(v1->subtract(vm1))->shiftRight(1));
	$assign(t1, v1->subtract(v0));
	$assign(t2, $(t2->subtract(t1))->shiftRight(1));
	$assign(t1, $(t1->subtract(tm1))->subtract(vinf));
	$assign(t2, t2->subtract($(vinf->shiftLeft(1))));
	$assign(tm1, tm1->subtract(t2));
	int32_t ss = k * 32;
	return $($($($($($($(vinf->shiftLeft(ss))->add(t2))->shiftLeft(ss))->add(t1))->shiftLeft(ss))->add(tm1))->shiftLeft(ss))->add(v0);
}

BigInteger* BigInteger::divide(BigInteger* val) {
	if ($nc($nc(val)->mag)->length < BigInteger::BURNIKEL_ZIEGLER_THRESHOLD || $nc(this->mag)->length - val->mag->length < BigInteger::BURNIKEL_ZIEGLER_OFFSET) {
		return divideKnuth(val);
	} else {
		return divideBurnikelZiegler(val);
	}
}

BigInteger* BigInteger::divideKnuth(BigInteger* val) {
	$useLocalObjectStack();
	$var($MutableBigInteger, q, $new($MutableBigInteger));
	$var($MutableBigInteger, a, $new($MutableBigInteger, this->mag));
	$var($MutableBigInteger, b, $new($MutableBigInteger, $nc(val)->mag));
	a->divideKnuth(b, q, false);
	return q->toBigInteger(this->signum$ * val->signum$);
}

$BigIntegerArray* BigInteger::divideAndRemainder(BigInteger* val) {
	if ($nc($nc(val)->mag)->length < BigInteger::BURNIKEL_ZIEGLER_THRESHOLD || $nc(this->mag)->length - val->mag->length < BigInteger::BURNIKEL_ZIEGLER_OFFSET) {
		return divideAndRemainderKnuth(val);
	} else {
		return divideAndRemainderBurnikelZiegler(val);
	}
}

$BigIntegerArray* BigInteger::divideAndRemainderKnuth(BigInteger* val) {
	$useLocalObjectStack();
	$var($BigIntegerArray, result, $new($BigIntegerArray, 2));
	$var($MutableBigInteger, q, $new($MutableBigInteger));
	$var($MutableBigInteger, a, $new($MutableBigInteger, this->mag));
	$var($MutableBigInteger, b, $new($MutableBigInteger, $nc(val)->mag));
	$var($MutableBigInteger, r, a->divideKnuth(b, q));
	result->set(0, $(q->toBigInteger(this->signum$ == val->signum$ ? 1 : -1)));
	result->set(1, $($nc(r)->toBigInteger(this->signum$)));
	return result;
}

BigInteger* BigInteger::remainder(BigInteger* val) {
	if ($nc($nc(val)->mag)->length < BigInteger::BURNIKEL_ZIEGLER_THRESHOLD || $nc(this->mag)->length - val->mag->length < BigInteger::BURNIKEL_ZIEGLER_OFFSET) {
		return remainderKnuth(val);
	} else {
		return remainderBurnikelZiegler(val);
	}
}

BigInteger* BigInteger::remainderKnuth(BigInteger* val) {
	$useLocalObjectStack();
	$var($MutableBigInteger, q, $new($MutableBigInteger));
	$var($MutableBigInteger, a, $new($MutableBigInteger, this->mag));
	$var($MutableBigInteger, b, $new($MutableBigInteger, $nc(val)->mag));
	return $$nc(a->divideKnuth(b, q))->toBigInteger(this->signum$);
}

BigInteger* BigInteger::divideBurnikelZiegler(BigInteger* val) {
	return $nc($(divideAndRemainderBurnikelZiegler(val)))->get(0);
}

BigInteger* BigInteger::remainderBurnikelZiegler(BigInteger* val) {
	return $nc($(divideAndRemainderBurnikelZiegler(val)))->get(1);
}

$BigIntegerArray* BigInteger::divideAndRemainderBurnikelZiegler(BigInteger* val) {
	$useLocalObjectStack();
	$var($MutableBigInteger, q, $new($MutableBigInteger));
	$var($MutableBigInteger, r, $$new($MutableBigInteger, this)->divideAndRemainderBurnikelZiegler($$new($MutableBigInteger, val), q));
	$var(BigInteger, qBigInt, q->isZero() ? BigInteger::ZERO : q->toBigInteger(this->signum$ * $nc(val)->signum$));
	$var(BigInteger, rBigInt, $nc(r)->isZero() ? BigInteger::ZERO : r->toBigInteger(this->signum$));
	return $new($BigIntegerArray, {
		qBigInt,
		rBigInt
	});
}

BigInteger* BigInteger::pow(int32_t exponent) {
	$useLocalObjectStack();
	if (exponent < 0) {
		$throwNew($ArithmeticException, "Negative exponent"_s);
	}
	if (this->signum$ == 0) {
		return (exponent == 0 ? BigInteger::ONE : this);
	}
	$var(BigInteger, partToSquare, this->abs());
	int32_t powersOfTwo = partToSquare->getLowestSetBit();
	int64_t bitsToShiftLong = (int64_t)powersOfTwo * exponent;
	if (bitsToShiftLong > $Integer::MAX_VALUE) {
		reportOverflow();
	}
	int32_t bitsToShift = (int32_t)bitsToShiftLong;
	int32_t remainingBits = 0;
	if (powersOfTwo > 0) {
		$assign(partToSquare, partToSquare->shiftRight(powersOfTwo));
		remainingBits = partToSquare->bitLength();
		if (remainingBits == 1) {
			if (this->signum$ < 0 && (exponent & 1) == 1) {
				return BigInteger::NEGATIVE_ONE->shiftLeft(bitsToShift);
			} else {
				return BigInteger::ONE->shiftLeft(bitsToShift);
			}
		}
	} else {
		remainingBits = partToSquare->bitLength();
		if (remainingBits == 1) {
			if (this->signum$ < 0 && (exponent & 1) == 1) {
				return BigInteger::NEGATIVE_ONE;
			} else {
				return BigInteger::ONE;
			}
		}
	}
	int64_t scaleFactor = (int64_t)remainingBits * exponent;
	if ($nc(partToSquare->mag)->length == 1 && scaleFactor <= 62) {
		int32_t newSign = (this->signum$ < 0 && (exponent & 1) == 1 ? -1 : 1);
		int64_t result = 1;
		int64_t baseToPow2 = partToSquare->mag->get(0) & BigInteger::LONG_MASK;
		int32_t workingExponent = exponent;
		while (workingExponent != 0) {
			if ((workingExponent & 1) == 1) {
				result = result * baseToPow2;
			}
			if (($usrAssign(workingExponent, 1)) != 0) {
				baseToPow2 = baseToPow2 * baseToPow2;
			}
		}
		if (powersOfTwo > 0) {
			if (bitsToShift + scaleFactor <= 62) {
				return valueOf(($sl(result, bitsToShift)) * newSign);
			} else {
				return $$nc(valueOf(result * newSign))->shiftLeft(bitsToShift);
			}
		} else {
			return valueOf(result * newSign);
		}
	} else {
		if ($div((int64_t)bitLength() * exponent, $Integer::SIZE) > BigInteger::MAX_MAG_LENGTH) {
			reportOverflow();
		}
		$var(BigInteger, answer, BigInteger::ONE);
		int32_t workingExponent = exponent;
		while (workingExponent != 0) {
			if ((workingExponent & 1) == 1) {
				$assign(answer, $nc(answer)->multiply(partToSquare));
			}
			if (($usrAssign(workingExponent, 1)) != 0) {
				$assign(partToSquare, partToSquare->square());
			}
		}
		if (powersOfTwo > 0) {
			$assign(answer, $nc(answer)->shiftLeft(bitsToShift));
		}
		if (this->signum$ < 0 && (exponent & 1) == 1) {
			return $nc(answer)->negate();
		} else {
			return answer;
		}
	}
}

BigInteger* BigInteger::sqrt() {
	$useLocalObjectStack();
	if (this->signum$ < 0) {
		$throwNew($ArithmeticException, "Negative BigInteger"_s);
	}
	return $$nc($$new($MutableBigInteger, this->mag)->sqrt())->toBigInteger();
}

$BigIntegerArray* BigInteger::sqrtAndRemainder() {
	$useLocalObjectStack();
	$var(BigInteger, s, sqrt());
	$var(BigInteger, r, this->subtract($(s->square())));
	if (!BigInteger::$assertionsDisabled && !(r->compareTo(BigInteger::ZERO) >= 0)) {
		$throwNew($AssertionError);
	}
	return $new($BigIntegerArray, {
		s,
		r
	});
}

BigInteger* BigInteger::gcd(BigInteger* val) {
	$useLocalObjectStack();
	if ($nc(val)->signum$ == 0) {
		return this->abs();
	} else if (this->signum$ == 0) {
		return val->abs();
	}
	$var($MutableBigInteger, a, $new($MutableBigInteger, this));
	$var($MutableBigInteger, b, $new($MutableBigInteger, val));
	$var($MutableBigInteger, result, a->hybridGCD(b));
	return $nc(result)->toBigInteger(1);
}

int32_t BigInteger::bitLengthForInt(int32_t n) {
	$init(BigInteger);
	return 32 - $Integer::numberOfLeadingZeros(n);
}

$ints* BigInteger::leftShift($ints* a, int32_t len, int32_t n) {
	$init(BigInteger);
	$useLocalObjectStack();
	int32_t nInts = (int32_t)((uint32_t)n >> 5);
	int32_t nBits = n & 0x1f;
	int32_t bitsInHighWord = bitLengthForInt($nc(a)->get(0));
	if (n <= (32 - bitsInHighWord)) {
		primitiveLeftShift(a, len, nBits);
		return a;
	} else if (nBits <= (32 - bitsInHighWord)) {
		$var($ints, result, $new($ints, nInts + len));
		$System::arraycopy(a, 0, result, 0, len);
		primitiveLeftShift(result, result->length, nBits);
		return result;
	} else {
		$var($ints, result, $new($ints, nInts + len + 1));
		$System::arraycopy(a, 0, result, 0, len);
		primitiveRightShift(result, result->length, 32 - nBits);
		return result;
	}
}

void BigInteger::primitiveRightShift($ints* a, int32_t len, int32_t n) {
	$init(BigInteger);
	$Objects::checkFromToIndex(0, len, $nc(a)->length);
	shiftRightImplWorker(a, a, 1, n, len - 1);
	$usrAssign((*a)[0], n);
}

void BigInteger::primitiveLeftShift($ints* a, int32_t len, int32_t n) {
	$init(BigInteger);
	if (len == 0 || n == 0) {
		return;
	}
	$Objects::checkFromToIndex(0, len, $nc(a)->length);
	shiftLeftImplWorker(a, a, 0, n, len - 1);
	(*a)[len - 1] <<= n;
}

int32_t BigInteger::bitLength($ints* val, int32_t len) {
	$init(BigInteger);
	if (len == 0) {
		return 0;
	}
	return ((len - 1) << 5) + bitLengthForInt($nc(val)->get(0));
}

BigInteger* BigInteger::abs() {
	return (this->signum$ >= 0 ? this : this->negate());
}

BigInteger* BigInteger::negate() {
	return $new(BigInteger, this->mag, -this->signum$);
}

int32_t BigInteger::signum() {
	return this->signum$;
}

BigInteger* BigInteger::mod(BigInteger* m) {
	if ($nc(m)->signum$ <= 0) {
		$throwNew($ArithmeticException, "BigInteger: modulus not positive"_s);
	}
	$var(BigInteger, result, this->remainder(m));
	return (result->signum$ >= 0 ? result : result->add(m));
}

BigInteger* BigInteger::modPow(BigInteger* exponent$renamed, BigInteger* m) {
	$useLocalObjectStack();
	$var(BigInteger, exponent, exponent$renamed);
	if ($nc(m)->signum$ <= 0) {
		$throwNew($ArithmeticException, "BigInteger: modulus not positive"_s);
	}
	if ($nc(exponent)->signum$ == 0) {
		return (m->equals(BigInteger::ONE) ? BigInteger::ZERO : BigInteger::ONE);
	}
	if (this->equals(BigInteger::ONE)) {
		return (m->equals(BigInteger::ONE) ? BigInteger::ZERO : BigInteger::ONE);
	}
	if (this->equals(BigInteger::ZERO) && exponent->signum$ >= 0) {
		return BigInteger::ZERO;
	}
	bool var$0 = this->equals(BigInteger::negConst->get(1));
	if (var$0 && (!exponent->testBit(0))) {
		return (m->equals(BigInteger::ONE) ? BigInteger::ZERO : BigInteger::ONE);
	}
	bool invertResult = false;
	if (invertResult = (exponent->signum$ < 0)) {
		$assign(exponent, exponent->negate());
	}
	$var(BigInteger, base, this->signum$ < 0 || this->compareTo(m) >= 0 ? this->mod(m) : this);
	$var(BigInteger, result, nullptr);
	if (m->testBit(0)) {
		$assign(result, $nc(base)->oddModPow(exponent, m));
	} else {
		int32_t p = m->getLowestSetBit();
		$var(BigInteger, m1, m->shiftRight(p));
		$var(BigInteger, m2, BigInteger::ONE->shiftLeft(p));
		$var(BigInteger, base2, this->signum$ < 0 || this->compareTo(m1) >= 0 ? this->mod(m1) : this);
		$var(BigInteger, a1, m1->equals(BigInteger::ONE) ? BigInteger::ZERO : $nc(base2)->oddModPow(exponent, m1));
		$var(BigInteger, a2, $nc(base)->modPow2(exponent, p));
		$var(BigInteger, y1, m2->modInverse(m1));
		$var(BigInteger, y2, m1->modInverse(m2));
		if ($nc(m->mag)->length < BigInteger::MAX_MAG_LENGTH / 2) {
			$assign(result, $($($($nc(a1)->multiply(m2))->multiply(y1))->add($($(a2->multiply(m1))->multiply(y2))))->mod(m));
		} else {
			$var($MutableBigInteger, t1, $new($MutableBigInteger));
			$$new($MutableBigInteger, $($nc(a1)->multiply(m2)))->multiply($$new($MutableBigInteger, y1), t1);
			$var($MutableBigInteger, t2, $new($MutableBigInteger));
			$$new($MutableBigInteger, $(a2->multiply(m1)))->multiply($$new($MutableBigInteger, y2), t2);
			t1->add(t2);
			$var($MutableBigInteger, q, $new($MutableBigInteger));
			$assign(result, $$nc(t1->divide($$new($MutableBigInteger, m), q))->toBigInteger());
		}
	}
	return (invertResult ? $nc(result)->modInverse(m) : result);
}

$ints* BigInteger::montgomeryMultiply($ints* a, $ints* b, $ints* n, int32_t len, int64_t inv, $ints* product$renamed) {
	$init(BigInteger);
	$useLocalObjectStack();
	$var($ints, product, product$renamed);
	implMontgomeryMultiplyChecks(a, b, n, len, product);
	if (len > BigInteger::MONTGOMERY_INTRINSIC_THRESHOLD) {
		$assign(product, multiplyToLen(a, len, b, len, product));
		return montReduce(product, n, len, (int32_t)inv);
	} else {
		return implMontgomeryMultiply(a, b, n, len, inv, $(materialize(product, len)));
	}
}

$ints* BigInteger::montgomerySquare($ints* a, $ints* n, int32_t len, int64_t inv, $ints* product$renamed) {
	$init(BigInteger);
	$useLocalObjectStack();
	$var($ints, product, product$renamed);
	implMontgomeryMultiplyChecks(a, a, n, len, product);
	if (len > BigInteger::MONTGOMERY_INTRINSIC_THRESHOLD) {
		$assign(product, squareToLen(a, len, product));
		return montReduce(product, n, len, (int32_t)inv);
	} else {
		return implMontgomerySquare(a, n, len, inv, $(materialize(product, len)));
	}
}

void BigInteger::implMontgomeryMultiplyChecks($ints* a, $ints* b, $ints* n, int32_t len, $ints* product) {
	$init(BigInteger);
	$useLocalObjectStack();
	if (len % 2 != 0) {
		$throwNew($IllegalArgumentException, $$str({"input array length must be even: "_s, $$str(len)}));
	}
	if (len < 1) {
		$throwNew($IllegalArgumentException, $$str({"invalid input length: "_s, $$str(len)}));
	}
	if (len > $nc(a)->length || len > $nc(b)->length || len > $nc(n)->length || (product != nullptr && len > product->length)) {
		$throwNew($IllegalArgumentException, $$str({"input array length out of bound: "_s, $$str(len)}));
	}
}

$ints* BigInteger::materialize($ints* z$renamed, int32_t len) {
	$init(BigInteger);
	$var($ints, z, z$renamed);
	if (z == nullptr || z->length < len) {
		$assign(z, $new($ints, len));
	}
	return z;
}

$ints* BigInteger::implMontgomeryMultiply($ints* a, $ints* b, $ints* n, int32_t len, int64_t inv, $ints* product$renamed) {
	$init(BigInteger);
	$var($ints, product, product$renamed);
	$assign(product, multiplyToLen(a, len, b, len, product));
	return montReduce(product, n, len, (int32_t)inv);
}

$ints* BigInteger::implMontgomerySquare($ints* a, $ints* n, int32_t len, int64_t inv, $ints* product$renamed) {
	$init(BigInteger);
	$var($ints, product, product$renamed);
	$assign(product, squareToLen(a, len, product));
	return montReduce(product, n, len, (int32_t)inv);
}

BigInteger* BigInteger::oddModPow(BigInteger* y, BigInteger* z) {
	$useLocalObjectStack();
	if ($nc(y)->equals(BigInteger::ONE)) {
		return this;
	}
	if (this->signum$ == 0) {
		return BigInteger::ZERO;
	}
	$var($ints, base, $cast($ints, $nc(this->mag)->clone()));
	$var($ints, exp, y->mag);
	$var($ints, mod, $nc(z)->mag);
	int32_t modLen = $nc(mod)->length;
	if ((modLen & 1) != 0) {
		$var($ints, x, $new($ints, modLen + 1));
		$System::arraycopy(mod, 0, x, 1, modLen);
		$assign(mod, x);
		++modLen;
	}
	int32_t wbits = 0;
	int32_t ebits = bitLength(exp, $nc(exp)->length);
	if ((ebits != 17) || (exp->get(0) != 0x00010001)) {
		while (ebits > $nc(BigInteger::bnExpModThreshTable)->get(wbits)) {
			++wbits;
		}
	}
	int32_t tblmask = $sl(1, wbits);
	$var($intArray2, table, $new($intArray2, tblmask));
	for (int32_t i = 0; i < tblmask; ++i) {
		table->set(i, $$new($ints, modLen));
	}
	int64_t n0 = (mod->get(modLen - 1) & BigInteger::LONG_MASK) + ((mod->get(modLen - 2) & BigInteger::LONG_MASK) << 32);
	int64_t inv = -$MutableBigInteger::inverseMod64(n0);
	$var($ints, a, leftShift(base, base->length, modLen << 5));
	$var($MutableBigInteger, q, $new($MutableBigInteger));
	$var($MutableBigInteger, a2, $new($MutableBigInteger, a));
	$var($MutableBigInteger, b2, $new($MutableBigInteger, mod));
	b2->normalize();
	$var($MutableBigInteger, r, a2->divide(b2, q));
	table->set(0, $($nc(r)->toIntArray()));
	if ($nc(table->get(0))->length < modLen) {
		int32_t offset = modLen - $nc(table->get(0))->length;
		$var($ints, t2, $new($ints, modLen));
		$System::arraycopy(table->get(0), 0, t2, offset, $nc(table->get(0))->length);
		table->set(0, t2);
	}
	$var($ints, b, montgomerySquare(table->get(0), mod, modLen, inv, nullptr));
	$var($ints, t, $Arrays::copyOf(b, modLen));
	for (int32_t i = 1; i < tblmask; ++i) {
		table->set(i, $(montgomeryMultiply(t, table->get(i - 1), mod, modLen, inv, nullptr)));
	}
	int32_t bitpos = $sl(1, (ebits - 1) & (32 - 1));
	int32_t buf = 0;
	int32_t elen = exp->length;
	int32_t eIndex = 0;
	for (int32_t i = 0; i <= wbits; ++i) {
		buf = (buf << 1) | (((exp->get(eIndex) & bitpos) != 0) ? 1 : 0);
		$usrAssign(bitpos, 1);
		if (bitpos == 0) {
			++eIndex;
			bitpos = $sl(1, 32 - 1);
			--elen;
		}
	}
	int32_t multpos = ebits;
	--ebits;
	bool isone = true;
	multpos = ebits - wbits;
	while ((buf & 1) == 0) {
		$usrAssign(buf, 1);
		++multpos;
	}
	$var($ints, mult, table->get((int32_t)((uint32_t)buf >> 1)));
	buf = 0;
	if (multpos == ebits) {
		isone = false;
	}
	while (true) {
		--ebits;
		buf <<= 1;
		if (elen != 0) {
			buf |= ((exp->get(eIndex) & bitpos) != 0) ? 1 : 0;
			$usrAssign(bitpos, 1);
			if (bitpos == 0) {
				++eIndex;
				bitpos = $sl(1, 32 - 1);
				--elen;
			}
		}
		if ((buf & tblmask) != 0) {
			multpos = ebits - wbits;
			while ((buf & 1) == 0) {
				$usrAssign(buf, 1);
				++multpos;
			}
			$assign(mult, table->get((int32_t)((uint32_t)buf >> 1)));
			buf = 0;
		}
		if (ebits == multpos) {
			if (isone) {
				$assign(b, $cast($ints, $nc(mult)->clone()));
				isone = false;
			} else {
				$assign(t, b);
				$assign(a, montgomeryMultiply(t, mult, mod, modLen, inv, a));
				$assign(t, a);
				$assign(a, b);
				$assign(b, t);
			}
		}
		if (ebits == 0) {
			break;
		}
		if (!isone) {
			$assign(t, b);
			$assign(a, montgomerySquare(t, mod, modLen, inv, a));
			$assign(t, a);
			$assign(a, b);
			$assign(b, t);
		}
	}
	$var($ints, t2, $new($ints, 2 * modLen));
	$System::arraycopy(b, 0, t2, modLen, modLen);
	$assign(b, montReduce(t2, mod, modLen, (int32_t)inv));
	$assign(t2, $Arrays::copyOf(b, modLen));
	return $new(BigInteger, 1, t2);
}

$ints* BigInteger::montReduce($ints* n, $ints* mod, int32_t mlen, int32_t inv) {
	$init(BigInteger);
	int32_t c = 0;
	int32_t len = mlen;
	int32_t offset = 0;
	do {
		int32_t nEnd = $nc(n)->get($nc(n)->length - 1 - offset);
		int32_t carry = mulAdd(n, mod, offset, mlen, inv * nEnd);
		c += addOne(n, offset, mlen, carry);
		++offset;
	} while (--len > 0);
	while (c > 0) {
		c += subN(n, mod, mlen);
	}
	while (intArrayCmpToLen(n, mod, mlen) >= 0) {
		subN(n, mod, mlen);
	}
	return n;
}

int32_t BigInteger::intArrayCmpToLen($ints* arg1, $ints* arg2, int32_t len) {
	$init(BigInteger);
	for (int32_t i = 0; i < len; ++i) {
		int64_t b1 = $nc(arg1)->get(i) & BigInteger::LONG_MASK;
		int64_t b2 = $nc(arg2)->get(i) & BigInteger::LONG_MASK;
		if (b1 < b2) {
			return -1;
		}
		if (b1 > b2) {
			return 1;
		}
	}
	return 0;
}

int32_t BigInteger::subN($ints* a, $ints* b, int32_t len) {
	$init(BigInteger);
	int64_t sum = 0;
	while (--len >= 0) {
		sum = ($nc(a)->get(len) & BigInteger::LONG_MASK) - ($nc(b)->get(len) & BigInteger::LONG_MASK) + (sum >> 32);
		a->set(len, (int32_t)sum);
	}
	return (int32_t)(sum >> 32);
}

int32_t BigInteger::mulAdd($ints* out, $ints* in, int32_t offset, int32_t len, int32_t k) {
	$init(BigInteger);
	implMulAddCheck(out, in, offset, len, k);
	return implMulAdd(out, in, offset, len, k);
}

void BigInteger::implMulAddCheck($ints* out, $ints* in, int32_t offset, int32_t len, int32_t k) {
	$init(BigInteger);
	$useLocalObjectStack();
	if (len > $nc(in)->length) {
		$throwNew($IllegalArgumentException, $$str({"input length is out of bound: "_s, $$str(len), " > "_s, $$str(in->length)}));
	}
	if (offset < 0) {
		$throwNew($IllegalArgumentException, $$str({"input offset is invalid: "_s, $$str(offset)}));
	}
	if (offset > ($nc(out)->length - 1)) {
		$throwNew($IllegalArgumentException, $$str({"input offset is out of bound: "_s, $$str(offset), " > "_s, $$str((out->length - 1))}));
	}
	if (len > (out->length - offset)) {
		$throwNew($IllegalArgumentException, $$str({"input len is out of bound: "_s, $$str(len), " > "_s, $$str((out->length - offset))}));
	}
}

int32_t BigInteger::implMulAdd($ints* out, $ints* in, int32_t offset, int32_t len, int32_t k) {
	$init(BigInteger);
	int64_t kLong = k & BigInteger::LONG_MASK;
	int64_t carry = 0;
	offset = $nc(out)->length - offset - 1;
	for (int32_t j = len - 1; j >= 0; --j) {
		int64_t product = ($nc(in)->get(j) & BigInteger::LONG_MASK) * kLong + (out->get(offset) & BigInteger::LONG_MASK) + carry;
		out->set(offset--, (int32_t)product);
		carry = (int64_t)((uint64_t)product >> 32);
	}
	return (int32_t)carry;
}

int32_t BigInteger::addOne($ints* a, int32_t offset, int32_t mlen, int32_t carry) {
	$init(BigInteger);
	offset = $nc(a)->length - 1 - mlen - offset;
	int64_t t = (a->get(offset) & BigInteger::LONG_MASK) + (carry & BigInteger::LONG_MASK);
	a->set(offset, (int32_t)t);
	if (((int64_t)((uint64_t)t >> 32)) == 0) {
		return 0;
	}
	while (--mlen >= 0) {
		if (--offset < 0) {
			return 1;
		} else {
			++(*a)[offset];
			if (a->get(offset) != 0) {
				return 0;
			}
		}
	}
	return 1;
}

BigInteger* BigInteger::modPow2(BigInteger* exponent, int32_t p) {
	$useLocalObjectStack();
	$var(BigInteger, result, BigInteger::ONE);
	$var(BigInteger, baseToPow2, this->mod2(p));
	int32_t expOffset = 0;
	int32_t limit = $nc(exponent)->bitLength();
	if (this->testBit(0)) {
		limit = (p - 1) < limit ? (p - 1) : limit;
	}
	while (expOffset < limit) {
		if (exponent->testBit(expOffset)) {
			$assign(result, $($nc(result)->multiply(baseToPow2))->mod2(p));
		}
		++expOffset;
		if (expOffset < limit) {
			$assign(baseToPow2, $(baseToPow2->square())->mod2(p));
		}
	}
	return result;
}

BigInteger* BigInteger::mod2(int32_t p) {
	if (bitLength() <= p) {
		return this;
	}
	int32_t numInts = (int32_t)((uint32_t)(p + 31) >> 5);
	$var($ints, mag, $new($ints, numInts));
	$System::arraycopy(this->mag, ($nc(this->mag)->length - numInts), mag, 0, numInts);
	int32_t excessBits = (numInts << 5) - p;
	(*mag)[0] &= (uint32_t)(($sl((int64_t)1, 32 - excessBits)) - 1);
	return (mag->get(0) == 0 ? $new(BigInteger, 1, mag) : $new(BigInteger, mag, 1));
}

BigInteger* BigInteger::modInverse(BigInteger* m) {
	$useLocalObjectStack();
	if ($nc(m)->signum$ != 1) {
		$throwNew($ArithmeticException, "BigInteger: modulus not positive"_s);
	}
	if (m->equals(BigInteger::ONE)) {
		return BigInteger::ZERO;
	}
	$var(BigInteger, modVal, this);
	if (this->signum$ < 0 || (this->compareMagnitude(m) >= 0)) {
		$assign(modVal, this->mod(m));
	}
	if (modVal->equals(BigInteger::ONE)) {
		return BigInteger::ONE;
	}
	$var($MutableBigInteger, a, $new($MutableBigInteger, modVal));
	$var($MutableBigInteger, b, $new($MutableBigInteger, m));
	$var($MutableBigInteger, result, a->mutableModInverse(b));
	return $nc(result)->toBigInteger(1);
}

BigInteger* BigInteger::shiftLeft(int32_t n) {
	if (this->signum$ == 0) {
		return BigInteger::ZERO;
	}
	if (n > 0) {
		return $new(BigInteger, $(shiftLeft(this->mag, n)), this->signum$);
	} else if (n == 0) {
		return this;
	} else {
		return shiftRightImpl(-n);
	}
}

$ints* BigInteger::shiftLeft($ints* mag, int32_t n) {
	$init(BigInteger);
	int32_t nInts = (int32_t)((uint32_t)n >> 5);
	int32_t nBits = n & 0x1f;
	int32_t magLen = $nc(mag)->length;
	$var($ints, newMag, nullptr);
	if (nBits == 0) {
		$assign(newMag, $new($ints, magLen + nInts));
		$System::arraycopy(mag, 0, newMag, 0, magLen);
	} else {
		int32_t i = 0;
		int32_t nBits2 = 32 - nBits;
		int32_t highBits = $usr(mag->get(0), nBits2);
		if (highBits != 0) {
			$assign(newMag, $new($ints, magLen + nInts + 1));
			newMag->set(i++, highBits);
		} else {
			$assign(newMag, $new($ints, magLen + nInts));
		}
		int32_t numIter = magLen - 1;
		$Objects::checkFromToIndex(0, numIter + 1, mag->length);
		$Objects::checkFromToIndex(i, numIter + i + 1, $nc(newMag)->length);
		shiftLeftImplWorker(newMag, mag, i, nBits, numIter);
		newMag->set(numIter + i, $sl(mag->get(numIter), nBits));
	}
	return newMag;
}

void BigInteger::shiftLeftImplWorker($ints* newArr, $ints* oldArr, int32_t newIdx, int32_t shiftCount, int32_t numIter) {
	$init(BigInteger);
	int32_t shiftCountRight = 32 - shiftCount;
	int32_t oldIdx = 0;
	while (oldIdx < numIter) {
		int32_t var$0 = $sl($nc(oldArr)->get(oldIdx++), shiftCount);
		$nc(newArr)->set(newIdx++, var$0 | ($usr(oldArr->get(oldIdx), shiftCountRight)));
	}
}

BigInteger* BigInteger::shiftRight(int32_t n) {
	if (this->signum$ == 0) {
		return BigInteger::ZERO;
	}
	if (n > 0) {
		return shiftRightImpl(n);
	} else if (n == 0) {
		return this;
	} else {
		return $new(BigInteger, $(shiftLeft(this->mag, -n)), this->signum$);
	}
}

BigInteger* BigInteger::shiftRightImpl(int32_t n) {
	int32_t nInts = (int32_t)((uint32_t)n >> 5);
	int32_t nBits = n & 0x1f;
	int32_t magLen = $nc(this->mag)->length;
	$var($ints, newMag, nullptr);
	if (nInts >= magLen) {
		return (this->signum$ >= 0 ? BigInteger::ZERO : BigInteger::negConst->get(1));
	}
	if (nBits == 0) {
		int32_t newMagLen = magLen - nInts;
		$assign(newMag, $Arrays::copyOf(this->mag, newMagLen));
	} else {
		int32_t i = 0;
		int32_t highBits = $usr(this->mag->get(0), nBits);
		if (highBits != 0) {
			$assign(newMag, $new($ints, magLen - nInts));
			newMag->set(i++, highBits);
		} else {
			$assign(newMag, $new($ints, magLen - nInts - 1));
		}
		int32_t numIter = magLen - nInts - 1;
		$Objects::checkFromToIndex(0, numIter + 1, this->mag->length);
		$Objects::checkFromToIndex(i, numIter + i, $nc(newMag)->length);
		shiftRightImplWorker(newMag, this->mag, i, nBits, numIter);
	}
	if (this->signum$ < 0) {
		bool onesLost = false;
		for (int32_t i = magLen - 1, j = magLen - nInts; i >= j && !onesLost; --i) {
			onesLost = (this->mag->get(i) != 0);
		}
		if (!onesLost && nBits != 0) {
			onesLost = ($sl(this->mag->get(magLen - nInts - 1), 32 - nBits) != 0);
		}
		if (onesLost) {
			$assign(newMag, javaIncrement(newMag));
		}
	}
	return $new(BigInteger, newMag, this->signum$);
}

void BigInteger::shiftRightImplWorker($ints* newArr, $ints* oldArr, int32_t newIdx, int32_t shiftCount, int32_t numIter) {
	$init(BigInteger);
	int32_t shiftCountLeft = 32 - shiftCount;
	int32_t idx = numIter;
	int32_t nidx = (newIdx == 0) ? numIter - 1 : numIter;
	while (nidx >= newIdx) {
		int32_t var$0 = $usr($nc(oldArr)->get(idx--), shiftCount);
		$nc(newArr)->set(nidx--, var$0 | ($sl(oldArr->get(idx), shiftCountLeft)));
	}
}

$ints* BigInteger::javaIncrement($ints* val$renamed) {
	$var($ints, val, val$renamed);
	int32_t lastSum = 0;
	for (int32_t i = $nc(val)->length - 1; i >= 0 && lastSum == 0; --i) {
		lastSum = ((*val)[i] += 1);
	}
	if (lastSum == 0) {
		$assign(val, $new($ints, val->length + 1));
		val->set(0, 1);
	}
	return val;
}

BigInteger* BigInteger::and$(BigInteger* val) {
	int32_t var$0 = intLength();
	$var($ints, result, $new($ints, $Math::max(var$0, $nc(val)->intLength())));
	for (int32_t i = 0; i < result->length; ++i) {
		int32_t var$1 = getInt(result->length - i - 1);
		result->set(i, (var$1 & val->getInt(result->length - i - 1)));
	}
	return valueOf(result);
}

BigInteger* BigInteger::or$(BigInteger* val) {
	int32_t var$0 = intLength();
	$var($ints, result, $new($ints, $Math::max(var$0, $nc(val)->intLength())));
	for (int32_t i = 0; i < result->length; ++i) {
		int32_t var$1 = getInt(result->length - i - 1);
		result->set(i, (var$1 | val->getInt(result->length - i - 1)));
	}
	return valueOf(result);
}

BigInteger* BigInteger::xor$(BigInteger* val) {
	int32_t var$0 = intLength();
	$var($ints, result, $new($ints, $Math::max(var$0, $nc(val)->intLength())));
	for (int32_t i = 0; i < result->length; ++i) {
		int32_t var$1 = getInt(result->length - i - 1);
		result->set(i, (var$1 ^ val->getInt(result->length - i - 1)));
	}
	return valueOf(result);
}

BigInteger* BigInteger::not$() {
	$var($ints, result, $new($ints, intLength()));
	for (int32_t i = 0; i < result->length; ++i) {
		result->set(i, ~getInt(result->length - i - 1));
	}
	return valueOf(result);
}

BigInteger* BigInteger::andNot(BigInteger* val) {
	int32_t var$0 = intLength();
	$var($ints, result, $new($ints, $Math::max(var$0, $nc(val)->intLength())));
	for (int32_t i = 0; i < result->length; ++i) {
		int32_t var$1 = getInt(result->length - i - 1);
		result->set(i, (var$1 & ~val->getInt(result->length - i - 1)));
	}
	return valueOf(result);
}

bool BigInteger::testBit(int32_t n) {
	if (n < 0) {
		$throwNew($ArithmeticException, "Negative bit address"_s);
	}
	return (getInt((int32_t)((uint32_t)n >> 5)) & ($sl(1, n & 0x1f))) != 0;
}

BigInteger* BigInteger::setBit(int32_t n) {
	if (n < 0) {
		$throwNew($ArithmeticException, "Negative bit address"_s);
	}
	int32_t intNum = (int32_t)((uint32_t)n >> 5);
	$var($ints, result, $new($ints, $Math::max(intLength(), intNum + 2)));
	for (int32_t i = 0; i < result->length; ++i) {
		result->set(result->length - i - 1, getInt(i));
	}
	(*result)[result->length - intNum - 1] |= ($sl(1, n & 0x1f));
	return valueOf(result);
}

BigInteger* BigInteger::clearBit(int32_t n) {
	if (n < 0) {
		$throwNew($ArithmeticException, "Negative bit address"_s);
	}
	int32_t intNum = (int32_t)((uint32_t)n >> 5);
	$var($ints, result, $new($ints, $Math::max(intLength(), ((int32_t)((uint32_t)(n + 1) >> 5)) + 1)));
	for (int32_t i = 0; i < result->length; ++i) {
		result->set(result->length - i - 1, getInt(i));
	}
	(*result)[result->length - intNum - 1] &= (uint32_t)~($sl(1, n & 0x1f));
	return valueOf(result);
}

BigInteger* BigInteger::flipBit(int32_t n) {
	if (n < 0) {
		$throwNew($ArithmeticException, "Negative bit address"_s);
	}
	int32_t intNum = (int32_t)((uint32_t)n >> 5);
	$var($ints, result, $new($ints, $Math::max(intLength(), intNum + 2)));
	for (int32_t i = 0; i < result->length; ++i) {
		result->set(result->length - i - 1, getInt(i));
	}
	(*result)[result->length - intNum - 1] ^= ($sl(1, n & 0x1f));
	return valueOf(result);
}

int32_t BigInteger::getLowestSetBit() {
	int32_t lsb = this->lowestSetBitPlusTwo - 2;
	if (lsb == -2) {
		lsb = 0;
		if (this->signum$ == 0) {
			lsb -= 1;
		} else {
			int32_t i = 0;
			int32_t b = 0;
			for (i = 0; (b = getInt(i)) == 0; ++i) {
				;
			}
			lsb += (i << 5) + $Integer::numberOfTrailingZeros(b);
		}
		this->lowestSetBitPlusTwo = lsb + 2;
	}
	return lsb;
}

int32_t BigInteger::bitLength() {
	int32_t n = this->bitLengthPlusOne - 1;
	if (n == -1) {
		$var($ints, m, this->mag);
		int32_t len = $nc(m)->length;
		if (len == 0) {
			n = 0;
		} else {
			int32_t magBitLength = ((len - 1) << 5) + bitLengthForInt($nc(this->mag)->get(0));
			if (this->signum$ < 0) {
				bool pow2 = ($Integer::bitCount(this->mag->get(0)) == 1);
				for (int32_t i = 1; i < len && pow2; ++i) {
					pow2 = (this->mag->get(i) == 0);
				}
				n = (pow2 ? magBitLength - 1 : magBitLength);
			} else {
				n = magBitLength;
			}
		}
		this->bitLengthPlusOne = n + 1;
	}
	return n;
}

int32_t BigInteger::bitCount() {
	int32_t bc = this->bitCountPlusOne - 1;
	if (bc == -1) {
		bc = 0;
		for (int32_t i = 0; i < $nc(this->mag)->length; ++i) {
			bc += $Integer::bitCount(this->mag->get(i));
		}
		if (this->signum$ < 0) {
			int32_t magTrailingZeroCount = 0;
			int32_t j = 0;
			for (j = this->mag->length - 1; this->mag->get(j) == 0; --j) {
				magTrailingZeroCount += 32;
			}
			magTrailingZeroCount += $Integer::numberOfTrailingZeros(this->mag->get(j));
			bc += magTrailingZeroCount - 1;
		}
		this->bitCountPlusOne = bc + 1;
	}
	return bc;
}

bool BigInteger::isProbablePrime(int32_t certainty) {
	if (certainty <= 0) {
		return true;
	}
	$var(BigInteger, w, this->abs());
	if (w->equals(BigInteger::TWO)) {
		return true;
	}
	bool var$0 = !w->testBit(0);
	if (var$0 || w->equals(BigInteger::ONE)) {
		return false;
	}
	return w->primeToCertainty(certainty, nullptr);
}

int32_t BigInteger::compareTo(BigInteger* val) {
	if (this->signum$ == $nc(val)->signum$) {
		int32_t var$0 = 0;
		switch (this->signum$) {
		case 1:
			var$0 = compareMagnitude(val);
			break;
		case -1:
			var$0 = val->compareMagnitude(this);
			break;
		default:
			var$0 = 0;
			break;
		}
		return var$0;
	}
	return this->signum$ > val->signum$ ? 1 : -1;
}

int32_t BigInteger::compareMagnitude(BigInteger* val) {
	$useLocalObjectStack();
	$var($ints, m1, this->mag);
	int32_t len1 = $nc(m1)->length;
	$var($ints, m2, $nc(val)->mag);
	int32_t len2 = $nc(m2)->length;
	if (len1 < len2) {
		return -1;
	}
	if (len1 > len2) {
		return 1;
	}
	for (int32_t i = 0; i < len1; ++i) {
		int32_t a = m1->get(i);
		int32_t b = m2->get(i);
		if (a != b) {
			return ((a & BigInteger::LONG_MASK) < (b & BigInteger::LONG_MASK)) ? -1 : 1;
		}
	}
	return 0;
}

int32_t BigInteger::compareMagnitude(int64_t val) {
	if (!BigInteger::$assertionsDisabled && !(val != $Long::MIN_VALUE)) {
		$throwNew($AssertionError);
	}
	$var($ints, m1, this->mag);
	int32_t len = $nc(m1)->length;
	if (len > 2) {
		return 1;
	}
	if (val < 0) {
		val = -val;
	}
	int32_t highWord = (int32_t)((int64_t)((uint64_t)val >> 32));
	if (highWord == 0) {
		if (len < 1) {
			return -1;
		}
		if (len > 1) {
			return 1;
		}
		int32_t a = m1->get(0);
		int32_t b = (int32_t)val;
		if (a != b) {
			return ((a & BigInteger::LONG_MASK) < (b & BigInteger::LONG_MASK)) ? -1 : 1;
		}
		return 0;
	} else {
		if (len < 2) {
			return -1;
		}
		int32_t a = m1->get(0);
		int32_t b = highWord;
		if (a != b) {
			return ((a & BigInteger::LONG_MASK) < (b & BigInteger::LONG_MASK)) ? -1 : 1;
		}
		a = m1->get(1);
		b = (int32_t)val;
		if (a != b) {
			return ((a & BigInteger::LONG_MASK) < (b & BigInteger::LONG_MASK)) ? -1 : 1;
		}
		return 0;
	}
}

bool BigInteger::equals(Object$* x) {
	$useLocalObjectStack();
	if ($equals(x, this)) {
		return true;
	}
	$var(BigInteger, xInt, nullptr);
	bool var$0 = $instanceOf(BigInteger, x);
	if (var$0) {
		$assign(xInt, $cast(BigInteger, x));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	if ($nc(xInt)->signum$ != this->signum$) {
		return false;
	}
	$var($ints, m, this->mag);
	int32_t len = $nc(m)->length;
	$var($ints, xm, xInt->mag);
	if (len != $nc(xm)->length) {
		return false;
	}
	for (int32_t i = 0; i < len; ++i) {
		if (xm->get(i) != m->get(i)) {
			return false;
		}
	}
	return true;
}

BigInteger* BigInteger::min(BigInteger* val) {
	return (compareTo(val) < 0 ? this : val);
}

BigInteger* BigInteger::max(BigInteger* val) {
	return (compareTo(val) > 0 ? this : val);
}

int32_t BigInteger::hashCode() {
	int32_t hashCode = 0;
	for (int32_t i = 0; i < $nc(this->mag)->length; ++i) {
		hashCode = (int32_t)(31 * hashCode + (this->mag->get(i) & BigInteger::LONG_MASK));
	}
	return hashCode * this->signum$;
}

$String* BigInteger::toString(int32_t radix) {
	$useLocalObjectStack();
	if (this->signum$ == 0) {
		return "0"_s;
	}
	if (radix < $Character::MIN_RADIX || radix > $Character::MAX_RADIX) {
		radix = 10;
	}
	$var(BigInteger, abs, this->abs());
	int32_t b = abs->bitLength();
	int32_t numChars = $cast(int32_t, ($Math::floor(b * BigInteger::LOG_TWO / $nc(BigInteger::logCache)->get(radix)) + 1)) + (this->signum$ < 0 ? 1 : 0);
	$var($StringBuilder, sb, $new($StringBuilder, numChars));
	if (this->signum$ < 0) {
		sb->append(u'-');
	}
	toString(abs, sb, radix, 0);
	return sb->toString();
}

void BigInteger::padWithZeros($StringBuilder* buf, int32_t numZeros) {
	$init(BigInteger);
	while (numZeros >= BigInteger::NUM_ZEROS) {
		$nc(buf)->append(BigInteger::ZEROS);
		numZeros -= BigInteger::NUM_ZEROS;
	}
	if (numZeros > 0) {
		$nc(buf)->append(BigInteger::ZEROS, 0, numZeros);
	}
}

void BigInteger::smallToString(int32_t radix, $StringBuilder* buf, int32_t digits) {
	$useLocalObjectStack();
	if (!BigInteger::$assertionsDisabled && !(this->signum$ >= 0)) {
		$throwNew($AssertionError);
	}
	if (this->signum$ == 0) {
		padWithZeros(buf, digits);
		return;
	}
	int32_t maxNumDigitGroups = (4 * $nc(this->mag)->length + 6) / 7;
	$var($longs, digitGroups, $new($longs, maxNumDigitGroups));
	$var(BigInteger, tmp, this);
	int32_t numGroups = 0;
	while ($nc(tmp)->signum$ != 0) {
		$var(BigInteger, d, $nc(BigInteger::longRadix)->get(radix));
		$var($MutableBigInteger, q, $new($MutableBigInteger));
		$var($MutableBigInteger, a, $new($MutableBigInteger, tmp->mag));
		$var($MutableBigInteger, b, $new($MutableBigInteger, $nc(d)->mag));
		$var($MutableBigInteger, r, a->divide(b, q));
		$var(BigInteger, q2, q->toBigInteger(tmp->signum$ * d->signum$));
		$var(BigInteger, r2, $nc(r)->toBigInteger(tmp->signum$ * d->signum$));
		digitGroups->set(numGroups++, $nc(r2)->longValue());
		$assign(tmp, q2);
	}
	$var($String, s, $Long::toString(digitGroups->get(numGroups - 1), radix));
	padWithZeros(buf, digits - (s->length() + (numGroups - 1) * $nc(BigInteger::digitsPerLong)->get(radix)));
	$nc(buf)->append(s);
	for (int32_t i = numGroups - 2; i >= 0; --i) {
		$assign(s, $Long::toString(digitGroups->get(i), radix));
		int32_t numLeadingZeros = BigInteger::digitsPerLong->get(radix) - s->length();
		if (numLeadingZeros != 0) {
			buf->append(BigInteger::ZEROS, 0, numLeadingZeros);
		}
		buf->append(s);
	}
}

void BigInteger::toString(BigInteger* u, $StringBuilder* sb, int32_t radix, int32_t digits) {
	$init(BigInteger);
	$useLocalObjectStack();
	if (!BigInteger::$assertionsDisabled && !($nc(u)->signum() >= 0)) {
		$throwNew($AssertionError);
	}
	if ($nc($nc(u)->mag)->length <= BigInteger::SCHOENHAGE_BASE_CONVERSION_THRESHOLD) {
		u->smallToString(radix, sb, digits);
		return;
	}
	int32_t b = u->bitLength();
	int32_t n = (int32_t)$Math::round($Math::log(b * BigInteger::LOG_TWO / $nc(BigInteger::logCache)->get(radix)) / BigInteger::LOG_TWO - 1.0);
	$var(BigInteger, v, getRadixConversionCache(radix, n));
	$var($BigIntegerArray, results, nullptr);
	$assign(results, u->divideAndRemainder(v));
	int32_t expectedDigits = $sl(1, n);
	toString(results->get(0), sb, radix, digits - expectedDigits);
	toString(results->get(1), sb, radix, expectedDigits);
}

BigInteger* BigInteger::getRadixConversionCache(int32_t radix, int32_t exponent) {
	$init(BigInteger);
	$useLocalObjectStack();
	$var($BigIntegerArray, cacheLine, $nc(BigInteger::powerCache)->get(radix));
	if (exponent < $nc(cacheLine)->length) {
		return cacheLine->get(exponent);
	}
	int32_t oldLength = cacheLine->length;
	$assign(cacheLine, $cast($BigIntegerArray, $Arrays::copyOf(cacheLine, exponent + 1)));
	for (int32_t i = oldLength; i <= exponent; ++i) {
		cacheLine->set(i, $($nc(cacheLine->get(i - 1))->pow(2)));
	}
	$var($BigIntegerArray2, pc, BigInteger::powerCache);
	if (exponent >= $nc($nc(pc)->get(radix))->length) {
		$assign(pc, $cast($BigIntegerArray2, pc->clone()));
		pc->set(radix, cacheLine);
		$assignStatic(BigInteger::powerCache, pc);
	}
	return cacheLine->get(exponent);
}

$String* BigInteger::toString() {
	return toString(10);
}

$bytes* BigInteger::toByteArray() {
	int32_t byteLen = bitLength() / 8 + 1;
	$var($bytes, byteArray, $new($bytes, byteLen));
	for (int32_t i = byteLen - 1, bytesCopied = 4, nextInt = 0, intIndex = 0; i >= 0; --i) {
		if (bytesCopied == 4) {
			nextInt = getInt(intIndex++);
			bytesCopied = 1;
		} else {
			$usrAssign(nextInt, 8);
			++bytesCopied;
		}
		byteArray->set(i, (int8_t)nextInt);
	}
	return byteArray;
}

int32_t BigInteger::intValue() {
	int32_t result = 0;
	result = getInt(0);
	return result;
}

int64_t BigInteger::longValue() {
	int64_t result = 0;
	for (int32_t i = 1; i >= 0; --i) {
		result = (result << 32) + (getInt(i) & BigInteger::LONG_MASK);
	}
	return result;
}

float BigInteger::floatValue() {
	if (this->signum$ == 0) {
		return 0.0f;
	}
	int32_t exponent = (($nc(this->mag)->length - 1) << 5) + bitLengthForInt($nc(this->mag)->get(0)) - 1;
	if (exponent < $Long::SIZE - 1) {
		return (float)longValue();
	} else if (exponent > $Float::MAX_EXPONENT) {
		return this->signum$ > 0 ? $Float::POSITIVE_INFINITY : $Float::NEGATIVE_INFINITY;
	}
	int32_t shift = exponent - $FloatConsts::SIGNIFICAND_WIDTH;
	int32_t twiceSignifFloor = 0;
	int32_t nBits = shift & 0x1f;
	int32_t nBits2 = 32 - nBits;
	if (nBits == 0) {
		twiceSignifFloor = this->mag->get(0);
	} else {
		twiceSignifFloor = $usr(this->mag->get(0), nBits);
		if (twiceSignifFloor == 0) {
			twiceSignifFloor = ($sl(this->mag->get(0), nBits2)) | ($usr(this->mag->get(1), nBits));
		}
	}
	int32_t signifFloor = twiceSignifFloor >> 1;
	signifFloor &= (uint32_t)$FloatConsts::SIGNIF_BIT_MASK;
	bool increment = (twiceSignifFloor & 1) != 0 && ((signifFloor & 1) != 0 || $$nc(abs())->getLowestSetBit() < shift);
	int32_t signifRounded = increment ? signifFloor + 1 : signifFloor;
	int32_t bits = $sl(exponent + $FloatConsts::EXP_BIAS, $FloatConsts::SIGNIFICAND_WIDTH - 1);
	bits += signifRounded;
	bits |= this->signum$ & $FloatConsts::SIGN_BIT_MASK;
	return $Float::intBitsToFloat(bits);
}

double BigInteger::doubleValue() {
	if (this->signum$ == 0) {
		return 0.0;
	}
	int32_t exponent = (($nc(this->mag)->length - 1) << 5) + bitLengthForInt($nc(this->mag)->get(0)) - 1;
	if (exponent < $Long::SIZE - 1) {
		return (double)longValue();
	} else if (exponent > $Double::MAX_EXPONENT) {
		return this->signum$ > 0 ? $Double::POSITIVE_INFINITY : $Double::NEGATIVE_INFINITY;
	}
	int32_t shift = exponent - $DoubleConsts::SIGNIFICAND_WIDTH;
	int64_t twiceSignifFloor = 0;
	int32_t nBits = shift & 0x1f;
	int32_t nBits2 = 32 - nBits;
	int32_t highBits = 0;
	int32_t lowBits = 0;
	if (nBits == 0) {
		highBits = this->mag->get(0);
		lowBits = this->mag->get(1);
	} else {
		highBits = $usr(this->mag->get(0), nBits);
		lowBits = ($sl(this->mag->get(0), nBits2)) | ($usr(this->mag->get(1), nBits));
		if (highBits == 0) {
			highBits = lowBits;
			lowBits = ($sl(this->mag->get(1), nBits2)) | ($usr(this->mag->get(2), nBits));
		}
	}
	twiceSignifFloor = ((highBits & BigInteger::LONG_MASK) << 32) | (lowBits & BigInteger::LONG_MASK);
	int64_t signifFloor = twiceSignifFloor >> 1;
	signifFloor &= (uint64_t)$DoubleConsts::SIGNIF_BIT_MASK;
	bool increment = (twiceSignifFloor & 1) != 0 && ((signifFloor & 1) != 0 || $$nc(abs())->getLowestSetBit() < shift);
	int64_t signifRounded = increment ? signifFloor + 1 : signifFloor;
	int64_t bits = $sl((int64_t)(exponent + $DoubleConsts::EXP_BIAS), $DoubleConsts::SIGNIFICAND_WIDTH - 1);
	bits += signifRounded;
	bits |= this->signum$ & $DoubleConsts::SIGN_BIT_MASK;
	return $Double::longBitsToDouble(bits);
}

$ints* BigInteger::stripLeadingZeroInts($ints* val) {
	$init(BigInteger);
	int32_t vlen = $nc(val)->length;
	int32_t keep = 0;
	for (keep = 0; keep < vlen && val->get(keep) == 0; ++keep) {
		;
	}
	return $Arrays::copyOfRange(val, keep, vlen);
}

$ints* BigInteger::trustedStripLeadingZeroInts($ints* val) {
	$init(BigInteger);
	int32_t vlen = $nc(val)->length;
	int32_t keep = 0;
	for (keep = 0; keep < vlen && val->get(keep) == 0; ++keep) {
		;
	}
	return keep == 0 ? val : $Arrays::copyOfRange(val, keep, vlen);
}

$ints* BigInteger::stripLeadingZeroBytes($bytes* a, int32_t off, int32_t len) {
	$init(BigInteger);
	int32_t indexBound = off + len;
	int32_t keep = 0;
	for (keep = off; keep < indexBound && $nc(a)->get(keep) == 0; ++keep) {
		;
	}
	int32_t intLength = (int32_t)((uint32_t)((indexBound - keep) + 3) >> 2);
	$var($ints, result, $new($ints, intLength));
	int32_t b = indexBound - 1;
	for (int32_t i = intLength - 1; i >= 0; --i) {
		result->set(i, $nc(a)->get(b--) & 0xff);
		int32_t bytesRemaining = b - keep + 1;
		int32_t bytesToTransfer = $Math::min(3, bytesRemaining);
		for (int32_t j = 8; j <= (bytesToTransfer << 3); j += 8) {
			(*result)[i] |= ($sl(a->get(b--) & 0xff, j));
		}
	}
	return result;
}

$ints* BigInteger::makePositive($bytes* a, int32_t off, int32_t len) {
	$init(BigInteger);
	int32_t keep = 0;
	int32_t k = 0;
	int32_t indexBound = off + len;
	for (keep = off; keep < indexBound && $nc(a)->get(keep) == -1; ++keep) {
		;
	}
	for (k = keep; k < indexBound && $nc(a)->get(k) == 0; ++k) {
		;
	}
	int32_t extraByte = (k == indexBound) ? 1 : 0;
	int32_t intLength = (int32_t)((uint32_t)((indexBound - keep + extraByte) + 3) >> 2);
	$var($ints, result, $new($ints, intLength));
	int32_t b = indexBound - 1;
	for (int32_t i = intLength - 1; i >= 0; --i) {
		result->set(i, $nc(a)->get(b--) & 0xff);
		int32_t numBytesToTransfer = $Math::min(3, b - keep + 1);
		if (numBytesToTransfer < 0) {
			numBytesToTransfer = 0;
		}
		for (int32_t j = 8; j <= 8 * numBytesToTransfer; j += 8) {
			(*result)[i] |= ($sl(a->get(b--) & 0xff, j));
		}
		int32_t mask = $usr(-1, 8 * (3 - numBytesToTransfer));
		result->set(i, ~result->get(i) & mask);
	}
	for (int32_t i = result->length - 1; i >= 0; --i) {
		result->set(i, (int32_t)((result->get(i) & BigInteger::LONG_MASK) + 1));
		if (result->get(i) != 0) {
			break;
		}
	}
	return result;
}

$ints* BigInteger::makePositive($ints* a) {
	$init(BigInteger);
	int32_t keep = 0;
	int32_t j = 0;
	for (keep = 0; keep < $nc(a)->length && a->get(keep) == -1; ++keep) {
		;
	}
	for (j = keep; j < a->length && a->get(j) == 0; ++j) {
		;
	}
	int32_t extraInt = (j == a->length ? 1 : 0);
	$var($ints, result, $new($ints, a->length - keep + extraInt));
	for (int32_t i = keep; i < a->length; ++i) {
		result->set(i - keep + extraInt, ~a->get(i));
	}
	for (int32_t i = result->length - 1; ++(*result)[i] == 0; --i) {
		;
	}
	return result;
}

int32_t BigInteger::intLength() {
	return ((int32_t)((uint32_t)bitLength() >> 5)) + 1;
}

int32_t BigInteger::signBit() {
	return this->signum$ < 0 ? 1 : 0;
}

int32_t BigInteger::signInt() {
	return this->signum$ < 0 ? -1 : 0;
}

int32_t BigInteger::getInt(int32_t n) {
	if (n < 0) {
		return 0;
	}
	if (n >= $nc(this->mag)->length) {
		return signInt();
	}
	int32_t magInt = this->mag->get(this->mag->length - n - 1);
	return (this->signum$ >= 0 ? magInt : (n <= firstNonzeroIntNum() ? -magInt : ~magInt));
}

int32_t BigInteger::firstNonzeroIntNum() {
	int32_t fn = this->firstNonzeroIntNumPlusTwo - 2;
	if (fn == -2) {
		int32_t i = 0;
		int32_t mlen = $nc(this->mag)->length;
		for (i = mlen - 1; i >= 0 && this->mag->get(i) == 0; --i) {
			;
		}
		fn = mlen - i - 1;
		this->firstNonzeroIntNumPlusTwo = fn + 2;
	}
	return fn;
}

void BigInteger::readObject($ObjectInputStream* s) {
	$useLocalObjectStack();
	$var($ObjectInputStream$GetField, fields, $nc(s)->readFields());
	int32_t sign = $nc(fields)->get("signum"_s, -2);
	$var($bytes, magnitude, $cast($bytes, fields->get("magnitude"_s, nullptr)));
	if (sign < -1 || sign > 1) {
		$var($String, message, "BigInteger: Invalid signum value"_s);
		if (fields->defaulted("signum"_s)) {
			$assign(message, "BigInteger: Signum not present in stream"_s);
		}
		$throwNew($StreamCorruptedException, message);
	}
	$var($ints, mag, stripLeadingZeroBytes(magnitude, 0, $nc(magnitude)->length));
	if ((mag->length == 0) != (sign == 0)) {
		$var($String, message, "BigInteger: signum-magnitude mismatch"_s);
		if (fields->defaulted("magnitude"_s)) {
			$assign(message, "BigInteger: Magnitude not present in stream"_s);
		}
		$throwNew($StreamCorruptedException, message);
	}
	$BigInteger$UnsafeHolder::putSign(this, sign);
	$BigInteger$UnsafeHolder::putMag(this, mag);
	if (mag->length >= BigInteger::MAX_MAG_LENGTH) {
		try {
			checkRange();
		} catch ($ArithmeticException& e) {
			$throwNew($StreamCorruptedException, "BigInteger: Out of the supported range"_s);
		}
	}
}

void BigInteger::writeObject($ObjectOutputStream* s) {
	$useLocalObjectStack();
	$var($ObjectOutputStream$PutField, fields, $nc(s)->putFields());
	$nc(fields)->put("signum"_s, this->signum$);
	fields->put("magnitude"_s, $(magSerializedForm()));
	fields->put("bitCount"_s, -1);
	fields->put("bitLength"_s, -1);
	fields->put("lowestSetBit"_s, -2);
	fields->put("firstNonzeroByteNum"_s, -2);
	s->writeFields();
}

$bytes* BigInteger::magSerializedForm() {
	int32_t len = $nc(this->mag)->length;
	int32_t bitLen = (len == 0 ? 0 : ((len - 1) << 5) + bitLengthForInt(this->mag->get(0)));
	int32_t byteLen = (int32_t)((uint32_t)(bitLen + 7) >> 3);
	$var($bytes, result, $new($bytes, byteLen));
	for (int32_t i = byteLen - 1, bytesCopied = 4, intIndex = len - 1, nextInt = 0; i >= 0; --i) {
		if (bytesCopied == 4) {
			nextInt = this->mag->get(intIndex--);
			bytesCopied = 1;
		} else {
			$usrAssign(nextInt, 8);
			++bytesCopied;
		}
		result->set(i, (int8_t)nextInt);
	}
	return result;
}

int64_t BigInteger::longValueExact() {
	if ($nc(this->mag)->length <= 2 && bitLength() <= 63) {
		return longValue();
	} else {
		$throwNew($ArithmeticException, "BigInteger out of long range"_s);
	}
}

int32_t BigInteger::intValueExact() {
	if ($nc(this->mag)->length <= 1 && bitLength() <= 31) {
		return intValue();
	} else {
		$throwNew($ArithmeticException, "BigInteger out of int range"_s);
	}
}

int16_t BigInteger::shortValueExact() {
	if ($nc(this->mag)->length <= 1 && bitLength() <= 31) {
		int32_t value = intValue();
		if (value >= $Short::MIN_VALUE && value <= $Short::MAX_VALUE) {
			return shortValue();
		}
	}
	$throwNew($ArithmeticException, "BigInteger out of short range"_s);
}

int8_t BigInteger::byteValueExact() {
	if ($nc(this->mag)->length <= 1 && bitLength() <= 31) {
		int32_t value = intValue();
		if (value >= $Byte::MIN_VALUE && value <= $Byte::MAX_VALUE) {
			return byteValue();
		}
	}
	$throwNew($ArithmeticException, "BigInteger out of byte range"_s);
}

int32_t BigInteger::compareTo(Object$* val) {
	return this->compareTo($cast(BigInteger, val));
}

void BigInteger::clinit$($Class* clazz) {
	$useLocalObjectStack();
	BigInteger::$assertionsDisabled = !BigInteger::class$->desiredAssertionStatus();
	$assignStatic(BigInteger::bitsPerDigit, $new($longs, {
		0,
		0,
		1024,
		1624,
		2048,
		2378,
		2648,
		2875,
		3072,
		3247,
		3402,
		3543,
		3672,
		3790,
		3899,
		4001,
		4096,
		4186,
		4271,
		4350,
		4426,
		4498,
		4567,
		4633,
		4696,
		4756,
		4814,
		4870,
		4923,
		4975,
		5025,
		5074,
		5120,
		5166,
		5210,
		5253,
		5295
	}));
	$assignStatic(BigInteger::SMALL_PRIME_PRODUCT, BigInteger::valueOf((int64_t)3 * 5 * 7 * 11 * 13 * 17 * 19 * 23 * 29 * 31 * 37 * 41));
	$assignStatic(BigInteger::posConst, $new($BigIntegerArray, BigInteger::MAX_CONSTANT + 1));
	$assignStatic(BigInteger::negConst, $new($BigIntegerArray, BigInteger::MAX_CONSTANT + 1));
	BigInteger::LOG_TWO = $Math::log(2.0);
	{
		;
		for (int32_t i = 1; i <= BigInteger::MAX_CONSTANT; ++i) {
			$var($ints, magnitude, $new($ints, 1));
			magnitude->set(0, i);
			BigInteger::posConst->set(i, $$new(BigInteger, magnitude, 1));
			BigInteger::negConst->set(i, $$new(BigInteger, magnitude, -1));
		}
		$assignStatic(BigInteger::powerCache, $new($BigIntegerArray2, $Character::MAX_RADIX + 1));
		$assignStatic(BigInteger::logCache, $new($doubles, $Character::MAX_RADIX + 1));
		for (int32_t i = $Character::MIN_RADIX; i <= $Character::MAX_RADIX; ++i) {
			$nc(BigInteger::powerCache)->set(i, $$new($BigIntegerArray, {$(BigInteger::valueOf(i))}));
			BigInteger::logCache->set(i, $Math::log((double)i));
		}
	}
	$assignStatic(BigInteger::ZERO, $new(BigInteger, $$new($ints, 0), 0));
	$assignStatic(BigInteger::ONE, BigInteger::valueOf(1));
	$assignStatic(BigInteger::TWO, BigInteger::valueOf(2));
	$assignStatic(BigInteger::NEGATIVE_ONE, BigInteger::valueOf(-1));
	$assignStatic(BigInteger::TEN, BigInteger::valueOf(10));
	$assignStatic(BigInteger::bnExpModThreshTable, $new($ints, {
		7,
		25,
		81,
		241,
		673,
		1793,
		$Integer::MAX_VALUE
	}));
	BigInteger::NUM_ZEROS = 63;
	$assignStatic(BigInteger::ZEROS, "0"_s->repeat(BigInteger::NUM_ZEROS));
	$assignStatic(BigInteger::digitsPerLong, $new($ints, {
		0,
		0,
		62,
		39,
		31,
		27,
		24,
		22,
		20,
		19,
		18,
		18,
		17,
		17,
		16,
		16,
		15,
		15,
		15,
		14,
		14,
		14,
		14,
		13,
		13,
		13,
		13,
		13,
		13,
		12,
		12,
		12,
		12,
		12,
		12,
		12,
		12
	}));
	$assignStatic(BigInteger::longRadix, $new($BigIntegerArray, {
		nullptr,
		nullptr,
		$(BigInteger::valueOf((int64_t)0x4000000000000000)),
		$(BigInteger::valueOf((int64_t)0x383d9170b85ff80b)),
		$(BigInteger::valueOf((int64_t)0x4000000000000000)),
		$(BigInteger::valueOf((int64_t)0x6765c793fa10079d)),
		$(BigInteger::valueOf((int64_t)0x41c21cb8e1000000)),
		$(BigInteger::valueOf((int64_t)0x3642798750226111)),
		$(BigInteger::valueOf((int64_t)0x1000000000000000)),
		$(BigInteger::valueOf((int64_t)0x12bf307ae81ffd59)),
		$(BigInteger::valueOf((int64_t)1000000000000000000)),
		$(BigInteger::valueOf((int64_t)0x4d28cb56c33fa539)),
		$(BigInteger::valueOf((int64_t)0x1eca170c00000000)),
		$(BigInteger::valueOf((int64_t)0x780c7372621bd74d)),
		$(BigInteger::valueOf((int64_t)0x1e39a5057d810000)),
		$(BigInteger::valueOf((int64_t)0x5b27ac993df97701)),
		$(BigInteger::valueOf((int64_t)0x1000000000000000)),
		$(BigInteger::valueOf((int64_t)0x27b95e997e21d9f1)),
		$(BigInteger::valueOf((int64_t)0x5da0e1e53c5c8000)),
		$(BigInteger::valueOf((int64_t)0x0b16a458ef403f19)),
		$(BigInteger::valueOf((int64_t)1638400000000000000)),
		$(BigInteger::valueOf((int64_t)0x2d04b7fdd9c0ef49)),
		$(BigInteger::valueOf((int64_t)0x5658597bcaa24000)),
		$(BigInteger::valueOf((int64_t)0x06feb266931a75b7)),
		$(BigInteger::valueOf((int64_t)0x0c29e98000000000)),
		$(BigInteger::valueOf((int64_t)0x14adf4b7320334b9)),
		$(BigInteger::valueOf((int64_t)0x226ed36478bfa000)),
		$(BigInteger::valueOf((int64_t)0x383d9170b85ff80b)),
		$(BigInteger::valueOf((int64_t)0x5a3c23e39c000000)),
		$(BigInteger::valueOf((int64_t)0x04e900abb53e6b71)),
		$(BigInteger::valueOf((int64_t)531441000000000000)),
		$(BigInteger::valueOf((int64_t)0x0aee5720ee830681)),
		$(BigInteger::valueOf((int64_t)0x1000000000000000)),
		$(BigInteger::valueOf((int64_t)0x172588ad4f5f0981)),
		$(BigInteger::valueOf((int64_t)0x211e44f7d02c1000)),
		$(BigInteger::valueOf((int64_t)0x2ee56725f06e5c71)),
		$(BigInteger::valueOf((int64_t)0x41c21cb8e1000000))
	}));
	$assignStatic(BigInteger::digitsPerInt, $new($ints, {
		0,
		0,
		30,
		19,
		15,
		13,
		11,
		11,
		10,
		9,
		9,
		8,
		8,
		8,
		8,
		7,
		7,
		7,
		7,
		7,
		7,
		7,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		5
	}));
	$assignStatic(BigInteger::intRadix, $new($ints, {
		0x00000000,
		0x00000000,
		0x40000000,
		0x4546b3db,
		0x40000000,
		0x48c27395,
		0x159fd800,
		0x75db9c97,
		0x40000000,
		0x17179149,
		0x3b9aca00,
		0x0cc6db61,
		0x19a10000,
		0x309f1021,
		0x57f6c100,
		0x0a2f1b6f,
		0x10000000,
		0x18754571,
		0x247dbc80,
		0x3547667b,
		0x4c4b4000,
		0x6b5a6e1d,
		0x06c20a40,
		0x08d2d931,
		0x0b640000,
		0x0e8d4a51,
		0x1269ae40,
		0x17179149,
		0x1cb91000,
		0x23744899,
		0x2b73a840,
		0x34e63b41,
		0x40000000,
		0x4cfa3cc1,
		0x5c13d840,
		0x6d91b519,
		0x039aa400
	}));
	$assignStatic(BigInteger::serialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "signum"_s, $Integer::TYPE),
		$$new($ObjectStreamField, "magnitude"_s, $getClass($bytes)),
		$$new($ObjectStreamField, "bitCount"_s, $Integer::TYPE),
		$$new($ObjectStreamField, "bitLength"_s, $Integer::TYPE),
		$$new($ObjectStreamField, "firstNonzeroByteNum"_s, $Integer::TYPE),
		$$new($ObjectStreamField, "lowestSetBit"_s, $Integer::TYPE)
	}));
}

BigInteger::BigInteger() {
}

$Class* BigInteger::load$($String* name, bool initialize) {
	$CompoundAttribute posConstfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$CompoundAttribute negConstfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(BigInteger, $assertionsDisabled)},
		{"signum", "I", nullptr, $FINAL, $field(BigInteger, signum$)},
		{"mag", "[I", nullptr, $FINAL, $field(BigInteger, mag)},
		{"bitCountPlusOne", "I", nullptr, $PRIVATE, $field(BigInteger, bitCountPlusOne)},
		{"bitLengthPlusOne", "I", nullptr, $PRIVATE, $field(BigInteger, bitLengthPlusOne)},
		{"lowestSetBitPlusTwo", "I", nullptr, $PRIVATE, $field(BigInteger, lowestSetBitPlusTwo)},
		{"firstNonzeroIntNumPlusTwo", "I", nullptr, $PRIVATE, $field(BigInteger, firstNonzeroIntNumPlusTwo)},
		{"LONG_MASK", "J", nullptr, $STATIC | $FINAL, $constField(BigInteger, LONG_MASK)},
		{"MAX_MAG_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BigInteger, MAX_MAG_LENGTH)},
		{"PRIME_SEARCH_BIT_LENGTH_LIMIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BigInteger, PRIME_SEARCH_BIT_LENGTH_LIMIT)},
		{"KARATSUBA_THRESHOLD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BigInteger, KARATSUBA_THRESHOLD)},
		{"TOOM_COOK_THRESHOLD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BigInteger, TOOM_COOK_THRESHOLD)},
		{"KARATSUBA_SQUARE_THRESHOLD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BigInteger, KARATSUBA_SQUARE_THRESHOLD)},
		{"TOOM_COOK_SQUARE_THRESHOLD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BigInteger, TOOM_COOK_SQUARE_THRESHOLD)},
		{"BURNIKEL_ZIEGLER_THRESHOLD", "I", nullptr, $STATIC | $FINAL, $constField(BigInteger, BURNIKEL_ZIEGLER_THRESHOLD)},
		{"BURNIKEL_ZIEGLER_OFFSET", "I", nullptr, $STATIC | $FINAL, $constField(BigInteger, BURNIKEL_ZIEGLER_OFFSET)},
		{"SCHOENHAGE_BASE_CONVERSION_THRESHOLD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BigInteger, SCHOENHAGE_BASE_CONVERSION_THRESHOLD)},
		{"MULTIPLY_SQUARE_THRESHOLD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BigInteger, MULTIPLY_SQUARE_THRESHOLD)},
		{"MONTGOMERY_INTRINSIC_THRESHOLD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BigInteger, MONTGOMERY_INTRINSIC_THRESHOLD)},
		{"bitsPerDigit", "[J", nullptr, $PRIVATE | $STATIC, $staticField(BigInteger, bitsPerDigit)},
		{"SMALL_PRIME_THRESHOLD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BigInteger, SMALL_PRIME_THRESHOLD)},
		{"DEFAULT_PRIME_CERTAINTY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BigInteger, DEFAULT_PRIME_CERTAINTY)},
		{"SMALL_PRIME_PRODUCT", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BigInteger, SMALL_PRIME_PRODUCT)},
		{"MAX_CONSTANT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BigInteger, MAX_CONSTANT)},
		{"posConst", "[Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BigInteger, posConst), posConstfieldAnnotations$$},
		{"negConst", "[Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BigInteger, negConst), negConstfieldAnnotations$$},
		{"powerCache", "[[Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(BigInteger, powerCache)},
		{"logCache", "[D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BigInteger, logCache)},
		{"LOG_TWO", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BigInteger, LOG_TWO)},
		{"ZERO", "Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BigInteger, ZERO)},
		{"ONE", "Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BigInteger, ONE)},
		{"TWO", "Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BigInteger, TWO)},
		{"NEGATIVE_ONE", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BigInteger, NEGATIVE_ONE)},
		{"TEN", "Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BigInteger, TEN)},
		{"bnExpModThreshTable", "[I", nullptr, $STATIC, $staticField(BigInteger, bnExpModThreshTable)},
		{"NUM_ZEROS", "I", nullptr, $PRIVATE | $STATIC, $staticField(BigInteger, NUM_ZEROS)},
		{"ZEROS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BigInteger, ZEROS)},
		{"digitsPerLong", "[I", nullptr, $PRIVATE | $STATIC, $staticField(BigInteger, digitsPerLong)},
		{"longRadix", "[Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $staticField(BigInteger, longRadix)},
		{"digitsPerInt", "[I", nullptr, $PRIVATE | $STATIC, $staticField(BigInteger, digitsPerInt)},
		{"intRadix", "[I", nullptr, $PRIVATE | $STATIC, $staticField(BigInteger, intRadix)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BigInteger, serialVersionUID)},
		{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BigInteger, serialPersistentFields)},
		{}
	};
	$CompoundAttribute implMontgomeryMultiplymethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute implMontgomerySquaremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute implMulAddmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute implMultiplyToLenmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute implSquareToLenmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute shiftLeftImplWorkermethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute shiftRightImplWorkermethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "([BII)V", nullptr, $PUBLIC, $method(BigInteger, init$, void, $bytes*, int32_t, int32_t)},
		{"<init>", "([B)V", nullptr, $PUBLIC, $method(BigInteger, init$, void, $bytes*)},
		{"<init>", "([I)V", nullptr, $PRIVATE, $method(BigInteger, init$, void, $ints*)},
		{"<init>", "(I[BII)V", nullptr, $PUBLIC, $method(BigInteger, init$, void, int32_t, $bytes*, int32_t, int32_t)},
		{"<init>", "(I[B)V", nullptr, $PUBLIC, $method(BigInteger, init$, void, int32_t, $bytes*)},
		{"<init>", "(I[I)V", nullptr, $PRIVATE, $method(BigInteger, init$, void, int32_t, $ints*)},
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(BigInteger, init$, void, $String*, int32_t)},
		{"<init>", "([CII)V", nullptr, 0, $method(BigInteger, init$, void, $chars*, int32_t, int32_t)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(BigInteger, init$, void, $String*)},
		{"<init>", "(ILjava/util/Random;)V", nullptr, $PUBLIC, $method(BigInteger, init$, void, int32_t, $Random*)},
		{"<init>", "(IILjava/util/Random;)V", nullptr, $PUBLIC, $method(BigInteger, init$, void, int32_t, int32_t, $Random*)},
		{"<init>", "([II)V", nullptr, 0, $method(BigInteger, init$, void, $ints*, int32_t)},
		{"<init>", "([BI)V", nullptr, $PRIVATE, $method(BigInteger, init$, void, $bytes*, int32_t)},
		{"<init>", "(J)V", nullptr, $PRIVATE, $method(BigInteger, init$, void, int64_t)},
		{"abs", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, abs, BigInteger*)},
		{"add", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, add, BigInteger*, BigInteger*)},
		{"add", "(J)Ljava/math/BigInteger;", nullptr, 0, $virtualMethod(BigInteger, add, BigInteger*, int64_t)},
		{"add", "([IJ)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, add, $ints*, $ints*, int64_t)},
		{"add", "([I[I)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, add, $ints*, $ints*, $ints*)},
		{"addOne", "([IIII)I", nullptr, $STATIC, $staticMethod(BigInteger, addOne, int32_t, $ints*, int32_t, int32_t, int32_t)},
		{"and", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, and$, BigInteger*, BigInteger*)},
		{"andNot", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, andNot, BigInteger*, BigInteger*)},
		{"bitCount", "()I", nullptr, $PUBLIC, $virtualMethod(BigInteger, bitCount, int32_t)},
		{"bitLength", "([II)I", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, bitLength, int32_t, $ints*, int32_t)},
		{"bitLength", "()I", nullptr, $PUBLIC, $virtualMethod(BigInteger, bitLength, int32_t)},
		{"bitLengthForInt", "(I)I", nullptr, $STATIC, $staticMethod(BigInteger, bitLengthForInt, int32_t, int32_t)},
		{"byteValueExact", "()B", nullptr, $PUBLIC, $virtualMethod(BigInteger, byteValueExact, int8_t)},
		{"checkRange", "()V", nullptr, $PRIVATE, $method(BigInteger, checkRange, void)},
		{"clearBit", "(I)Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, clearBit, BigInteger*, int32_t)},
		{"compareMagnitude", "(Ljava/math/BigInteger;)I", nullptr, $FINAL, $method(BigInteger, compareMagnitude, int32_t, BigInteger*)},
		{"compareMagnitude", "(J)I", nullptr, $FINAL, $method(BigInteger, compareMagnitude, int32_t, int64_t)},
		{"compareTo", "(Ljava/math/BigInteger;)I", nullptr, $PUBLIC, $virtualMethod(BigInteger, compareTo, int32_t, BigInteger*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(BigInteger, compareTo, int32_t, Object$*)},
		{"destructiveMulAdd", "([III)V", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, destructiveMulAdd, void, $ints*, int32_t, int32_t)},
		{"divide", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, divide, BigInteger*, BigInteger*)},
		{"divideAndRemainder", "(Ljava/math/BigInteger;)[Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, divideAndRemainder, $BigIntegerArray*, BigInteger*)},
		{"divideAndRemainderBurnikelZiegler", "(Ljava/math/BigInteger;)[Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(BigInteger, divideAndRemainderBurnikelZiegler, $BigIntegerArray*, BigInteger*)},
		{"divideAndRemainderKnuth", "(Ljava/math/BigInteger;)[Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(BigInteger, divideAndRemainderKnuth, $BigIntegerArray*, BigInteger*)},
		{"divideBurnikelZiegler", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(BigInteger, divideBurnikelZiegler, BigInteger*, BigInteger*)},
		{"divideKnuth", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(BigInteger, divideKnuth, BigInteger*, BigInteger*)},
		{"doubleValue", "()D", nullptr, $PUBLIC, $virtualMethod(BigInteger, doubleValue, double)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(BigInteger, equals, bool, Object$*)},
		{"exactDivideBy3", "()Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(BigInteger, exactDivideBy3, BigInteger*)},
		{"firstNonzeroIntNum", "()I", nullptr, $PRIVATE, $method(BigInteger, firstNonzeroIntNum, int32_t)},
		{"flipBit", "(I)Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, flipBit, BigInteger*, int32_t)},
		{"floatValue", "()F", nullptr, $PUBLIC, $virtualMethod(BigInteger, floatValue, float)},
		{"gcd", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, gcd, BigInteger*, BigInteger*)},
		{"getInt", "(I)I", nullptr, $PRIVATE, $method(BigInteger, getInt, int32_t, int32_t)},
		{"getLower", "(I)Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(BigInteger, getLower, BigInteger*, int32_t)},
		{"getLowestSetBit", "()I", nullptr, $PUBLIC, $virtualMethod(BigInteger, getLowestSetBit, int32_t)},
		{"getPrimeSearchLen", "(I)I", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, getPrimeSearchLen, int32_t, int32_t)},
		{"getRadixConversionCache", "(II)Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, getRadixConversionCache, BigInteger*, int32_t, int32_t)},
		{"getToomSlice", "(IIII)Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(BigInteger, getToomSlice, BigInteger*, int32_t, int32_t, int32_t, int32_t)},
		{"getUpper", "(I)Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(BigInteger, getUpper, BigInteger*, int32_t)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(BigInteger, hashCode, int32_t)},
		{"implMontgomeryMultiply", "([I[I[IIJ[I)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, implMontgomeryMultiply, $ints*, $ints*, $ints*, $ints*, int32_t, int64_t, $ints*), nullptr, nullptr, implMontgomeryMultiplymethodAnnotations$$},
		{"implMontgomeryMultiplyChecks", "([I[I[II[I)V", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, implMontgomeryMultiplyChecks, void, $ints*, $ints*, $ints*, int32_t, $ints*), "java.lang.RuntimeException"},
		{"implMontgomerySquare", "([I[IIJ[I)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, implMontgomerySquare, $ints*, $ints*, $ints*, int32_t, int64_t, $ints*), nullptr, nullptr, implMontgomerySquaremethodAnnotations$$},
		{"implMulAdd", "([I[IIII)I", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, implMulAdd, int32_t, $ints*, $ints*, int32_t, int32_t, int32_t), nullptr, nullptr, implMulAddmethodAnnotations$$},
		{"implMulAddCheck", "([I[IIII)V", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, implMulAddCheck, void, $ints*, $ints*, int32_t, int32_t, int32_t)},
		{"implMultiplyToLen", "([II[II[I)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, implMultiplyToLen, $ints*, $ints*, int32_t, $ints*, int32_t, $ints*), nullptr, nullptr, implMultiplyToLenmethodAnnotations$$},
		{"implSquareToLen", "([II[II)[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(BigInteger, implSquareToLen, $ints*, $ints*, int32_t, $ints*, int32_t), nullptr, nullptr, implSquareToLenmethodAnnotations$$},
		{"implSquareToLenChecks", "([II[II)V", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, implSquareToLenChecks, void, $ints*, int32_t, $ints*, int32_t), "java.lang.RuntimeException"},
		{"intArrayCmpToLen", "([I[II)I", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, intArrayCmpToLen, int32_t, $ints*, $ints*, int32_t)},
		{"intLength", "()I", nullptr, $PRIVATE, $method(BigInteger, intLength, int32_t)},
		{"intValue", "()I", nullptr, $PUBLIC, $virtualMethod(BigInteger, intValue, int32_t)},
		{"intValueExact", "()I", nullptr, $PUBLIC, $virtualMethod(BigInteger, intValueExact, int32_t)},
		{"isProbablePrime", "(I)Z", nullptr, $PUBLIC, $virtualMethod(BigInteger, isProbablePrime, bool, int32_t)},
		{"jacobiSymbol", "(ILjava/math/BigInteger;)I", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, jacobiSymbol, int32_t, int32_t, BigInteger*)},
		{"javaIncrement", "([I)[I", nullptr, 0, $virtualMethod(BigInteger, javaIncrement, $ints*, $ints*)},
		{"largePrime", "(IILjava/util/Random;)Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, largePrime, BigInteger*, int32_t, int32_t, $Random*)},
		{"leftShift", "([III)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, leftShift, $ints*, $ints*, int32_t, int32_t)},
		{"longValue", "()J", nullptr, $PUBLIC, $virtualMethod(BigInteger, longValue, int64_t)},
		{"longValueExact", "()J", nullptr, $PUBLIC, $virtualMethod(BigInteger, longValueExact, int64_t)},
		{"lucasLehmerSequence", "(ILjava/math/BigInteger;Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, lucasLehmerSequence, BigInteger*, int32_t, BigInteger*, BigInteger*)},
		{"magSerializedForm", "()[B", nullptr, $PRIVATE, $method(BigInteger, magSerializedForm, $bytes*)},
		{"makePositive", "([BII)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, makePositive, $ints*, $bytes*, int32_t, int32_t)},
		{"makePositive", "([I)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, makePositive, $ints*, $ints*)},
		{"materialize", "([II)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, materialize, $ints*, $ints*, int32_t)},
		{"max", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, max, BigInteger*, BigInteger*)},
		{"min", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, min, BigInteger*, BigInteger*)},
		{"mod", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, mod, BigInteger*, BigInteger*)},
		{"mod2", "(I)Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(BigInteger, mod2, BigInteger*, int32_t)},
		{"modInverse", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, modInverse, BigInteger*, BigInteger*)},
		{"modPow", "(Ljava/math/BigInteger;Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, modPow, BigInteger*, BigInteger*, BigInteger*)},
		{"modPow2", "(Ljava/math/BigInteger;I)Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(BigInteger, modPow2, BigInteger*, BigInteger*, int32_t)},
		{"montReduce", "([I[III)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, montReduce, $ints*, $ints*, $ints*, int32_t, int32_t)},
		{"montgomeryMultiply", "([I[I[IIJ[I)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, montgomeryMultiply, $ints*, $ints*, $ints*, $ints*, int32_t, int64_t, $ints*)},
		{"montgomerySquare", "([I[IIJ[I)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, montgomerySquare, $ints*, $ints*, $ints*, int32_t, int64_t, $ints*)},
		{"mulAdd", "([I[IIII)I", nullptr, $STATIC, $staticMethod(BigInteger, mulAdd, int32_t, $ints*, $ints*, int32_t, int32_t, int32_t)},
		{"multiply", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, multiply, BigInteger*, BigInteger*)},
		{"multiply", "(Ljava/math/BigInteger;Z)Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(BigInteger, multiply, BigInteger*, BigInteger*, bool)},
		{"multiply", "(J)Ljava/math/BigInteger;", nullptr, 0, $virtualMethod(BigInteger, multiply, BigInteger*, int64_t)},
		{"multiplyByInt", "([III)Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, multiplyByInt, BigInteger*, $ints*, int32_t, int32_t)},
		{"multiplyKaratsuba", "(Ljava/math/BigInteger;Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, multiplyKaratsuba, BigInteger*, BigInteger*, BigInteger*)},
		{"multiplyToLen", "([II[II[I)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, multiplyToLen, $ints*, $ints*, int32_t, $ints*, int32_t, $ints*)},
		{"multiplyToLenCheck", "([II)V", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, multiplyToLenCheck, void, $ints*, int32_t)},
		{"multiplyToomCook3", "(Ljava/math/BigInteger;Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, multiplyToomCook3, BigInteger*, BigInteger*, BigInteger*)},
		{"negate", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, negate, BigInteger*)},
		{"nextProbablePrime", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, nextProbablePrime, BigInteger*)},
		{"not", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, not$, BigInteger*)},
		{"oddModPow", "(Ljava/math/BigInteger;Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(BigInteger, oddModPow, BigInteger*, BigInteger*, BigInteger*)},
		{"or", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, or$, BigInteger*, BigInteger*)},
		{"padWithZeros", "(Ljava/lang/StringBuilder;I)V", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, padWithZeros, void, $StringBuilder*, int32_t)},
		{"parseInt", "([CII)I", nullptr, $PRIVATE, $method(BigInteger, parseInt, int32_t, $chars*, int32_t, int32_t)},
		{"passesLucasLehmer", "()Z", nullptr, $PRIVATE, $method(BigInteger, passesLucasLehmer, bool)},
		{"passesMillerRabin", "(ILjava/util/Random;)Z", nullptr, $PRIVATE, $method(BigInteger, passesMillerRabin, bool, int32_t, $Random*)},
		{"pow", "(I)Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, pow, BigInteger*, int32_t)},
		{"primeToCertainty", "(ILjava/util/Random;)Z", nullptr, 0, $virtualMethod(BigInteger, primeToCertainty, bool, int32_t, $Random*)},
		{"primitiveLeftShift", "([III)V", nullptr, $STATIC, $staticMethod(BigInteger, primitiveLeftShift, void, $ints*, int32_t, int32_t)},
		{"primitiveRightShift", "([III)V", nullptr, $STATIC, $staticMethod(BigInteger, primitiveRightShift, void, $ints*, int32_t, int32_t)},
		{"probablePrime", "(ILjava/util/Random;)Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC, $staticMethod(BigInteger, probablePrime, BigInteger*, int32_t, $Random*)},
		{"randomBits", "(ILjava/util/Random;)[B", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, randomBits, $bytes*, int32_t, $Random*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(BigInteger, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"remainder", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, remainder, BigInteger*, BigInteger*)},
		{"remainderBurnikelZiegler", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(BigInteger, remainderBurnikelZiegler, BigInteger*, BigInteger*)},
		{"remainderKnuth", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(BigInteger, remainderKnuth, BigInteger*, BigInteger*)},
		{"reportOverflow", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, reportOverflow, void)},
		{"setBit", "(I)Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, setBit, BigInteger*, int32_t)},
		{"shiftLeft", "(I)Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, shiftLeft, BigInteger*, int32_t)},
		{"shiftLeft", "([II)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, shiftLeft, $ints*, $ints*, int32_t)},
		{"shiftLeftImplWorker", "([I[IIII)V", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, shiftLeftImplWorker, void, $ints*, $ints*, int32_t, int32_t, int32_t), nullptr, nullptr, shiftLeftImplWorkermethodAnnotations$$},
		{"shiftRight", "(I)Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, shiftRight, BigInteger*, int32_t)},
		{"shiftRightImpl", "(I)Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(BigInteger, shiftRightImpl, BigInteger*, int32_t)},
		{"shiftRightImplWorker", "([I[IIII)V", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, shiftRightImplWorker, void, $ints*, $ints*, int32_t, int32_t, int32_t), nullptr, nullptr, shiftRightImplWorkermethodAnnotations$$},
		{"shortValueExact", "()S", nullptr, $PUBLIC, $virtualMethod(BigInteger, shortValueExact, int16_t)},
		{"signBit", "()I", nullptr, $PRIVATE, $method(BigInteger, signBit, int32_t)},
		{"signInt", "()I", nullptr, $PRIVATE, $method(BigInteger, signInt, int32_t)},
		{"signum", "()I", nullptr, $PUBLIC, $virtualMethod(BigInteger, signum, int32_t)},
		{"smallPrime", "(IILjava/util/Random;)Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, smallPrime, BigInteger*, int32_t, int32_t, $Random*)},
		{"smallToString", "(ILjava/lang/StringBuilder;I)V", nullptr, $PRIVATE, $method(BigInteger, smallToString, void, int32_t, $StringBuilder*, int32_t)},
		{"sqrt", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, sqrt, BigInteger*)},
		{"sqrtAndRemainder", "()[Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, sqrtAndRemainder, $BigIntegerArray*)},
		{"square", "()Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(BigInteger, square, BigInteger*)},
		{"square", "(Z)Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(BigInteger, square, BigInteger*, bool)},
		{"squareKaratsuba", "()Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(BigInteger, squareKaratsuba, BigInteger*)},
		{"squareToLen", "([II[I)[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(BigInteger, squareToLen, $ints*, $ints*, int32_t, $ints*)},
		{"squareToomCook3", "()Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(BigInteger, squareToomCook3, BigInteger*)},
		{"stripLeadingZeroBytes", "([BII)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, stripLeadingZeroBytes, $ints*, $bytes*, int32_t, int32_t)},
		{"stripLeadingZeroInts", "([I)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, stripLeadingZeroInts, $ints*, $ints*)},
		{"subN", "([I[II)I", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, subN, int32_t, $ints*, $ints*, int32_t)},
		{"subtract", "(J[I)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, subtract, $ints*, int64_t, $ints*)},
		{"subtract", "([IJ)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, subtract, $ints*, $ints*, int64_t)},
		{"subtract", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, subtract, BigInteger*, BigInteger*)},
		{"subtract", "([I[I)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, subtract, $ints*, $ints*, $ints*)},
		{"testBit", "(I)Z", nullptr, $PUBLIC, $virtualMethod(BigInteger, testBit, bool, int32_t)},
		{"toByteArray", "()[B", nullptr, $PUBLIC, $virtualMethod(BigInteger, toByteArray, $bytes*)},
		{"toString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BigInteger, toString, $String*, int32_t)},
		{"toString", "(Ljava/math/BigInteger;Ljava/lang/StringBuilder;II)V", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, toString, void, BigInteger*, $StringBuilder*, int32_t, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BigInteger, toString, $String*)},
		{"trustedStripLeadingZeroInts", "([I)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, trustedStripLeadingZeroInts, $ints*, $ints*)},
		{"valueOf", "(J)Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC, $staticMethod(BigInteger, valueOf, BigInteger*, int64_t)},
		{"valueOf", "([I)Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $staticMethod(BigInteger, valueOf, BigInteger*, $ints*)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(BigInteger, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{"xor", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(BigInteger, xor$, BigInteger*, BigInteger*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.math.BigInteger$UnsafeHolder", "java.math.BigInteger", "UnsafeHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.math.BigInteger",
		"java.lang.Number",
		"java.lang.Comparable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Number;Ljava/lang/Comparable<Ljava/math/BigInteger;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.math.BigInteger$UnsafeHolder"
	};
	$loadClass(BigInteger, name, initialize, &classInfo$$, BigInteger::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(BigInteger));
	});
	return class$;
}

$Class* BigInteger::class$ = nullptr;

	} // math
} // java