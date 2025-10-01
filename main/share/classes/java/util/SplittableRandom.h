#ifndef _java_util_SplittableRandom_h_
#define _java_util_SplittableRandom_h_
//$ class java.util.SplittableRandom
//$ extends java.util.random.RandomGenerator$SplittableGenerator

#include <java/lang/Array.h>
#include <java/util/random/RandomGenerator$SplittableGenerator.h>

#pragma push_macro("GOLDEN_GAMMA")
#undef GOLDEN_GAMMA

namespace java {
	namespace util {
		class SplittableRandom$AbstractSplittableGeneratorProxy;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicLong;
			}
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class DoubleStream;
			class IntStream;
			class LongStream;
			class Stream;
		}
	}
}

namespace java {
	namespace util {

class $export SplittableRandom : public ::java::util::random::RandomGenerator$SplittableGenerator {
	$class(SplittableRandom, 0, ::java::util::random::RandomGenerator$SplittableGenerator)
public:
	SplittableRandom();
	void init$(int64_t seed, int64_t gamma);
	void init$(int64_t seed);
	void init$();
	virtual ::java::util::stream::DoubleStream* doubles(int64_t streamSize) override;
	virtual ::java::util::stream::DoubleStream* doubles() override;
	virtual ::java::util::stream::DoubleStream* doubles(int64_t streamSize, double randomNumberOrigin, double randomNumberBound) override;
	virtual ::java::util::stream::DoubleStream* doubles(double randomNumberOrigin, double randomNumberBound) override;
	virtual ::java::util::stream::IntStream* ints(int64_t streamSize) override;
	virtual ::java::util::stream::IntStream* ints() override;
	virtual ::java::util::stream::IntStream* ints(int64_t streamSize, int32_t randomNumberOrigin, int32_t randomNumberBound) override;
	virtual ::java::util::stream::IntStream* ints(int32_t randomNumberOrigin, int32_t randomNumberBound) override;
	virtual ::java::util::stream::LongStream* longs(int64_t streamSize) override;
	virtual ::java::util::stream::LongStream* longs() override;
	virtual ::java::util::stream::LongStream* longs(int64_t streamSize, int64_t randomNumberOrigin, int64_t randomNumberBound) override;
	virtual ::java::util::stream::LongStream* longs(int64_t randomNumberOrigin, int64_t randomNumberBound) override;
	static int32_t mix32(int64_t z);
	static int64_t mix64(int64_t z);
	static int64_t mixGamma(int64_t z);
	virtual void nextBytes($bytes* bytes) override;
	using ::java::util::random::RandomGenerator$SplittableGenerator::nextInt;
	virtual int32_t nextInt() override;
	using ::java::util::random::RandomGenerator$SplittableGenerator::nextLong;
	virtual int64_t nextLong() override;
	int64_t nextSeed();
	virtual ::java::util::SplittableRandom* split() override;
	virtual ::java::util::SplittableRandom* split(::java::util::random::RandomGenerator$SplittableGenerator* source) override;
	virtual ::java::util::stream::Stream* splits() override;
	virtual ::java::util::stream::Stream* splits(int64_t streamSize) override;
	virtual ::java::util::stream::Stream* splits(::java::util::random::RandomGenerator$SplittableGenerator* source) override;
	virtual ::java::util::stream::Stream* splits(int64_t streamSize, ::java::util::random::RandomGenerator$SplittableGenerator* source) override;
	static const int64_t GOLDEN_GAMMA = (int64_t)0x9E3779B97F4A7C15;
	int64_t seed = 0;
	int64_t gamma = 0;
	::java::util::SplittableRandom$AbstractSplittableGeneratorProxy* proxy = nullptr;
	static ::java::util::concurrent::atomic::AtomicLong* defaultGen;
};

	} // util
} // java

#pragma pop_macro("GOLDEN_GAMMA")

#endif // _java_util_SplittableRandom_h_