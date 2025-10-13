#include <java/util/SplittableRandom.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $RandomGenerator = ::java::util::random::RandomGenerator;
using $RandomGenerator$SplittableGenerator = ::java::util::random::RandomGenerator$SplittableGenerator;
using $DoubleStream = ::java::util::stream::DoubleStream;
using $IntStream = ::java::util::stream::IntStream;
using $LongStream = ::java::util::stream::LongStream;
using $Stream = ::java::util::stream::Stream;
using $RandomSupport = ::jdk::internal::util::random::RandomSupport;
using $RandomSupport$AbstractSpliteratorGenerator = ::jdk::internal::util::random::RandomSupport$AbstractSpliteratorGenerator;
using $RandomSupport$AbstractSplittableGenerator = ::jdk::internal::util::random::RandomSupport$AbstractSplittableGenerator;

namespace java {
	namespace util {

$NamedAttribute SplittableRandom_Attribute_var$0[] = {
	{"name", 's', "SplittableRandom"},
	{"i", 'I', "64"},
	{"j", 'I', "0"},
	{"k", 'I', "0"},
	{"equidistribution", 'I', "1"},
	{}
};
$CompoundAttribute _SplittableRandom_Annotations_[] = {
	{"Ljdk/internal/util/random/RandomSupport$RandomGeneratorProperties;", SplittableRandom_Attribute_var$0},
	{}
};


$FieldInfo _SplittableRandom_FieldInfo_[] = {
	{"GOLDEN_GAMMA", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SplittableRandom, GOLDEN_GAMMA)},
	{"seed", "J", nullptr, $PRIVATE, $field(SplittableRandom, seed)},
	{"gamma", "J", nullptr, $PRIVATE | $FINAL, $field(SplittableRandom, gamma)},
	{"proxy", "Ljava/util/SplittableRandom$AbstractSplittableGeneratorProxy;", nullptr, $PRIVATE, $field(SplittableRandom, proxy)},
	{"defaultGen", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SplittableRandom, defaultGen)},
	{}
};

