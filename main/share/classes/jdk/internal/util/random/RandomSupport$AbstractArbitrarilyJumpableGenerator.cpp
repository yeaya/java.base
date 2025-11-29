#include <jdk/internal/util/random/RandomSupport$AbstractArbitrarilyJumpableGenerator.h>

#include <java/util/Spliterator.h>
#include <java/util/random/RandomGenerator$ArbitrarilyJumpableGenerator.h>
#include <java/util/random/RandomGenerator$JumpableGenerator.h>
#include <java/util/random/RandomGenerator$LeapableGenerator.h>
#include <java/util/stream/DoubleStream.h>
#include <java/util/stream/IntStream.h>
#include <java/util/stream/LongStream.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSupport.h>
#include <jdk/internal/util/random/RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator.h>
#include <jdk/internal/util/random/RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator.h>
#include <jdk/internal/util/random/RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomLeapsSpliterator.h>
#include <jdk/internal/util/random/RandomSupport$AbstractSpliteratorGenerator.h>
#include <jdk/internal/util/random/RandomSupport.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $RandomGenerator$ArbitrarilyJumpableGenerator = ::java::util::random::RandomGenerator$ArbitrarilyJumpableGenerator;
using $DoubleStream = ::java::util::stream::DoubleStream;
using $IntStream = ::java::util::stream::IntStream;
using $LongStream = ::java::util::stream::LongStream;
using $Stream = ::java::util::stream::Stream;
using $StreamSupport = ::java::util::stream::StreamSupport;
using $RandomSupport = ::jdk::internal::util::random::RandomSupport;
using $RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator = ::jdk::internal::util::random::RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator;
using $RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator = ::jdk::internal::util::random::RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator;
using $RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomLeapsSpliterator = ::jdk::internal::util::random::RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomLeapsSpliterator;
using $RandomSupport$AbstractSpliteratorGenerator = ::jdk::internal::util::random::RandomSupport$AbstractSpliteratorGenerator;

