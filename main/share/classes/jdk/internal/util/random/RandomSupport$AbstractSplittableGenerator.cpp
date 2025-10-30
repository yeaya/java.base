#include <jdk/internal/util/random/RandomSupport$AbstractSplittableGenerator.h>

#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/random/RandomGenerator$SplittableGenerator.h>
#include <java/util/stream/DoubleStream.h>
#include <java/util/stream/IntStream.h>
#include <java/util/stream/LongStream.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSupport.h>
#include <jdk/internal/util/random/RandomSupport$AbstractSpliteratorGenerator.h>
#include <jdk/internal/util/random/RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator.h>
#include <jdk/internal/util/random/RandomSupport.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $RandomGenerator$SplittableGenerator = ::java::util::random::RandomGenerator$SplittableGenerator;
using $DoubleStream = ::java::util::stream::DoubleStream;
using $IntStream = ::java::util::stream::IntStream;
using $LongStream = ::java::util::stream::LongStream;
using $Stream = ::java::util::stream::Stream;
using $StreamSupport = ::java::util::stream::StreamSupport;
using $RandomSupport = ::jdk::internal::util::random::RandomSupport;
using $RandomSupport$AbstractSpliteratorGenerator = ::jdk::internal::util::random::RandomSupport$AbstractSpliteratorGenerator;
using $RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator = ::jdk::internal::util::random::RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator;

