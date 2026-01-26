#include <jdk/internal/util/random/RandomSupport$AbstractSpliteratorGenerator.h>

#include <java/util/Spliterator$OfDouble.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterator$OfLong.h>
#include <java/util/random/RandomGenerator.h>
#include <java/util/stream/DoubleStream.h>
#include <java/util/stream/IntStream.h>
#include <java/util/stream/LongStream.h>
#include <java/util/stream/StreamSupport.h>
#include <jdk/internal/util/random/RandomSupport$RandomDoublesSpliterator.h>
#include <jdk/internal/util/random/RandomSupport$RandomIntsSpliterator.h>
#include <jdk/internal/util/random/RandomSupport$RandomLongsSpliterator.h>
#include <jdk/internal/util/random/RandomSupport.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator$OfDouble = ::java::util::Spliterator$OfDouble;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $Spliterator$OfLong = ::java::util::Spliterator$OfLong;
using $RandomGenerator = ::java::util::random::RandomGenerator;
using $DoubleStream = ::java::util::stream::DoubleStream;
using $IntStream = ::java::util::stream::IntStream;
using $LongStream = ::java::util::stream::LongStream;
using $StreamSupport = ::java::util::stream::StreamSupport;
using $RandomSupport = ::jdk::internal::util::random::RandomSupport;
using $RandomSupport$RandomDoublesSpliterator = ::jdk::internal::util::random::RandomSupport$RandomDoublesSpliterator;
using $RandomSupport$RandomIntsSpliterator = ::jdk::internal::util::random::RandomSupport$RandomIntsSpliterator;
using $RandomSupport$RandomLongsSpliterator = ::jdk::internal::util::random::RandomSupport$RandomLongsSpliterator;