namespace jdk {
	namespace internal {
		namespace util {
			namespace random {

$MethodInfo _RandomSupport$AbstractArbitrarilyJumpableGenerator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"copy", "()Ljava/util/random/RandomGenerator$ArbitrarilyJumpableGenerator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*doubles", "(J)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC},
	{"*doubles", "()Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC},
	{"*doubles", "(JDD)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC},
	{"*doubles", "(DD)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(RandomSupport$AbstractArbitrarilyJumpableGenerator::*)()>(&RandomSupport$AbstractArbitrarilyJumpableGenerator::init$))},
	{"*ints", "(J)Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"*ints", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"*ints", "(JII)Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"*ints", "(II)Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"*isDeprecated", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"jumps", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator;>;", $PUBLIC},
	{"jumps", "(J)Ljava/util/stream/Stream;", "(J)Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator;>;", $PUBLIC},
	{"jumps", "(D)Ljava/util/stream/Stream;", "(D)Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$ArbitrarilyJumpableGenerator;>;", $PUBLIC},
	{"jumps", "(JD)Ljava/util/stream/Stream;", "(JD)Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$ArbitrarilyJumpableGenerator;>;", $PUBLIC},
	{"leap", "()V", nullptr, $PUBLIC},
	{"leaps", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$JumpableGenerator;>;", $PUBLIC},
	{"leaps", "(J)Ljava/util/stream/Stream;", "(J)Ljava/util/stream/Stream<Ljava/util/random/RandomGenerator$JumpableGenerator;>;", $PUBLIC},
	{"*longs", "(J)Ljava/util/stream/LongStream;", nullptr, $PUBLIC},
	{"*longs", "()Ljava/util/stream/LongStream;", nullptr, $PUBLIC},
	{"*longs", "(JJJ)Ljava/util/stream/LongStream;", nullptr, $PUBLIC},
	{"*longs", "(JJ)Ljava/util/stream/LongStream;", nullptr, $PUBLIC},
	{"makeArbitraryJumpsSpliterator", "(JJD)Ljava/util/Spliterator;", "(JJD)Ljava/util/Spliterator<Ljava/util/random/RandomGenerator$ArbitrarilyJumpableGenerator;>;", 0},
	{"makeJumpsSpliterator", "(JJD)Ljava/util/Spliterator;", "(JJD)Ljava/util/Spliterator<Ljava/util/random/RandomGenerator;>;", 0},
	{"makeLeapsSpliterator", "(JJD)Ljava/util/Spliterator;", "(JJD)Ljava/util/Spliterator<Ljava/util/random/RandomGenerator$JumpableGenerator;>;", 0},
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
	{"stream", "(Ljava/util/Spliterator;)Ljava/util/stream/Stream;", "<T:Ljava/lang/Object;>(Ljava/util/Spliterator<TT;>;)Ljava/util/stream/Stream<TT;>;", $PRIVATE | $STATIC, $method(static_cast<$Stream*(*)($Spliterator*)>(&RandomSupport$AbstractArbitrarilyJumpableGenerator::stream))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RandomSupport$AbstractArbitrarilyJumpableGenerator_InnerClassesInfo_[] = {
	{"jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator", "jdk.internal.util.random.RandomSupport", "AbstractArbitrarilyJumpableGenerator", $PUBLIC | $STATIC | $ABSTRACT},
	{"jdk.internal.util.random.RandomSupport$AbstractSpliteratorGenerator", "jdk.internal.util.random.RandomSupport", "AbstractSpliteratorGenerator", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.random.RandomGenerator$ArbitrarilyJumpableGenerator", "java.util.random.RandomGenerator", "ArbitrarilyJumpableGenerator", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator", "jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator", "RandomArbitraryJumpsSpliterator", $STATIC},
	{"jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomLeapsSpliterator", "jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator", "RandomLeapsSpliterator", $STATIC},
	{"jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator", "jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator", "RandomJumpsSpliterator", $STATIC},
	{"jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomDoublesSpliterator", "jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator", "RandomDoublesSpliterator", $STATIC},
	{"jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomLongsSpliterator", "jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator", "RandomLongsSpliterator", $STATIC},
	{"jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomIntsSpliterator", "jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator", "RandomIntsSpliterator", $STATIC},
	{}
};

$ClassInfo _RandomSupport$AbstractArbitrarilyJumpableGenerator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator",
	"jdk.internal.util.random.RandomSupport$AbstractSpliteratorGenerator",
	"java.util.random.RandomGenerator$ArbitrarilyJumpableGenerator",
	nullptr,
	_RandomSupport$AbstractArbitrarilyJumpableGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_RandomSupport$AbstractArbitrarilyJumpableGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.util.random.RandomSupport"
};

$Object* allocate$RandomSupport$AbstractArbitrarilyJumpableGenerator($Class* clazz) {
	return $of($alloc(RandomSupport$AbstractArbitrarilyJumpableGenerator));
}

$IntStream* RandomSupport$AbstractArbitrarilyJumpableGenerator::ints(int64_t streamSize) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::ints(streamSize);
}

$IntStream* RandomSupport$AbstractArbitrarilyJumpableGenerator::ints() {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::ints();
}

$IntStream* RandomSupport$AbstractArbitrarilyJumpableGenerator::ints(int64_t streamSize, int32_t randomNumberOrigin, int32_t randomNumberBound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::ints(streamSize, randomNumberOrigin, randomNumberBound);
}

$IntStream* RandomSupport$AbstractArbitrarilyJumpableGenerator::ints(int32_t randomNumberOrigin, int32_t randomNumberBound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::ints(randomNumberOrigin, randomNumberBound);
}

$LongStream* RandomSupport$AbstractArbitrarilyJumpableGenerator::longs(int64_t streamSize) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::longs(streamSize);
}

$LongStream* RandomSupport$AbstractArbitrarilyJumpableGenerator::longs() {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::longs();
}

$LongStream* RandomSupport$AbstractArbitrarilyJumpableGenerator::longs(int64_t streamSize, int64_t randomNumberOrigin, int64_t randomNumberBound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::longs(streamSize, randomNumberOrigin, randomNumberBound);
}

$LongStream* RandomSupport$AbstractArbitrarilyJumpableGenerator::longs(int64_t randomNumberOrigin, int64_t randomNumberBound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::longs(randomNumberOrigin, randomNumberBound);
}

$DoubleStream* RandomSupport$AbstractArbitrarilyJumpableGenerator::doubles(int64_t streamSize) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::doubles(streamSize);
}

$DoubleStream* RandomSupport$AbstractArbitrarilyJumpableGenerator::doubles() {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::doubles();
}

$DoubleStream* RandomSupport$AbstractArbitrarilyJumpableGenerator::doubles(int64_t streamSize, double randomNumberOrigin, double randomNumberBound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::doubles(streamSize, randomNumberOrigin, randomNumberBound);
}

$DoubleStream* RandomSupport$AbstractArbitrarilyJumpableGenerator::doubles(double randomNumberOrigin, double randomNumberBound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::doubles(randomNumberOrigin, randomNumberBound);
}

bool RandomSupport$AbstractArbitrarilyJumpableGenerator::isDeprecated() {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::isDeprecated();
}

bool RandomSupport$AbstractArbitrarilyJumpableGenerator::nextBoolean() {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextBoolean();
}

void RandomSupport$AbstractArbitrarilyJumpableGenerator::nextBytes($bytes* bytes) {
	this->$RandomSupport$AbstractSpliteratorGenerator::nextBytes(bytes);
}

float RandomSupport$AbstractArbitrarilyJumpableGenerator::nextFloat() {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextFloat();
}

float RandomSupport$AbstractArbitrarilyJumpableGenerator::nextFloat(float bound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextFloat(bound);
}

float RandomSupport$AbstractArbitrarilyJumpableGenerator::nextFloat(float origin, float bound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextFloat(origin, bound);
}

double RandomSupport$AbstractArbitrarilyJumpableGenerator::nextDouble() {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextDouble();
}

double RandomSupport$AbstractArbitrarilyJumpableGenerator::nextDouble(double bound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextDouble(bound);
}

double RandomSupport$AbstractArbitrarilyJumpableGenerator::nextDouble(double origin, double bound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextDouble(origin, bound);
}

int32_t RandomSupport$AbstractArbitrarilyJumpableGenerator::nextInt() {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextInt();
}

int32_t RandomSupport$AbstractArbitrarilyJumpableGenerator::nextInt(int32_t bound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextInt(bound);
}

int32_t RandomSupport$AbstractArbitrarilyJumpableGenerator::nextInt(int32_t origin, int32_t bound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextInt(origin, bound);
}

int64_t RandomSupport$AbstractArbitrarilyJumpableGenerator::nextLong(int64_t bound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextLong(bound);
}

int64_t RandomSupport$AbstractArbitrarilyJumpableGenerator::nextLong(int64_t origin, int64_t bound) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextLong(origin, bound);
}

double RandomSupport$AbstractArbitrarilyJumpableGenerator::nextGaussian() {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextGaussian();
}

double RandomSupport$AbstractArbitrarilyJumpableGenerator::nextGaussian(double mean, double stddev) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextGaussian(mean, stddev);
}

double RandomSupport$AbstractArbitrarilyJumpableGenerator::nextExponential() {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::nextExponential();
}

int32_t RandomSupport$AbstractArbitrarilyJumpableGenerator::hashCode() {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::hashCode();
}

bool RandomSupport$AbstractArbitrarilyJumpableGenerator::equals(Object$* obj) {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::equals(obj);
}

$Object* RandomSupport$AbstractArbitrarilyJumpableGenerator::clone() {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::clone();
}

$String* RandomSupport$AbstractArbitrarilyJumpableGenerator::toString() {
	 return this->$RandomSupport$AbstractSpliteratorGenerator::toString();
}

void RandomSupport$AbstractArbitrarilyJumpableGenerator::finalize() {
	this->$RandomSupport$AbstractSpliteratorGenerator::finalize();
}

void RandomSupport$AbstractArbitrarilyJumpableGenerator::init$() {
	$RandomSupport$AbstractSpliteratorGenerator::init$();
}

$Spliterator* RandomSupport$AbstractArbitrarilyJumpableGenerator::makeJumpsSpliterator(int64_t index, int64_t fence, double distance) {
	return $new($RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator, this, index, fence, distance);
}

$Spliterator* RandomSupport$AbstractArbitrarilyJumpableGenerator::makeLeapsSpliterator(int64_t index, int64_t fence, double distance) {
	return $new($RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomLeapsSpliterator, this, index, fence, distance);
}

$Spliterator* RandomSupport$AbstractArbitrarilyJumpableGenerator::makeArbitraryJumpsSpliterator(int64_t index, int64_t fence, double distance) {
	return $new($RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator, this, index, fence, distance);
}

$Stream* RandomSupport$AbstractArbitrarilyJumpableGenerator::stream($Spliterator* srng) {
	$init(RandomSupport$AbstractArbitrarilyJumpableGenerator);
	return $StreamSupport::stream(srng, false);
}

$Stream* RandomSupport$AbstractArbitrarilyJumpableGenerator::jumps() {
	return stream($(makeJumpsSpliterator(0, $Long::MAX_VALUE, jumpDistance())));
}

$Stream* RandomSupport$AbstractArbitrarilyJumpableGenerator::jumps(int64_t streamSize) {
	$RandomSupport::checkStreamSize(streamSize);
	return stream($(makeJumpsSpliterator(0, streamSize, jumpDistance())));
}

$Stream* RandomSupport$AbstractArbitrarilyJumpableGenerator::jumps(double distance) {
	return stream($(makeArbitraryJumpsSpliterator(0, $Long::MAX_VALUE, distance)));
}

$Stream* RandomSupport$AbstractArbitrarilyJumpableGenerator::jumps(int64_t streamSize, double distance) {
	$RandomSupport::checkStreamSize(streamSize);
	return stream($(makeArbitraryJumpsSpliterator(0, streamSize, distance)));
}

void RandomSupport$AbstractArbitrarilyJumpableGenerator::leap() {
	jump(leapDistance());
}

$Stream* RandomSupport$AbstractArbitrarilyJumpableGenerator::leaps() {
	return stream($(makeLeapsSpliterator(0, $Long::MAX_VALUE, leapDistance())));
}

$Stream* RandomSupport$AbstractArbitrarilyJumpableGenerator::leaps(int64_t streamSize) {
	return stream($(makeLeapsSpliterator(0, streamSize, leapDistance())));
}

RandomSupport$AbstractArbitrarilyJumpableGenerator::RandomSupport$AbstractArbitrarilyJumpableGenerator() {
}

$Class* RandomSupport$AbstractArbitrarilyJumpableGenerator::load$($String* name, bool initialize) {
	$loadClass(RandomSupport$AbstractArbitrarilyJumpableGenerator, name, initialize, &_RandomSupport$AbstractArbitrarilyJumpableGenerator_ClassInfo_, allocate$RandomSupport$AbstractArbitrarilyJumpableGenerator);
	return class$;
}

$Class* RandomSupport$AbstractArbitrarilyJumpableGenerator::class$ = nullptr;

			} // random
		} // util
	} // internal
} // jdk