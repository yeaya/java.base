#include <java/util/SplittableRandom.h>
#include <java/util/SplittableRandom$AbstractSplittableGeneratorProxy.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <java/util/random/RandomGenerator$SplittableGenerator.h>
#include <java/util/random/RandomGenerator.h>
#include <java/util/stream/DoubleStream.h>
#include <java/util/stream/IntStream.h>
#include <java/util/stream/LongStream.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/util/random/RandomSupport$AbstractSpliteratorGenerator.h>
#include <jdk/internal/util/random/RandomSupport.h>
#include <jcpp.h>

#undef GOLDEN_GAMMA
#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SplittableRandom$AbstractSplittableGeneratorProxy = ::java::util::SplittableRandom$AbstractSplittableGeneratorProxy;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;
using $RandomGenerator$SplittableGenerator = ::java::util::random::RandomGenerator$SplittableGenerator;
using $DoubleStream = ::java::util::stream::DoubleStream;
using $IntStream = ::java::util::stream::IntStream;
using $LongStream = ::java::util::stream::LongStream;
using $Stream = ::java::util::stream::Stream;
using $RandomSupport = ::jdk::internal::util::random::RandomSupport;

namespace java {
	namespace util {

$AtomicLong* SplittableRandom::defaultGen = nullptr;

void SplittableRandom::init$(int64_t seed, int64_t gamma) {
	this->seed = seed;
	this->gamma = gamma;
	$set(this, proxy, $new($SplittableRandom$AbstractSplittableGeneratorProxy, this));
}

int64_t SplittableRandom::mix64(int64_t z) {
	$init(SplittableRandom);
	z = (z ^ ((int64_t)((uint64_t)z >> 30))) * (int64_t)0xbf58476d1ce4e5b9;
	z = (z ^ ((int64_t)((uint64_t)z >> 27))) * (int64_t)0x94d049bb133111eb;
	return z ^ ((int64_t)((uint64_t)z >> 31));
}

int32_t SplittableRandom::mix32(int64_t z) {
	$init(SplittableRandom);
	z = (z ^ ((int64_t)((uint64_t)z >> 33))) * (int64_t)0x62a9d9ed799705f5;
	return (int32_t)((int64_t)((uint64_t)((z ^ ((int64_t)((uint64_t)z >> 28))) * (int64_t)0xcb24d0a5c88c35b3) >> 32));
}

int64_t SplittableRandom::mixGamma(int64_t z) {
	$init(SplittableRandom);
	z = (z ^ ((int64_t)((uint64_t)z >> 33))) * (int64_t)0xff51afd7ed558ccd;
	z = (z ^ ((int64_t)((uint64_t)z >> 33))) * (int64_t)0xc4ceb9fe1a85ec53;
	z = (z ^ ((int64_t)((uint64_t)z >> 33))) | (int64_t)1;
	int32_t n = $Long::bitCount(z ^ ((int64_t)((uint64_t)z >> 1)));
	return (n < 24) ? z ^ (int64_t)0xaaaaaaaaaaaaaaaa : z;
}

int64_t SplittableRandom::nextSeed() {
	return this->seed += this->gamma;
}

void SplittableRandom::init$(int64_t seed) {
	SplittableRandom::init$(seed, SplittableRandom::GOLDEN_GAMMA);
}

void SplittableRandom::init$() {
	int64_t s = SplittableRandom::defaultGen->getAndAdd(2 * SplittableRandom::GOLDEN_GAMMA);
	this->seed = mix64(s);
	this->gamma = mixGamma(s + SplittableRandom::GOLDEN_GAMMA);
	$set(this, proxy, $new($SplittableRandom$AbstractSplittableGeneratorProxy, this));
}

SplittableRandom* SplittableRandom::split() {
	int64_t var$0 = nextLong();
	return $new(SplittableRandom, var$0, mixGamma(nextSeed()));
}

SplittableRandom* SplittableRandom::split($RandomGenerator$SplittableGenerator* source) {
	int64_t var$0 = $nc(source)->nextLong();
	return $new(SplittableRandom, var$0, mixGamma(source->nextLong()));
}

int32_t SplittableRandom::nextInt() {
	return mix32(nextSeed());
}

int64_t SplittableRandom::nextLong() {
	return mix64(nextSeed());
}

void SplittableRandom::nextBytes($bytes* bytes) {
	$nc(this->proxy)->nextBytes(bytes);
}

$Stream* SplittableRandom::splits() {
	return $nc(this->proxy)->splits();
}

$Stream* SplittableRandom::splits(int64_t streamSize) {
	return $nc(this->proxy)->splits(streamSize, this);
}

$Stream* SplittableRandom::splits($RandomGenerator$SplittableGenerator* source) {
	return $nc(this->proxy)->splits($Long::MAX_VALUE, source);
}

$Stream* SplittableRandom::splits(int64_t streamSize, $RandomGenerator$SplittableGenerator* source) {
	return $nc(this->proxy)->splits(streamSize, source);
}

$IntStream* SplittableRandom::ints(int64_t streamSize) {
	return $nc(this->proxy)->ints(streamSize);
}

$IntStream* SplittableRandom::ints() {
	return $nc(this->proxy)->ints();
}

$IntStream* SplittableRandom::ints(int64_t streamSize, int32_t randomNumberOrigin, int32_t randomNumberBound) {
	return $nc(this->proxy)->ints(streamSize, randomNumberOrigin, randomNumberBound);
}

$IntStream* SplittableRandom::ints(int32_t randomNumberOrigin, int32_t randomNumberBound) {
	return $nc(this->proxy)->ints(randomNumberOrigin, randomNumberBound);
}

$LongStream* SplittableRandom::longs(int64_t streamSize) {
	return $nc(this->proxy)->longs(streamSize);
}

$LongStream* SplittableRandom::longs() {
	return $nc(this->proxy)->longs();
}

$LongStream* SplittableRandom::longs(int64_t streamSize, int64_t randomNumberOrigin, int64_t randomNumberBound) {
	return $nc(this->proxy)->longs(streamSize, randomNumberOrigin, randomNumberBound);
}

$LongStream* SplittableRandom::longs(int64_t randomNumberOrigin, int64_t randomNumberBound) {
	return $nc(this->proxy)->longs(randomNumberOrigin, randomNumberBound);
}

$DoubleStream* SplittableRandom::doubles(int64_t streamSize) {
	return $nc(this->proxy)->doubles(streamSize);
}

$DoubleStream* SplittableRandom::doubles() {
	return $nc(this->proxy)->doubles();
}

$DoubleStream* SplittableRandom::doubles(int64_t streamSize, double randomNumberOrigin, double randomNumberBound) {
	return $nc(this->proxy)->doubles(streamSize, randomNumberOrigin, randomNumberBound);
}

$DoubleStream* SplittableRandom::doubles(double randomNumberOrigin, double randomNumberBound) {
	return $nc(this->proxy)->doubles(randomNumberOrigin, randomNumberBound);
}

void SplittableRandom::clinit$($Class* clazz) {
	$assignStatic(SplittableRandom::defaultGen, $new($AtomicLong, $RandomSupport::initialSeed()));
}

SplittableRandom::SplittableRandom() {
}

$Class* SplittableRandom::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"GOLDEN_GAMMA", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SplittableRandom, GOLDEN_GAMMA)},
		{"seed", "J", nullptr, $PRIVATE, $field(SplittableRandom, seed)},
		{"gamma", "J", nullptr, $PRIVATE | $FINAL, $field(SplittableRandom, gamma)},
		{"proxy", "Ljava/util/SplittableRandom$AbstractSplittableGeneratorProxy;", nullptr, $PRIVATE, $field(SplittableRandom, proxy)},
		{"defaultGen", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SplittableRandom, defaultGen)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(JJ)V", nullptr, $PRIVATE, $method(SplittableRandom, init$, void, int64_t, int64_t)},
		{"<init>", "(J)V", nullptr, $PUBLIC, $method(SplittableRandom, init$, void, int64_t)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(SplittableRandom, init$, void)},
		{"doubles", "(J)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC, $virtualMethod(SplittableRandom, doubles, $DoubleStream*, int64_t)},
		{"doubles", "()Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC, $virtualMethod(SplittableRandom, doubles, $DoubleStream*)},
		{"doubles", "(JDD)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC, $virtualMethod(SplittableRandom, doubles, $DoubleStream*, int64_t, double, double)},
		{"doubles", "(DD)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC, $virtualMethod(SplittableRandom, doubles, $DoubleStream*, double, double)},
		{"ints", "(J)Ljava/util/stream/IntStream;", nullptr, $PUBLIC, $virtualMethod(SplittableRandom, ints, $IntStream*, int64_t)},
		{"ints", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC, $virtualMethod(SplittableRandom, ints, $IntStream*)},
		{"ints", "(JII)Ljava/util/stream/IntStream;", nullptr, $PUBLIC, $virtualMethod(SplittableRandom, ints, $IntStream*, int64_t, int32_t, int32_t)},
		{"ints", "(II)Ljava/util/stream/IntStream;", nullptr, $PUBLIC, $virtualMethod(SplittableRandom, ints, $IntStream*, int32_t, int32_t)},
		{"longs", "(J)Ljava/util/stream/LongStream;", nullptr, $PUBLIC, $virtualMethod(SplittableRandom, longs, $LongStream*, int64_t)},
		{"longs", "()Ljava/util/stream/LongStream;", nullptr, $PUBLIC, $virtualMethod(SplittableRandom, longs, $LongStream*)},
		{"longs", "(JJJ)Ljava/util/stream/LongStream;", nullptr, $PUBLIC, $virtualMethod(SplittableRandom, longs, $LongStream*, int64_t, int64_t, int64_t)},
		{"longs", "(JJ)Ljava/util/stream/LongStream;", nullptr, $PUBLIC, $virtualMethod(SplittableRandom, longs, $LongStream*, int64_t, int64_t)},
		{"mix32", "(J)I", nullptr, $PRIVATE | $STATIC, $staticMethod(SplittableRandom, mix32, int32_t, int64_t)},
		{"mix64", "(J)J", nullptr, $PRIVATE | $STATIC, $staticMethod(SplittableRandom, mix64, int64_t, int64_t)},
		{"mixGamma", "(J)J", nullptr, $PRIVATE | $STATIC, $staticMethod(SplittableRandom, mixGamma, int64_t, int64_t)},
		{"nextBytes", "([B)V", nullptr, $PUBLIC, $virtualMethod(SplittableRandom, nextBytes, void, $bytes*)},
		{"nextInt", "()I", nullptr, $PUBLIC, $virtualMethod(SplittableRandom, nextInt, int32_t)},
		{"nextLong", "()J", nullptr, $PUBLIC, $virtualMethod(SplittableRandom, nextLong, int64_t)},
		{"nextSeed", "()J", nullptr, $PRIVATE, $method(SplittableRandom, nextSeed, int64_t)},
		{"split", "()Ljava/util/SplittableRandom;", nullptr, $PUBLIC, $virtualMethod(SplittableRandom, split, SplittableRandom*)},
		{"split", "(Ljava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/SplittableRandom;", nullptr, $PUBLIC, $virtualMethod(SplittableRandom, split, SplittableRandom*, $RandomGenerator$SplittableGenerator*)},
		{"splits", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$SplittableGenerator;>;", $PUBLIC, $virtualMethod(SplittableRandom, splits, $Stream*)},
		{"splits", "(J)Ljava/util/stream/Stream;", "(J)Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$SplittableGenerator;>;", $PUBLIC, $virtualMethod(SplittableRandom, splits, $Stream*, int64_t)},
		{"splits", "(Ljava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/stream/Stream;", "(Ljava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$SplittableGenerator;>;", $PUBLIC, $virtualMethod(SplittableRandom, splits, $Stream*, $RandomGenerator$SplittableGenerator*)},
		{"splits", "(JLjava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/stream/Stream;", "(JLjava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$SplittableGenerator;>;", $PUBLIC, $virtualMethod(SplittableRandom, splits, $Stream*, int64_t, $RandomGenerator$SplittableGenerator*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.random.RandomGenerator$SplittableGenerator", "java.util.random.RandomGenerator", "SplittableGenerator", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.SplittableRandom$AbstractSplittableGeneratorProxy", "java.util.SplittableRandom", "AbstractSplittableGeneratorProxy", $PRIVATE},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"name", 's', "SplittableRandom"},
		{"i", 'I', "64"},
		{"j", 'I', "0"},
		{"k", 'I', "0"},
		{"equidistribution", 'I', "1"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljdk/internal/util/random/RandomSupport$RandomGeneratorProperties;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.util.SplittableRandom",
		"java.lang.Object",
		"java.util.random.RandomGenerator$SplittableGenerator",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"java.util.SplittableRandom$AbstractSplittableGeneratorProxy"
	};
	$loadClass(SplittableRandom, name, initialize, &classInfo$$, SplittableRandom::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SplittableRandom);
	});
	return class$;
}

$Class* SplittableRandom::class$ = nullptr;

	} // util
} // java