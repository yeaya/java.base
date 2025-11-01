#ifndef _java_util_Random_h_
#define _java_util_Random_h_
//$ class java.util.Random
//$ extends java.util.random.RandomGenerator
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/util/random/RandomGenerator.h>

#pragma push_macro("DOUBLE_UNIT")
#undef DOUBLE_UNIT

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
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
		}
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace java {
	namespace util {

class $export Random : public ::java::util::random::RandomGenerator, public ::java::io::Serializable {
	$class(Random, 0, ::java::util::random::RandomGenerator, ::java::io::Serializable)
public:
	Random();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int64_t seed);
	virtual ::java::util::stream::DoubleStream* doubles(int64_t streamSize) override;
	virtual ::java::util::stream::DoubleStream* doubles() override;
	virtual ::java::util::stream::DoubleStream* doubles(int64_t streamSize, double randomNumberOrigin, double randomNumberBound) override;
	virtual ::java::util::stream::DoubleStream* doubles(double randomNumberOrigin, double randomNumberBound) override;
	static int64_t initialScramble(int64_t seed);
	virtual ::java::util::stream::IntStream* ints(int64_t streamSize) override;
	virtual ::java::util::stream::IntStream* ints() override;
	virtual ::java::util::stream::IntStream* ints(int64_t streamSize, int32_t randomNumberOrigin, int32_t randomNumberBound) override;
	virtual ::java::util::stream::IntStream* ints(int32_t randomNumberOrigin, int32_t randomNumberBound) override;
	virtual ::java::util::stream::LongStream* longs(int64_t streamSize) override;
	virtual ::java::util::stream::LongStream* longs() override;
	virtual ::java::util::stream::LongStream* longs(int64_t streamSize, int64_t randomNumberOrigin, int64_t randomNumberBound) override;
	virtual ::java::util::stream::LongStream* longs(int64_t randomNumberOrigin, int64_t randomNumberBound) override;
	virtual int32_t next(int32_t bits);
	virtual bool nextBoolean() override;
	virtual void nextBytes($bytes* bytes) override;
	using ::java::util::random::RandomGenerator::nextDouble;
	virtual double nextDouble() override;
	using ::java::util::random::RandomGenerator::nextFloat;
	virtual float nextFloat() override;
	using ::java::util::random::RandomGenerator::nextGaussian;
	virtual double nextGaussian() override;
	using ::java::util::random::RandomGenerator::nextInt;
	virtual int32_t nextInt() override;
	virtual int32_t nextInt(int32_t bound) override;
	using ::java::util::random::RandomGenerator::nextLong;
	virtual int64_t nextLong() override;
	void readObject(::java::io::ObjectInputStream* s);
	void resetSeed(int64_t seedVal);
	static int64_t seedUniquifier();
	virtual void setSeed(int64_t seed);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0x363296344BF00A53;
	::java::util::concurrent::atomic::AtomicLong* seed = nullptr;
	static const int64_t multiplier = (int64_t)0x00000005DEECE66D;
	static const int64_t addend = (int64_t)11;
	static const int64_t mask = 281474976710655; // ((int64_t)1 << 48) - 1
	static double DOUBLE_UNIT;
	static ::java::util::concurrent::atomic::AtomicLong* seedUniquifier$;
	double nextNextGaussian = 0.0;
	bool haveNextNextGaussian = false;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static ::jdk::internal::misc::Unsafe* unsafe;
	static int64_t seedOffset;
};

	} // util
} // java

#pragma pop_macro("DOUBLE_UNIT")

#endif // _java_util_Random_h_