namespace jdk {
	namespace internal {
		namespace util {
			namespace random {

$MethodInfo _RandomSupport$AbstractSplittableGenerator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*doubles", "(J)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC},
	{"*doubles", "()Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC},
	{"*doubles", "(JDD)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC},
	{"*doubles", "(DD)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(RandomSupport$AbstractSplittableGenerator::*)()>(&RandomSupport$AbstractSplittableGenerator::init$))},
	{"*ints", "(J)Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"*ints", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"*ints", "(JII)Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"*ints", "(II)Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"*isDeprecated", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*longs", "(J)Ljava/util/stream/LongStream;", nullptr, $PUBLIC},
	{"*longs", "()Ljava/util/stream/LongStream;", nullptr, $PUBLIC},
	{"*longs", "(JJJ)Ljava/util/stream/LongStream;", nullptr, $PUBLIC},
	{"*longs", "(JJ)Ljava/util/stream/LongStream;", nullptr, $PUBLIC},
	{"makeSplitsSpliterator", "(JJLjava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/Spliterator;", "(JJLjava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/Spliterator<Ljava/util/random/RandomGenerator$SplittableGenerator;>;", 0},
	{"*nextBoolean", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*nextBytes", "([B)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*nextDouble", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"*nextDouble", "(D)D", nullptr, $PUBLIC | $ABSTRACT},
	{"*nextDouble", "(DD)D", nullptr, $PUBLIC | $ABSTRACT},
	{"*nextExponential", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"*nextFloat", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"*nextFloat", "(F)F", nullptr, $PUBLIC | $ABSTRACT},
	{"*nextFloat", "(FF)F", nullptr, $PUBLIC | $ABSTRACT},
	{"*nextGaussian", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"*nextGaussian", "(DD)D", nullptr, $PUBLIC | $ABSTRACT},
	{"*nextInt", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"*nextInt", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"*nextInt", "(II)I", nullptr, $PUBLIC | $ABSTRACT},
	{"*nextLong", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"*nextLong", "(J)J", nullptr, $PUBLIC | $ABSTRACT},
	{"*nextLong", "(JJ)J", nullptr, $PUBLIC | $ABSTRACT},
	{"split", "()Ljava/util/random/RandomGenerator$SplittableGenerator;", nullptr, $PUBLIC},
	{"splits", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$SplittableGenerator;>;", $PUBLIC},
	{"splits", "(J)Ljava/util/stream/Stream;", "(J)Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$SplittableGenerator;>;", $PUBLIC},
	{"splits", "(Ljava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/stream/Stream;", "(Ljava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$SplittableGenerator;>;", $PUBLIC},
	{"splits", "(JLjava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/stream/Stream;", "(JLjava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$SplittableGenerator;>;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RandomSupport$AbstractSplittableGenerator_InnerClassesInfo_[] = {
	{"jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator", "jdk.internal.util.random.RandomSupport", "AbstractSplittableGenerator", $PUBLIC | $STATIC | $ABSTRACT},
	{"jdk.internal.util.random.RandomSupport$AbstractSpliteratorGenerator", "jdk.internal.util.random.RandomSupport", "AbstractSpliteratorGenerator", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.random.RandomGenerator$SplittableGenerator", "java.util.random.RandomGenerator", "SplittableGenerator", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator", "jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator", "RandomSplitsSpliterator", $STATIC},
	{"jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator$RandomDoublesSpliterator", "jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator", "RandomDoublesSpliterator", $STATIC},
	{"jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator$RandomLongsSpliterator", "jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator", "RandomLongsSpliterator", $STATIC},
	{"jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator$RandomIntsSpliterator", "jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator", "RandomIntsSpliterator", $STATIC},
	{}
};

$ClassInfo _RandomSupport$AbstractSplittableGenerator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator",
	"jdk.internal.util.random.RandomSupport$AbstractSpliteratorGenerator",
	"java.util.random.RandomGenerator$SplittableGenerator",
	nullptr,
	_RandomSupport$AbstractSplittableGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_RandomSupport$AbstractSplittableGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.util.random.RandomSupport"
};

$Object* allocate$RandomSupport$AbstractSplittableGenerator($Class* clazz) {
	return $of($alloc(RandomSupport$AbstractSplittableGenerator));
}

$IntStream* RandomSupport$AbstractSplittableGenerator::ints(int64_t streamSize) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::ints(streamSize);
}

$IntStream* RandomSupport$AbstractSplittableGenerator::ints() {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::ints();
}

$IntStream* RandomSupport$AbstractSplittableGenerator::ints(int64_t streamSize, int32_t randomNumberOrigin, int32_t randomNumberBound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::ints(streamSize, randomNumberOrigin, randomNumberBound);
}

$IntStream* RandomSupport$AbstractSplittableGenerator::ints(int32_t randomNumberOrigin, int32_t randomNumberBound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::ints(randomNumberOrigin, randomNumberBound);
}

$LongStream* RandomSupport$AbstractSplittableGenerator::longs(int64_t streamSize) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::longs(streamSize);
}

$LongStream* RandomSupport$AbstractSplittableGenerator::longs() {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::longs();
}

$LongStream* RandomSupport$AbstractSplittableGenerator::longs(int64_t streamSize, int64_t randomNumberOrigin, int64_t randomNumberBound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::longs(streamSize, randomNumberOrigin, randomNumberBound);
}

$LongStream* RandomSupport$AbstractSplittableGenerator::longs(int64_t randomNumberOrigin, int64_t randomNumberBound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::longs(randomNumberOrigin, randomNumberBound);
}

$DoubleStream* RandomSupport$AbstractSplittableGenerator::doubles(int64_t streamSize) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::doubles(streamSize);
}

$DoubleStream* RandomSupport$AbstractSplittableGenerator::doubles() {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::doubles();
}

$DoubleStream* RandomSupport$AbstractSplittableGenerator::doubles(int64_t streamSize, double randomNumberOrigin, double randomNumberBound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::doubles(streamSize, randomNumberOrigin, randomNumberBound);
}

$DoubleStream* RandomSupport$AbstractSplittableGenerator::doubles(double randomNumberOrigin, double randomNumberBound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::doubles(randomNumberOrigin, randomNumberBound);
}

bool RandomSupport$AbstractSplittableGenerator::isDeprecated() {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::isDeprecated();
}

bool RandomSupport$AbstractSplittableGenerator::nextBoolean() {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextBoolean();
}

void RandomSupport$AbstractSplittableGenerator::nextBytes($bytes* bytes) {
	this->$RandomSupport$AbstractSpliteratorGenerator::nextBytes(bytes);
}

float RandomSupport$AbstractSplittableGenerator::nextFloat() {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextFloat();
}

float RandomSupport$AbstractSplittableGenerator::nextFloat(float bound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextFloat(bound);
}

float RandomSupport$AbstractSplittableGenerator::nextFloat(float origin, float bound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextFloat(origin, bound);
}

double RandomSupport$AbstractSplittableGenerator::nextDouble() {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextDouble();
}

double RandomSupport$AbstractSplittableGenerator::nextDouble(double bound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextDouble(bound);
}

double RandomSupport$AbstractSplittableGenerator::nextDouble(double origin, double bound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextDouble(origin, bound);
}

int32_t RandomSupport$AbstractSplittableGenerator::nextInt() {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextInt();
}

int32_t RandomSupport$AbstractSplittableGenerator::nextInt(int32_t bound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextInt(bound);
}

int32_t RandomSupport$AbstractSplittableGenerator::nextInt(int32_t origin, int32_t bound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextInt(origin, bound);
}

int64_t RandomSupport$AbstractSplittableGenerator::nextLong(int64_t bound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextLong(bound);
}

int64_t RandomSupport$AbstractSplittableGenerator::nextLong(int64_t origin, int64_t bound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextLong(origin, bound);
}

double RandomSupport$AbstractSplittableGenerator::nextGaussian() {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextGaussian();
}

double RandomSupport$AbstractSplittableGenerator::nextGaussian(double mean, double stddev) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextGaussian(mean, stddev);
}

double RandomSupport$AbstractSplittableGenerator::nextExponential() {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextExponential();
}

int32_t RandomSupport$AbstractSplittableGenerator::hashCode() {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::hashCode();
}

bool RandomSupport$AbstractSplittableGenerator::equals(Object$* obj) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::equals(obj);
}

$Object* RandomSupport$AbstractSplittableGenerator::clone() {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::clone();
}

$String* RandomSupport$AbstractSplittableGenerator::toString() {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::toString();
}

void RandomSupport$AbstractSplittableGenerator::finalize() {
	this->$RandomSupport$AbstractSpliteratorGenerator::finalize();
}

void RandomSupport$AbstractSplittableGenerator::init$() {
	$RandomSupport$AbstractSpliteratorGenerator::init$();
}

$Spliterator* RandomSupport$AbstractSplittableGenerator::makeSplitsSpliterator(int64_t index, int64_t fence, $RandomGenerator$SplittableGenerator* source) {
	return $new($RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator, source, index, fence, this);
}

$RandomGenerator$SplittableGenerator* RandomSupport$AbstractSplittableGenerator::split() {
	return this->split(this);
}

$Stream* RandomSupport$AbstractSplittableGenerator::splits() {
	return this->splits($Long::MAX_VALUE, this);
}

$Stream* RandomSupport$AbstractSplittableGenerator::splits(int64_t streamSize) {
	return this->splits(streamSize, this);
}

$Stream* RandomSupport$AbstractSplittableGenerator::splits($RandomGenerator$SplittableGenerator* source) {
	return this->splits($Long::MAX_VALUE, source);
}

$Stream* RandomSupport$AbstractSplittableGenerator::splits(int64_t streamSize, $RandomGenerator$SplittableGenerator* source) {
	$RandomSupport::checkStreamSize(streamSize);
	$Objects::requireNonNull($of(source), "source should be non-null"_s);
	return $StreamSupport::stream($(makeSplitsSpliterator(0, streamSize, source)), false);
}

RandomSupport$AbstractSplittableGenerator::RandomSupport$AbstractSplittableGenerator() {
}

$Class* RandomSupport$AbstractSplittableGenerator::load$($String* name, bool initialize) {
	$loadClass(RandomSupport$AbstractSplittableGenerator, name, initialize, &_RandomSupport$AbstractSplittableGenerator_ClassInfo_, allocate$RandomSupport$AbstractSplittableGenerator);
	return class$;
}

$Class* RandomSupport$AbstractSplittableGenerator::class$ = nullptr;

			} // random
		} // util
	} // internal
} // jdk