#ifndef _jdk_internal_util_random_RandomSupport$AbstractArbitrarilyJumpableGenerator_h_
#define _jdk_internal_util_random_RandomSupport$AbstractArbitrarilyJumpableGenerator_h_
//$ class jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator
//$ extends jdk.internal.util.random.RandomSupport$AbstractSpliteratorGenerator
//$ implements java.util.random.RandomGenerator$ArbitrarilyJumpableGenerator

#include <java/util/random/RandomGenerator$ArbitrarilyJumpableGenerator.h>
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

class $export RandomSupport$AbstractArbitrarilyJumpableGenerator : public ::jdk::internal::util::random::RandomSupport$AbstractSpliteratorGenerator, public ::java::util::random::RandomGenerator$ArbitrarilyJumpableGenerator {
	$class(RandomSupport$AbstractArbitrarilyJumpableGenerator, $NO_CLASS_INIT, ::jdk::internal::util::random::RandomSupport$AbstractSpliteratorGenerator, ::java::util::random::RandomGenerator$ArbitrarilyJumpableGenerator)
public:
	RandomSupport$AbstractArbitrarilyJumpableGenerator();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::random::RandomGenerator$ArbitrarilyJumpableGenerator::copyAndJump;
	virtual $Object* clone() override;
	virtual ::java::util::random::RandomGenerator$ArbitrarilyJumpableGenerator* copy() override {return nullptr;}
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
	virtual ::java::util::stream::Stream* jumps() override;
	virtual ::java::util::stream::Stream* jumps(int64_t streamSize) override;
	virtual ::java::util::stream::Stream* jumps(double distance) override;
	virtual ::java::util::stream::Stream* jumps(int64_t streamSize, double distance) override;
	virtual void leap() override;
	virtual ::java::util::stream::Stream* leaps() override;
	virtual ::java::util::stream::Stream* leaps(int64_t streamSize) override;
	virtual ::java::util::stream::LongStream* longs(int64_t streamSize) override;
	virtual ::java::util::stream::LongStream* longs() override;
	virtual ::java::util::stream::LongStream* longs(int64_t streamSize, int64_t randomNumberOrigin, int64_t randomNumberBound) override;
	virtual ::java::util::stream::LongStream* longs(int64_t randomNumberOrigin, int64_t randomNumberBound) override;
	virtual ::java::util::Spliterator* makeArbitraryJumpsSpliterator(int64_t index, int64_t fence, double distance);
	virtual ::java::util::Spliterator* makeJumpsSpliterator(int64_t index, int64_t fence, double distance);
	virtual ::java::util::Spliterator* makeLeapsSpliterator(int64_t index, int64_t fence, double distance);
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
	static ::java::util::stream::Stream* stream(::java::util::Spliterator* srng);
	virtual $String* toString() override;
};

			} // random
		} // util
	} // internal
} // jdk

#endif // _jdk_internal_util_random_RandomSupport$AbstractArbitrarilyJumpableGenerator_h_