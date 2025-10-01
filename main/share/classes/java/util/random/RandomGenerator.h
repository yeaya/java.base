#ifndef _java_util_random_RandomGenerator_h_
#define _java_util_random_RandomGenerator_h_
//$ interface java.util.random.RandomGenerator
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		namespace stream {
			class DoubleStream;
			class IntStream;
			class LongStream;
		}
	}
}

namespace java {
	namespace util {
		namespace random {

class $export RandomGenerator : public ::java::lang::Object {
	$interface(RandomGenerator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::stream::DoubleStream* doubles();
	virtual ::java::util::stream::DoubleStream* doubles(double randomNumberOrigin, double randomNumberBound);
	virtual ::java::util::stream::DoubleStream* doubles(int64_t streamSize);
	virtual ::java::util::stream::DoubleStream* doubles(int64_t streamSize, double randomNumberOrigin, double randomNumberBound);
	static ::java::util::random::RandomGenerator* getDefault();
	virtual ::java::util::stream::IntStream* ints();
	virtual ::java::util::stream::IntStream* ints(int32_t randomNumberOrigin, int32_t randomNumberBound);
	virtual ::java::util::stream::IntStream* ints(int64_t streamSize);
	virtual ::java::util::stream::IntStream* ints(int64_t streamSize, int32_t randomNumberOrigin, int32_t randomNumberBound);
	virtual bool isDeprecated();
	double lambda$doubles$0(double randomNumberOrigin, double randomNumberBound);
	int32_t lambda$ints$1(int32_t randomNumberOrigin, int32_t randomNumberBound);
	int64_t lambda$longs$2(int64_t randomNumberOrigin, int64_t randomNumberBound);
	virtual ::java::util::stream::LongStream* longs();
	virtual ::java::util::stream::LongStream* longs(int64_t randomNumberOrigin, int64_t randomNumberBound);
	virtual ::java::util::stream::LongStream* longs(int64_t streamSize);
	virtual ::java::util::stream::LongStream* longs(int64_t streamSize, int64_t randomNumberOrigin, int64_t randomNumberBound);
	virtual bool nextBoolean();
	virtual void nextBytes($bytes* bytes);
	virtual double nextDouble();
	virtual double nextDouble(double bound);
	virtual double nextDouble(double origin, double bound);
	virtual double nextExponential();
	virtual float nextFloat();
	virtual float nextFloat(float bound);
	virtual float nextFloat(float origin, float bound);
	virtual double nextGaussian();
	virtual double nextGaussian(double mean, double stddev);
	virtual int32_t nextInt();
	virtual int32_t nextInt(int32_t bound);
	virtual int32_t nextInt(int32_t origin, int32_t bound);
	virtual int64_t nextLong() {return 0;}
	virtual int64_t nextLong(int64_t bound);
	virtual int64_t nextLong(int64_t origin, int64_t bound);
	static ::java::util::random::RandomGenerator* of($String* name);
};

		} // random
	} // util
} // java

#endif // _java_util_random_RandomGenerator_h_