#ifndef _java_util_concurrent_ThreadLocalRandom_h_
#define _java_util_concurrent_ThreadLocalRandom_h_
//$ class java.util.concurrent.ThreadLocalRandom
//$ extends java.util.Random

#include <java/lang/Array.h>
#include <java/util/Random.h>

#pragma push_macro("BAD_BOUND")
#undef BAD_BOUND
#pragma push_macro("BAD_RANGE")
#undef BAD_RANGE
#pragma push_macro("BAD_SIZE")
#undef BAD_SIZE
#pragma push_macro("GOLDEN_GAMMA")
#undef GOLDEN_GAMMA
#pragma push_macro("INHERITABLETHREADLOCALS")
#undef INHERITABLETHREADLOCALS
#pragma push_macro("INHERITEDACCESSCONTROLCONTEXT")
#undef INHERITEDACCESSCONTROLCONTEXT
#pragma push_macro("PROBE")
#undef PROBE
#pragma push_macro("PROBE_INCREMENT")
#undef PROBE_INCREMENT
#pragma push_macro("SECONDARY")
#undef SECONDARY
#pragma push_macro("SEED")
#undef SEED
#pragma push_macro("SEEDER_INCREMENT")
#undef SEEDER_INCREMENT
#pragma push_macro("THREADLOCALS")
#undef THREADLOCALS
#pragma push_macro("U")
#undef U

namespace java {
	namespace io {
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
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
		namespace concurrent {

class $export ThreadLocalRandom : public ::java::util::Random {
	$class(ThreadLocalRandom, 0, ::java::util::Random)
public:
	ThreadLocalRandom();
	void init$();
	static int32_t advanceProbe(int32_t probe);
	static ::java::util::concurrent::ThreadLocalRandom* current();
	virtual ::java::util::stream::DoubleStream* doubles(int64_t streamSize) override;
	virtual ::java::util::stream::DoubleStream* doubles() override;
	virtual ::java::util::stream::DoubleStream* doubles(int64_t streamSize, double randomNumberOrigin, double randomNumberBound) override;
	virtual ::java::util::stream::DoubleStream* doubles(double randomNumberOrigin, double randomNumberBound) override;
	static void eraseThreadLocals($Thread* thread);
	static int32_t getProbe();
	virtual ::java::util::stream::IntStream* ints(int64_t streamSize) override;
	virtual ::java::util::stream::IntStream* ints() override;
	virtual ::java::util::stream::IntStream* ints(int64_t streamSize, int32_t randomNumberOrigin, int32_t randomNumberBound) override;
	virtual ::java::util::stream::IntStream* ints(int32_t randomNumberOrigin, int32_t randomNumberBound) override;
	static void localInit();
	virtual ::java::util::stream::LongStream* longs(int64_t streamSize) override;
	virtual ::java::util::stream::LongStream* longs() override;
	virtual ::java::util::stream::LongStream* longs(int64_t streamSize, int64_t randomNumberOrigin, int64_t randomNumberBound) override;
	virtual ::java::util::stream::LongStream* longs(int64_t randomNumberOrigin, int64_t randomNumberBound) override;
	static int32_t mix32(int64_t z);
	virtual int32_t next(int32_t bits) override;
	virtual bool nextBoolean() override;
	virtual double nextDouble() override;
	virtual double nextDouble(double bound) override;
	virtual double nextDouble(double origin, double bound) override;
	virtual float nextFloat() override;
	virtual float nextFloat(float bound) override;
	virtual float nextFloat(float origin, float bound) override;
	using ::java::util::Random::nextGaussian;
	virtual int32_t nextInt() override;
	virtual int32_t nextInt(int32_t bound) override;
	virtual int32_t nextInt(int32_t origin, int32_t bound) override;
	virtual int64_t nextLong() override;
	virtual int64_t nextLong(int64_t bound) override;
	virtual int64_t nextLong(int64_t origin, int64_t bound) override;
	static int32_t nextSecondarySeed();
	int64_t nextSeed();
	$Object* readResolve();
	static void setInheritedAccessControlContext($Thread* thread, ::java::security::AccessControlContext* acc);
	virtual void setSeed(int64_t seed) override;
	void writeObject(::java::io::ObjectOutputStream* s);
	bool initialized = false;
	static const int64_t serialVersionUID = (int64_t)0xAECA4F167A867673;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static const int64_t GOLDEN_GAMMA = (int64_t)0x9E3779B97F4A7C15;
	static const int32_t PROBE_INCREMENT = 0x9E3779B9;
	static const int64_t SEEDER_INCREMENT = (int64_t)0xBB67AE8584CAA73B;
	static $String* BAD_BOUND;
	static $String* BAD_RANGE;
	static $String* BAD_SIZE;
	static ::jdk::internal::misc::Unsafe* U;
	static int64_t SEED;
	static int64_t PROBE;
	static int64_t SECONDARY;
	static int64_t THREADLOCALS;
	static int64_t INHERITABLETHREADLOCALS;
	static int64_t INHERITEDACCESSCONTROLCONTEXT;
	static ::java::util::concurrent::atomic::AtomicInteger* probeGenerator;
	static ::java::util::concurrent::ThreadLocalRandom* instance;
	static ::java::util::concurrent::atomic::AtomicLong* seeder;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("BAD_BOUND")
#pragma pop_macro("BAD_RANGE")
#pragma pop_macro("BAD_SIZE")
#pragma pop_macro("GOLDEN_GAMMA")
#pragma pop_macro("INHERITABLETHREADLOCALS")
#pragma pop_macro("INHERITEDACCESSCONTROLCONTEXT")
#pragma pop_macro("PROBE")
#pragma pop_macro("PROBE_INCREMENT")
#pragma pop_macro("SECONDARY")
#pragma pop_macro("SEED")
#pragma pop_macro("SEEDER_INCREMENT")
#pragma pop_macro("THREADLOCALS")
#pragma pop_macro("U")

#endif // _java_util_concurrent_ThreadLocalRandom_h_