$MethodInfo _SplittableRandom_MethodInfo_[] = {
	{"<init>", "(JJ)V", nullptr, $PRIVATE, $method(static_cast<void(SplittableRandom::*)(int64_t,int64_t)>(&SplittableRandom::init$))},
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(SplittableRandom::*)(int64_t)>(&SplittableRandom::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SplittableRandom::*)()>(&SplittableRandom::init$))},
	{"doubles", "(J)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC},
	{"doubles", "()Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC},
	{"doubles", "(JDD)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC},
	{"doubles", "(DD)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC},
	{"ints", "(J)Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"ints", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"ints", "(JII)Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"ints", "(II)Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"longs", "(J)Ljava/util/stream/LongStream;", nullptr, $PUBLIC},
	{"longs", "()Ljava/util/stream/LongStream;", nullptr, $PUBLIC},
	{"longs", "(JJJ)Ljava/util/stream/LongStream;", nullptr, $PUBLIC},
	{"longs", "(JJ)Ljava/util/stream/LongStream;", nullptr, $PUBLIC},
	{"mix32", "(J)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int64_t)>(&SplittableRandom::mix32))},
	{"mix64", "(J)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&SplittableRandom::mix64))},
	{"mixGamma", "(J)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&SplittableRandom::mixGamma))},
	{"nextBytes", "([B)V", nullptr, $PUBLIC},
	{"nextInt", "()I", nullptr, $PUBLIC},
	{"nextLong", "()J", nullptr, $PUBLIC},
	{"nextSeed", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(SplittableRandom::*)()>(&SplittableRandom::nextSeed))},
	{"split", "()Ljava/util/SplittableRandom;", nullptr, $PUBLIC},
	{"split", "(Ljava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/SplittableRandom;", nullptr, $PUBLIC},
	{"splits", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$SplittableGenerator;>;", $PUBLIC},
	{"splits", "(J)Ljava/util/stream/Stream;", "(J)Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$SplittableGenerator;>;", $PUBLIC},
	{"splits", "(Ljava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/stream/Stream;", "(Ljava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$SplittableGenerator;>;", $PUBLIC},
	{"splits", "(JLjava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/stream/Stream;", "(JLjava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$SplittableGenerator;>;", $PUBLIC},
	{}
};

$InnerClassInfo _SplittableRandom_InnerClassesInfo_[] = {
	{"java.util.random.RandomGenerator$SplittableGenerator", "java.util.random.RandomGenerator", "SplittableGenerator", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.SplittableRandom$AbstractSplittableGeneratorProxy", "java.util.SplittableRandom", "AbstractSplittableGeneratorProxy", $PRIVATE},
	{}
};

$ClassInfo _SplittableRandom_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.util.SplittableRandom",
	"java.lang.Object",
	"java.util.random.RandomGenerator$SplittableGenerator",
	_SplittableRandom_FieldInfo_,
	_SplittableRandom_MethodInfo_,
	nullptr,
	nullptr,
	_SplittableRandom_InnerClassesInfo_,
	_SplittableRandom_Annotations_,
	nullptr,
	"java.util.SplittableRandom$AbstractSplittableGeneratorProxy"
};

$Object* allocate$SplittableRandom($Class* clazz) {
	return $of($alloc(SplittableRandom));
}


$AtomicLong* SplittableRandom::defaultGen = nullptr;

void SplittableRandom::init$(int64_t seed, int64_t gamma) {
	this->seed = seed;
	this->gamma = gamma;
	$set(this, proxy, $new($SplittableRandom$AbstractSplittableGeneratorProxy, this));
}

int64_t SplittableRandom::mix64(int64_t z) {
	$init(SplittableRandom);
	z = (z ^ ((int64_t)((uint64_t)z >> 30))) * (int64_t)0xBF58476D1CE4E5B9;
	z = (z ^ ((int64_t)((uint64_t)z >> 27))) * (int64_t)0x94D049BB133111EB;
	return z ^ ((int64_t)((uint64_t)z >> 31));
}

int32_t SplittableRandom::mix32(int64_t z) {
	$init(SplittableRandom);
	z = (z ^ ((int64_t)((uint64_t)z >> 33))) * (int64_t)0x62A9D9ED799705F5;
	return (int32_t)((int64_t)((uint64_t)((z ^ ((int64_t)((uint64_t)z >> 28))) * (int64_t)0xCB24D0A5C88C35B3) >> 32));
}

int64_t SplittableRandom::mixGamma(int64_t z) {
	$init(SplittableRandom);
	z = (z ^ ((int64_t)((uint64_t)z >> 33))) * (int64_t)0xFF51AFD7ED558CCD;
	z = (z ^ ((int64_t)((uint64_t)z >> 33))) * (int64_t)0xC4CEB9FE1A85EC53;
	z = (z ^ ((int64_t)((uint64_t)z >> 33))) | (int64_t)1;
	int32_t n = $Long::bitCount(z ^ ((int64_t)((uint64_t)z >> 1)));
	return (n < 24) ? z ^ (int64_t)0xAAAAAAAAAAAAAAAA : z;
}

int64_t SplittableRandom::nextSeed() {
	return this->seed += this->gamma;
}

void SplittableRandom::init$(int64_t seed) {
	SplittableRandom::init$(seed, SplittableRandom::GOLDEN_GAMMA);
}

void SplittableRandom::init$() {
	int64_t s = $nc(SplittableRandom::defaultGen)->getAndAdd(2 * SplittableRandom::GOLDEN_GAMMA);
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

void clinit$SplittableRandom($Class* class$) {
	$assignStatic(SplittableRandom::defaultGen, $new($AtomicLong, $RandomSupport::initialSeed()));
}

SplittableRandom::SplittableRandom() {
}

$Class* SplittableRandom::load$($String* name, bool initialize) {
	$loadClass(SplittableRandom, name, initialize, &_SplittableRandom_ClassInfo_, clinit$SplittableRandom, allocate$SplittableRandom);
	return class$;
}

$Class* SplittableRandom::class$ = nullptr;

	} // util
} // java