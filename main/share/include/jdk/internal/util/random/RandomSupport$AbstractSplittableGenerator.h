#ifndef _jdk_internal_util_random_RandomSupport$AbstractSplittableGenerator_h_
#define _jdk_internal_util_random_RandomSupport$AbstractSplittableGenerator_h_
//$ class jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator
//$ extends jdk.internal.util.random.RandomSupport$AbstractSpliteratorGenerator
//$ implements java.util.random.RandomGenerator$SplittableGenerator

#include <java/util/random/RandomGenerator$SplittableGenerator.h>
#include <jdk/internal/util/random/RandomSupport$AbstractSpliteratorGenerator.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace util {
			namespace random {

class $import RandomSupport$AbstractSplittableGenerator : public ::jdk::internal::util::random::RandomSupport$AbstractSpliteratorGenerator, public ::java::util::random::RandomGenerator$SplittableGenerator {
	$class(RandomSupport$AbstractSplittableGenerator, $NO_CLASS_INIT, ::jdk::internal::util::random::RandomSupport$AbstractSpliteratorGenerator, ::java::util::random::RandomGenerator$SplittableGenerator)
public:
	RandomSupport$AbstractSplittableGenerator();
	virtual $Object* clone() override;
	virtual ::java::util::stream::DoubleStream* doubles(int64_t streamSize) override;
	virtual ::java::util::stream::DoubleStream* doubles() override;
	virtual ::java::util::stream::DoubleStream* doubles(int64_t streamSize, double randomNumberOrigin, double randomNumberBound) override;
	virtual ::java::util::stream::DoubleStream* doubles(double randomNumberOrigin, double randomNumberBound) override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::util::stream::IntStream* ints(int64_t streamSize) override;
	virtual ::java::util::stream::IntStream* ints() override;
	virtual ::java::util::stream::IntStream* ints(int64_t streamSize, int32_t randomNumberOrigin, int32_t randomNumberBound) override;
	virtual ::java::util::stream::IntStream* ints(int32_t randomNumberOrigin, int32_t randomNumberBound) override;
	virtual bool isDeprecated() override;
	virtual ::java::util::stream::LongStream* longs(int64_t streamSize) override;
	virtual ::java::util::stream::LongStream* longs() override;
	virtual ::java::util::stream::LongStream* longs(int64_t streamSize, int64_t randomNumberOrigin, int64_t randomNumberBound) override;
	virtual ::java::util::stream::LongStream* longs(int64_t randomNumberOrigin, int64_t randomNumberBound) override;
	virtual ::java::util::Spliterator* makeSplitsSpliterator(int64_t index, int64_t fence, ::java::util::random::RandomGenerator$SplittableGenerator* source);
	using ::java::util::random::RandomGenerator$SplittableGenerator::split;
	virtual bool nextBoolean() override;
	virtual void nextBytes($bytes* bytes) override;
	virtual double nextDouble() override;
	virtual double nextDouble(double bound) override;
	virtual double nextDouble(double origin, double bound) override;
	virtual double nextExponential() override;
	virtual float nextFloat() override;
	virtual float nextFloat(float bound) override;
	virtual float nextFloat(float origin, float bound) override;
	virtual double nextGaussian() override;
	virtual double nextGaussian(double mean, double stddev) override;
	virtual int32_t nextInt() override;
	virtual int32_t nextInt(int32_t bound) override;
	virtual int32_t nextInt(int32_t origin, int32_t bound) override;
	virtual int64_t nextLong() override {return 0;}
	virtual int64_t nextLong(int64_t bound) override;
	virtual int64_t nextLong(int64_t origin, int64_t bound) override;
	virtual ::java::util::random::RandomGenerator$SplittableGenerator* split() override;
	virtual ::java::util::stream::Stream* splits() override;
	virtual ::java::util::stream::Stream* splits(int64_t streamSize) override;
	virtual ::java::util::stream::Stream* splits(::java::util::random::RandomGenerator$SplittableGenerator* source) override;
	virtual ::java::util::stream::Stream* splits(int64_t streamSize, ::java::util::random::RandomGenerator$SplittableGenerator* source) override;
	virtual $String* toString() override;
};

			} // random
		} // util
	} // internal
} // jdk

#endif // _jdk_internal_util_random_RandomSupport$AbstractSplittableGenerator_h_