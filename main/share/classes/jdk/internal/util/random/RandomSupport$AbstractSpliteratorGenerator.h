#ifndef _jdk_internal_util_random_RandomSupport$AbstractSpliteratorGenerator_h_
#define _jdk_internal_util_random_RandomSupport$AbstractSpliteratorGenerator_h_
//$ class jdk.internal.util.random.RandomSupport$AbstractSpliteratorGenerator
//$ extends java.util.random.RandomGenerator

#include <java/util/random/RandomGenerator.h>

namespace java {
	namespace util {
		class Spliterator$OfDouble;
		class Spliterator$OfInt;
		class Spliterator$OfLong;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class DoubleStream;
			class IntStream;
			class LongStream;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace util {
			namespace random {

class $export RandomSupport$AbstractSpliteratorGenerator : public ::java::util::random::RandomGenerator {
	$class(RandomSupport$AbstractSpliteratorGenerator, $NO_CLASS_INIT, ::java::util::random::RandomGenerator)
public:
	RandomSupport$AbstractSpliteratorGenerator();
	void init$();
	static ::java::util::stream::DoubleStream* doubleStream(::java::util::Spliterator$OfDouble* srng);
	static ::java::util::stream::DoubleStream* doubles(::java::util::random::RandomGenerator* gen, int64_t streamSize);
	static ::java::util::stream::DoubleStream* doubles(::java::util::random::RandomGenerator* gen);
	static ::java::util::stream::DoubleStream* doubles(::java::util::random::RandomGenerator* gen, int64_t streamSize, double randomNumberOrigin, double randomNumberBound);
	static ::java::util::stream::DoubleStream* doubles(::java::util::random::RandomGenerator* gen, double randomNumberOrigin, double randomNumberBound);
	virtual ::java::util::stream::DoubleStream* doubles(int64_t streamSize) override;
	virtual ::java::util::stream::DoubleStream* doubles() override;
	virtual ::java::util::stream::DoubleStream* doubles(int64_t streamSize, double randomNumberOrigin, double randomNumberBound) override;
	virtual ::java::util::stream::DoubleStream* doubles(double randomNumberOrigin, double randomNumberBound) override;
	static ::java::util::stream::IntStream* intStream(::java::util::Spliterator$OfInt* srng);
	static ::java::util::stream::IntStream* ints(::java::util::random::RandomGenerator* gen, int64_t streamSize);
	static ::java::util::stream::IntStream* ints(::java::util::random::RandomGenerator* gen);
	static ::java::util::stream::IntStream* ints(::java::util::random::RandomGenerator* gen, int64_t streamSize, int32_t randomNumberOrigin, int32_t randomNumberBound);
	static ::java::util::stream::IntStream* ints(::java::util::random::RandomGenerator* gen, int32_t randomNumberOrigin, int32_t randomNumberBound);
	virtual ::java::util::stream::IntStream* ints(int64_t streamSize) override;
	virtual ::java::util::stream::IntStream* ints() override;
	virtual ::java::util::stream::IntStream* ints(int64_t streamSize, int32_t randomNumberOrigin, int32_t randomNumberBound) override;
	virtual ::java::util::stream::IntStream* ints(int32_t randomNumberOrigin, int32_t randomNumberBound) override;
	static ::java::util::stream::LongStream* longStream(::java::util::Spliterator$OfLong* srng);
	static ::java::util::stream::LongStream* longs(::java::util::random::RandomGenerator* gen, int64_t streamSize);
	static ::java::util::stream::LongStream* longs(::java::util::random::RandomGenerator* gen);
	static ::java::util::stream::LongStream* longs(::java::util::random::RandomGenerator* gen, int64_t streamSize, int64_t randomNumberOrigin, int64_t randomNumberBound);
	static ::java::util::stream::LongStream* longs(::java::util::random::RandomGenerator* gen, int64_t randomNumberOrigin, int64_t randomNumberBound);
	virtual ::java::util::stream::LongStream* longs(int64_t streamSize) override;
	virtual ::java::util::stream::LongStream* longs() override;
	virtual ::java::util::stream::LongStream* longs(int64_t streamSize, int64_t randomNumberOrigin, int64_t randomNumberBound) override;
	virtual ::java::util::stream::LongStream* longs(int64_t randomNumberOrigin, int64_t randomNumberBound) override;
};

			} // random
		} // util
	} // internal
} // jdk

#endif // _jdk_internal_util_random_RandomSupport$AbstractSpliteratorGenerator_h_