namespace jdk {
	namespace internal {
		namespace util {
			namespace random {

$MethodInfo _RandomSupport$AbstractSpliteratorGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(RandomSupport$AbstractSpliteratorGenerator, init$, void)},
	{"doubleStream", "(Ljava/util/Spliterator$OfDouble;)Ljava/util/stream/DoubleStream;", nullptr, $PRIVATE | $STATIC, $staticMethod(RandomSupport$AbstractSpliteratorGenerator, doubleStream, $DoubleStream*, $Spliterator$OfDouble*)},
	{"doubles", "(Ljava/util/random/RandomGenerator;J)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC | $STATIC, $staticMethod(RandomSupport$AbstractSpliteratorGenerator, doubles, $DoubleStream*, $RandomGenerator*, int64_t)},
	{"doubles", "(Ljava/util/random/RandomGenerator;)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC | $STATIC, $staticMethod(RandomSupport$AbstractSpliteratorGenerator, doubles, $DoubleStream*, $RandomGenerator*)},
	{"doubles", "(Ljava/util/random/RandomGenerator;JDD)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC | $STATIC, $staticMethod(RandomSupport$AbstractSpliteratorGenerator, doubles, $DoubleStream*, $RandomGenerator*, int64_t, double, double)},
	{"doubles", "(Ljava/util/random/RandomGenerator;DD)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC | $STATIC, $staticMethod(RandomSupport$AbstractSpliteratorGenerator, doubles, $DoubleStream*, $RandomGenerator*, double, double)},
	{"doubles", "(J)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC, $virtualMethod(RandomSupport$AbstractSpliteratorGenerator, doubles, $DoubleStream*, int64_t)},
	{"doubles", "()Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC, $virtualMethod(RandomSupport$AbstractSpliteratorGenerator, doubles, $DoubleStream*)},
	{"doubles", "(JDD)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC, $virtualMethod(RandomSupport$AbstractSpliteratorGenerator, doubles, $DoubleStream*, int64_t, double, double)},
	{"doubles", "(DD)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC, $virtualMethod(RandomSupport$AbstractSpliteratorGenerator, doubles, $DoubleStream*, double, double)},
	{"intStream", "(Ljava/util/Spliterator$OfInt;)Ljava/util/stream/IntStream;", nullptr, $PRIVATE | $STATIC, $staticMethod(RandomSupport$AbstractSpliteratorGenerator, intStream, $IntStream*, $Spliterator$OfInt*)},
	{"ints", "(Ljava/util/random/RandomGenerator;J)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $STATIC, $staticMethod(RandomSupport$AbstractSpliteratorGenerator, ints, $IntStream*, $RandomGenerator*, int64_t)},
	{"ints", "(Ljava/util/random/RandomGenerator;)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $STATIC, $staticMethod(RandomSupport$AbstractSpliteratorGenerator, ints, $IntStream*, $RandomGenerator*)},
	{"ints", "(Ljava/util/random/RandomGenerator;JII)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $STATIC, $staticMethod(RandomSupport$AbstractSpliteratorGenerator, ints, $IntStream*, $RandomGenerator*, int64_t, int32_t, int32_t)},
	{"ints", "(Ljava/util/random/RandomGenerator;II)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $STATIC, $staticMethod(RandomSupport$AbstractSpliteratorGenerator, ints, $IntStream*, $RandomGenerator*, int32_t, int32_t)},
	{"ints", "(J)Ljava/util/stream/IntStream;", nullptr, $PUBLIC, $virtualMethod(RandomSupport$AbstractSpliteratorGenerator, ints, $IntStream*, int64_t)},
	{"ints", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC, $virtualMethod(RandomSupport$AbstractSpliteratorGenerator, ints, $IntStream*)},
	{"ints", "(JII)Ljava/util/stream/IntStream;", nullptr, $PUBLIC, $virtualMethod(RandomSupport$AbstractSpliteratorGenerator, ints, $IntStream*, int64_t, int32_t, int32_t)},
	{"ints", "(II)Ljava/util/stream/IntStream;", nullptr, $PUBLIC, $virtualMethod(RandomSupport$AbstractSpliteratorGenerator, ints, $IntStream*, int32_t, int32_t)},
	{"longStream", "(Ljava/util/Spliterator$OfLong;)Ljava/util/stream/LongStream;", nullptr, $PRIVATE | $STATIC, $staticMethod(RandomSupport$AbstractSpliteratorGenerator, longStream, $LongStream*, $Spliterator$OfLong*)},
	{"longs", "(Ljava/util/random/RandomGenerator;J)Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $STATIC, $staticMethod(RandomSupport$AbstractSpliteratorGenerator, longs, $LongStream*, $RandomGenerator*, int64_t)},
	{"longs", "(Ljava/util/random/RandomGenerator;)Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $STATIC, $staticMethod(RandomSupport$AbstractSpliteratorGenerator, longs, $LongStream*, $RandomGenerator*)},
	{"longs", "(Ljava/util/random/RandomGenerator;JJJ)Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $STATIC, $staticMethod(RandomSupport$AbstractSpliteratorGenerator, longs, $LongStream*, $RandomGenerator*, int64_t, int64_t, int64_t)},
	{"longs", "(Ljava/util/random/RandomGenerator;JJ)Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $STATIC, $staticMethod(RandomSupport$AbstractSpliteratorGenerator, longs, $LongStream*, $RandomGenerator*, int64_t, int64_t)},
	{"longs", "(J)Ljava/util/stream/LongStream;", nullptr, $PUBLIC, $virtualMethod(RandomSupport$AbstractSpliteratorGenerator, longs, $LongStream*, int64_t)},
	{"longs", "()Ljava/util/stream/LongStream;", nullptr, $PUBLIC, $virtualMethod(RandomSupport$AbstractSpliteratorGenerator, longs, $LongStream*)},
	{"longs", "(JJJ)Ljava/util/stream/LongStream;", nullptr, $PUBLIC, $virtualMethod(RandomSupport$AbstractSpliteratorGenerator, longs, $LongStream*, int64_t, int64_t, int64_t)},
	{"longs", "(JJ)Ljava/util/stream/LongStream;", nullptr, $PUBLIC, $virtualMethod(RandomSupport$AbstractSpliteratorGenerator, longs, $LongStream*, int64_t, int64_t)},
	{}
};

$InnerClassInfo _RandomSupport$AbstractSpliteratorGenerator_InnerClassesInfo_[] = {
	{"jdk.internal.util.random.RandomSupport$AbstractSpliteratorGenerator", "jdk.internal.util.random.RandomSupport", "AbstractSpliteratorGenerator", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _RandomSupport$AbstractSpliteratorGenerator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.util.random.RandomSupport$AbstractSpliteratorGenerator",
	"java.lang.Object",
	"java.util.random.RandomGenerator",
	nullptr,
	_RandomSupport$AbstractSpliteratorGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_RandomSupport$AbstractSpliteratorGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.util.random.RandomSupport"
};

$Object* allocate$RandomSupport$AbstractSpliteratorGenerator($Class* clazz) {
	return $of($alloc(RandomSupport$AbstractSpliteratorGenerator));
}

void RandomSupport$AbstractSpliteratorGenerator::init$() {
}

$IntStream* RandomSupport$AbstractSpliteratorGenerator::intStream($Spliterator$OfInt* srng) {
	$init(RandomSupport$AbstractSpliteratorGenerator);
	return $StreamSupport::intStream(srng, false);
}

$LongStream* RandomSupport$AbstractSpliteratorGenerator::longStream($Spliterator$OfLong* srng) {
	$init(RandomSupport$AbstractSpliteratorGenerator);
	return $StreamSupport::longStream(srng, false);
}

$DoubleStream* RandomSupport$AbstractSpliteratorGenerator::doubleStream($Spliterator$OfDouble* srng) {
	$init(RandomSupport$AbstractSpliteratorGenerator);
	return $StreamSupport::doubleStream(srng, false);
}

$IntStream* RandomSupport$AbstractSpliteratorGenerator::ints($RandomGenerator* gen, int64_t streamSize) {
	$init(RandomSupport$AbstractSpliteratorGenerator);
	$RandomSupport::checkStreamSize(streamSize);
	return intStream($$new($RandomSupport$RandomIntsSpliterator, gen, 0, streamSize, $Integer::MAX_VALUE, 0));
}

$IntStream* RandomSupport$AbstractSpliteratorGenerator::ints($RandomGenerator* gen) {
	$init(RandomSupport$AbstractSpliteratorGenerator);
	return intStream($$new($RandomSupport$RandomIntsSpliterator, gen, 0, $Long::MAX_VALUE, $Integer::MAX_VALUE, 0));
}

$IntStream* RandomSupport$AbstractSpliteratorGenerator::ints($RandomGenerator* gen, int64_t streamSize, int32_t randomNumberOrigin, int32_t randomNumberBound) {
	$init(RandomSupport$AbstractSpliteratorGenerator);
	$RandomSupport::checkStreamSize(streamSize);
	$RandomSupport::checkRange(randomNumberOrigin, randomNumberBound);
	return intStream($$new($RandomSupport$RandomIntsSpliterator, gen, 0, streamSize, randomNumberOrigin, randomNumberBound));
}

$IntStream* RandomSupport$AbstractSpliteratorGenerator::ints($RandomGenerator* gen, int32_t randomNumberOrigin, int32_t randomNumberBound) {
	$init(RandomSupport$AbstractSpliteratorGenerator);
	$RandomSupport::checkRange(randomNumberOrigin, randomNumberBound);
	return intStream($$new($RandomSupport$RandomIntsSpliterator, gen, 0, $Long::MAX_VALUE, randomNumberOrigin, randomNumberBound));
}

$LongStream* RandomSupport$AbstractSpliteratorGenerator::longs($RandomGenerator* gen, int64_t streamSize) {
	$init(RandomSupport$AbstractSpliteratorGenerator);
	$RandomSupport::checkStreamSize(streamSize);
	return longStream($$new($RandomSupport$RandomLongsSpliterator, gen, 0, streamSize, $Long::MAX_VALUE, 0));
}

$LongStream* RandomSupport$AbstractSpliteratorGenerator::longs($RandomGenerator* gen) {
	$init(RandomSupport$AbstractSpliteratorGenerator);
	return longStream($$new($RandomSupport$RandomLongsSpliterator, gen, 0, $Long::MAX_VALUE, $Long::MAX_VALUE, 0));
}

$LongStream* RandomSupport$AbstractSpliteratorGenerator::longs($RandomGenerator* gen, int64_t streamSize, int64_t randomNumberOrigin, int64_t randomNumberBound) {
	$init(RandomSupport$AbstractSpliteratorGenerator);
	$RandomSupport::checkStreamSize(streamSize);
	$RandomSupport::checkRange(randomNumberOrigin, randomNumberBound);
	return longStream($$new($RandomSupport$RandomLongsSpliterator, gen, 0, streamSize, randomNumberOrigin, randomNumberBound));
}

$LongStream* RandomSupport$AbstractSpliteratorGenerator::longs($RandomGenerator* gen, int64_t randomNumberOrigin, int64_t randomNumberBound) {
	$init(RandomSupport$AbstractSpliteratorGenerator);
	$RandomSupport::checkRange(randomNumberOrigin, randomNumberBound);
	return longStream($$new($RandomSupport$RandomLongsSpliterator, gen, 0, $Long::MAX_VALUE, randomNumberOrigin, randomNumberBound));
}

$DoubleStream* RandomSupport$AbstractSpliteratorGenerator::doubles($RandomGenerator* gen, int64_t streamSize) {
	$init(RandomSupport$AbstractSpliteratorGenerator);
	$RandomSupport::checkStreamSize(streamSize);
	$init($Double);
	return doubleStream($$new($RandomSupport$RandomDoublesSpliterator, gen, 0, streamSize, $Double::MAX_VALUE, 0.0));
}

$DoubleStream* RandomSupport$AbstractSpliteratorGenerator::doubles($RandomGenerator* gen) {
	$init(RandomSupport$AbstractSpliteratorGenerator);
	$init($Double);
	return doubleStream($$new($RandomSupport$RandomDoublesSpliterator, gen, 0, $Long::MAX_VALUE, $Double::MAX_VALUE, 0.0));
}

$DoubleStream* RandomSupport$AbstractSpliteratorGenerator::doubles($RandomGenerator* gen, int64_t streamSize, double randomNumberOrigin, double randomNumberBound) {
	$init(RandomSupport$AbstractSpliteratorGenerator);
	$RandomSupport::checkStreamSize(streamSize);
	$RandomSupport::checkRange(randomNumberOrigin, randomNumberBound);
	return doubleStream($$new($RandomSupport$RandomDoublesSpliterator, gen, 0, streamSize, randomNumberOrigin, randomNumberBound));
}

$DoubleStream* RandomSupport$AbstractSpliteratorGenerator::doubles($RandomGenerator* gen, double randomNumberOrigin, double randomNumberBound) {
	$init(RandomSupport$AbstractSpliteratorGenerator);
	$RandomSupport::checkRange(randomNumberOrigin, randomNumberBound);
	return doubleStream($$new($RandomSupport$RandomDoublesSpliterator, gen, 0, $Long::MAX_VALUE, randomNumberOrigin, randomNumberBound));
}

$IntStream* RandomSupport$AbstractSpliteratorGenerator::ints(int64_t streamSize) {
	return ints(static_cast<$RandomGenerator*>(this), streamSize);
}

$IntStream* RandomSupport$AbstractSpliteratorGenerator::ints() {
	return ints(static_cast<$RandomGenerator*>(this));
}

$IntStream* RandomSupport$AbstractSpliteratorGenerator::ints(int64_t streamSize, int32_t randomNumberOrigin, int32_t randomNumberBound) {
	return ints(this, streamSize, randomNumberOrigin, randomNumberBound);
}

$IntStream* RandomSupport$AbstractSpliteratorGenerator::ints(int32_t randomNumberOrigin, int32_t randomNumberBound) {
	return ints(static_cast<$RandomGenerator*>(this), randomNumberOrigin, randomNumberBound);
}

$LongStream* RandomSupport$AbstractSpliteratorGenerator::longs(int64_t streamSize) {
	return longs(static_cast<$RandomGenerator*>(this), streamSize);
}

$LongStream* RandomSupport$AbstractSpliteratorGenerator::longs() {
	return longs(static_cast<$RandomGenerator*>(this));
}

$LongStream* RandomSupport$AbstractSpliteratorGenerator::longs(int64_t streamSize, int64_t randomNumberOrigin, int64_t randomNumberBound) {
	return longs(this, streamSize, randomNumberOrigin, randomNumberBound);
}

$LongStream* RandomSupport$AbstractSpliteratorGenerator::longs(int64_t randomNumberOrigin, int64_t randomNumberBound) {
	return longs(static_cast<$RandomGenerator*>(this), randomNumberOrigin, randomNumberBound);
}

$DoubleStream* RandomSupport$AbstractSpliteratorGenerator::doubles(int64_t streamSize) {
	return doubles(static_cast<$RandomGenerator*>(this), streamSize);
}

$DoubleStream* RandomSupport$AbstractSpliteratorGenerator::doubles() {
	return doubles(static_cast<$RandomGenerator*>(this));
}

$DoubleStream* RandomSupport$AbstractSpliteratorGenerator::doubles(int64_t streamSize, double randomNumberOrigin, double randomNumberBound) {
	return doubles(this, streamSize, randomNumberOrigin, randomNumberBound);
}

$DoubleStream* RandomSupport$AbstractSpliteratorGenerator::doubles(double randomNumberOrigin, double randomNumberBound) {
	return doubles(static_cast<$RandomGenerator*>(this), randomNumberOrigin, randomNumberBound);
}

RandomSupport$AbstractSpliteratorGenerator::RandomSupport$AbstractSpliteratorGenerator() {
}

$Class* RandomSupport$AbstractSpliteratorGenerator::load$($String* name, bool initialize) {
	$loadClass(RandomSupport$AbstractSpliteratorGenerator, name, initialize, &_RandomSupport$AbstractSpliteratorGenerator_ClassInfo_, allocate$RandomSupport$AbstractSpliteratorGenerator);
	return class$;
}

$Class* RandomSupport$AbstractSpliteratorGenerator::class$ = nullptr;

			} // random
		} // util
	} // internal
} // jdk