#include <java/math/BitSieve.h>
#include <java/math/BigInteger.h>
#include <java/math/MutableBigInteger.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $MutableBigInteger = ::java::math::MutableBigInteger;
using $Random = ::java::util::Random;

namespace java {
	namespace math {

BitSieve* BitSieve::smallSieve = nullptr;

void BitSieve::init$() {
	this->length = 150 * 64;
	$set(this, bits, $new($longs, (unitIndex(this->length - 1) + 1)));
	set(0);
	int32_t nextIndex = 1;
	int32_t nextPrime = 3;
	do {
		sieveSingle(this->length, nextIndex + nextPrime, nextPrime);
		nextIndex = sieveSearch(this->length, nextIndex + 1);
		nextPrime = 2 * nextIndex + 1;
	} while ((nextIndex > 0) && (nextPrime < this->length));
}

void BitSieve::init$($BigInteger* base, int32_t searchLen) {
	$useLocalObjectStack();
	$set(this, bits, $new($longs, (unitIndex(searchLen - 1) + 1)));
	this->length = searchLen;
	int32_t start = 0;
	int32_t step = $nc(BitSieve::smallSieve)->sieveSearch($nc(BitSieve::smallSieve)->length, start);
	int32_t convertedStep = (step * 2) + 1;
	$var($MutableBigInteger, b, $new($MutableBigInteger, base));
	$var($MutableBigInteger, q, $new($MutableBigInteger));
	do {
		start = b->divideOneWord(convertedStep, q);
		start = convertedStep - start;
		if (start % 2 == 0) {
			start += convertedStep;
		}
		sieveSingle(searchLen, (start - 1) / 2, convertedStep);
		step = BitSieve::smallSieve->sieveSearch(BitSieve::smallSieve->length, step + 1);
		convertedStep = (step * 2) + 1;
	} while (step > 0);
}

int32_t BitSieve::unitIndex(int32_t bitIndex) {
	$init(BitSieve);
	return (int32_t)((uint32_t)bitIndex >> 6);
}

int64_t BitSieve::bit(int32_t bitIndex) {
	$init(BitSieve);
	return $sl((int64_t)1, bitIndex & ((1 << 6) - 1));
}

bool BitSieve::get(int32_t bitIndex) {
	int32_t unitIndex = BitSieve::unitIndex(bitIndex);
	return (($nc(this->bits)->get(unitIndex) & bit(bitIndex)) != 0);
}

void BitSieve::set(int32_t bitIndex) {
	int32_t unitIndex = BitSieve::unitIndex(bitIndex);
	(*$nc(this->bits))[unitIndex] |= bit(bitIndex);
}

int32_t BitSieve::sieveSearch(int32_t limit, int32_t start) {
	if (start >= limit) {
		return -1;
	}
	int32_t index = start;
	do {
		if (!get(index)) {
			return index;
		}
		++index;
	} while (index < limit - 1);
	return -1;
}

void BitSieve::sieveSingle(int32_t limit, int32_t start, int32_t step) {
	while (start < limit) {
		set(start);
		start += step;
	}
}

$BigInteger* BitSieve::retrieve($BigInteger* initValue, int32_t certainty, $Random* random) {
	$useLocalObjectStack();
	int32_t offset = 1;
	for (int32_t i = 0; i < $nc(this->bits)->length; ++i) {
		int64_t nextLong = ~this->bits->get(i);
		for (int32_t j = 0; j < 64; ++j) {
			if ((nextLong & 1) == 1) {
				$var($BigInteger, candidate, $nc(initValue)->add($($BigInteger::valueOf(offset))));
				if (candidate->primeToCertainty(certainty, random)) {
					return candidate;
				}
			}
			$usrAssign(nextLong, 1);
			offset += 2;
		}
	}
	return nullptr;
}

void BitSieve::clinit$($Class* clazz) {
	$assignStatic(BitSieve::smallSieve, $new(BitSieve));
}

BitSieve::BitSieve() {
}

$Class* BitSieve::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"bits", "[J", nullptr, $PRIVATE, $field(BitSieve, bits)},
		{"length", "I", nullptr, $PRIVATE, $field(BitSieve, length)},
		{"smallSieve", "Ljava/math/BitSieve;", nullptr, $PRIVATE | $STATIC, $staticField(BitSieve, smallSieve)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(BitSieve, init$, void)},
		{"<init>", "(Ljava/math/BigInteger;I)V", nullptr, 0, $method(BitSieve, init$, void, $BigInteger*, int32_t)},
		{"bit", "(I)J", nullptr, $PRIVATE | $STATIC, $staticMethod(BitSieve, bit, int64_t, int32_t)},
		{"get", "(I)Z", nullptr, $PRIVATE, $method(BitSieve, get, bool, int32_t)},
		{"retrieve", "(Ljava/math/BigInteger;ILjava/util/Random;)Ljava/math/BigInteger;", nullptr, 0, $virtualMethod(BitSieve, retrieve, $BigInteger*, $BigInteger*, int32_t, $Random*)},
		{"set", "(I)V", nullptr, $PRIVATE, $method(BitSieve, set, void, int32_t)},
		{"sieveSearch", "(II)I", nullptr, $PRIVATE, $method(BitSieve, sieveSearch, int32_t, int32_t, int32_t)},
		{"sieveSingle", "(III)V", nullptr, $PRIVATE, $method(BitSieve, sieveSingle, void, int32_t, int32_t, int32_t)},
		{"unitIndex", "(I)I", nullptr, $PRIVATE | $STATIC, $staticMethod(BitSieve, unitIndex, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.math.BitSieve",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BitSieve, name, initialize, &classInfo$$, BitSieve::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BitSieve);
	});
	return class$;
}

$Class* BitSieve::class$ = nullptr;

	} // math
} // java