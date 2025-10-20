#include <java/math/BitSieve.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _BitSieve_FieldInfo_[] = {
	{"bits", "[J", nullptr, $PRIVATE, $field(BitSieve, bits)},
	{"length", "I", nullptr, $PRIVATE, $field(BitSieve, length)},
	{"smallSieve", "Ljava/math/BitSieve;", nullptr, $PRIVATE | $STATIC, $staticField(BitSieve, smallSieve)},
	{}
};

$MethodInfo _BitSieve_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BitSieve::*)()>(&BitSieve::init$))},
	{"<init>", "(Ljava/math/BigInteger;I)V", nullptr, 0, $method(static_cast<void(BitSieve::*)($BigInteger*,int32_t)>(&BitSieve::init$))},
	{"bit", "(I)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int32_t)>(&BitSieve::bit))},
	{"get", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(BitSieve::*)(int32_t)>(&BitSieve::get))},
	{"retrieve", "(Ljava/math/BigInteger;ILjava/util/Random;)Ljava/math/BigInteger;", nullptr, 0},
	{"set", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(BitSieve::*)(int32_t)>(&BitSieve::set))},
	{"sieveSearch", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BitSieve::*)(int32_t,int32_t)>(&BitSieve::sieveSearch))},
	{"sieveSingle", "(III)V", nullptr, $PRIVATE, $method(static_cast<void(BitSieve::*)(int32_t,int32_t,int32_t)>(&BitSieve::sieveSingle))},
	{"unitIndex", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&BitSieve::unitIndex))},
	{}
};

$ClassInfo _BitSieve_ClassInfo_ = {
	$ACC_SUPER,
	"java.math.BitSieve",
	"java.lang.Object",
	nullptr,
	_BitSieve_FieldInfo_,
	_BitSieve_MethodInfo_
};

$Object* allocate$BitSieve($Class* clazz) {
	return $of($alloc(BitSieve));
}


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
	$useLocalCurrentObjectStackCache();
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
		step = $nc(BitSieve::smallSieve)->sieveSearch($nc(BitSieve::smallSieve)->length, step + 1);
		convertedStep = (step * 2) + 1;
	} while (step > 0);
}

int32_t BitSieve::unitIndex(int32_t bitIndex) {
	$init(BitSieve);
	return (int32_t)((uint32_t)bitIndex >> 6);
}

int64_t BitSieve::bit(int32_t bitIndex) {
	$init(BitSieve);
	return $sl((int64_t)1, (int32_t)(bitIndex & (uint32_t)((1 << 6) - 1)));
}

bool BitSieve::get(int32_t bitIndex) {
	int32_t unitIndex = BitSieve::unitIndex(bitIndex);
	return (((int64_t)($nc(this->bits)->get(unitIndex) & (uint64_t)bit(bitIndex))) != 0);
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
	$useLocalCurrentObjectStackCache();
	int32_t offset = 1;
	for (int32_t i = 0; i < $nc(this->bits)->length; ++i) {
		int64_t nextLong = ~$nc(this->bits)->get(i);
		for (int32_t j = 0; j < 64; ++j) {
			if (((int64_t)(nextLong & (uint64_t)(int64_t)1)) == 1) {
				$var($BigInteger, candidate, $nc(initValue)->add($($BigInteger::valueOf((int64_t)offset))));
				if ($nc(candidate)->primeToCertainty(certainty, random)) {
					return candidate;
				}
			}
			$usrAssign(nextLong, 1);
			offset += 2;
		}
	}
	return nullptr;
}

void clinit$BitSieve($Class* class$) {
	$assignStatic(BitSieve::smallSieve, $new(BitSieve));
}

BitSieve::BitSieve() {
}

$Class* BitSieve::load$($String* name, bool initialize) {
	$loadClass(BitSieve, name, initialize, &_BitSieve_ClassInfo_, clinit$BitSieve, allocate$BitSieve);
	return class$;
}

$Class* BitSieve::class$ = nullptr;

	} // math
} // java