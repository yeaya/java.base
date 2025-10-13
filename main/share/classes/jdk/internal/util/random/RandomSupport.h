#ifndef _jdk_internal_util_random_RandomSupport_h_
#define _jdk_internal_util_random_RandomSupport_h_
//$ class jdk.internal.util.random.RandomSupport
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BAD_BOUND")
#undef BAD_BOUND
#pragma push_macro("BAD_DISTANCE")
#undef BAD_DISTANCE
#pragma push_macro("BAD_FLOATING_BOUND")
#undef BAD_FLOATING_BOUND
#pragma push_macro("BAD_RANGE")
#undef BAD_RANGE
#pragma push_macro("BAD_SIZE")
#undef BAD_SIZE
#pragma push_macro("GOLDEN_RATIO_32")
#undef GOLDEN_RATIO_32
#pragma push_macro("GOLDEN_RATIO_64")
#undef GOLDEN_RATIO_64
#pragma push_macro("SILVER_RATIO_32")
#undef SILVER_RATIO_32
#pragma push_macro("SILVER_RATIO_64")
#undef SILVER_RATIO_64

namespace java {
	namespace util {
		namespace random {
			class RandomGenerator;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace util {
			namespace random {

class $export RandomSupport : public ::java::lang::Object {
	$class(RandomSupport, 0, ::java::lang::Object)
public:
	RandomSupport();
	void init$();
	static double boundedNextDouble(::java::util::random::RandomGenerator* rng, double origin, double bound);
	static double boundedNextDouble(::java::util::random::RandomGenerator* rng, double bound);
	static float boundedNextFloat(::java::util::random::RandomGenerator* rng, float origin, float bound);
	static float boundedNextFloat(::java::util::random::RandomGenerator* rng, float bound);
	static int32_t boundedNextInt(::java::util::random::RandomGenerator* rng, int32_t origin, int32_t bound);
	static int32_t boundedNextInt(::java::util::random::RandomGenerator* rng, int32_t bound);
	static int64_t boundedNextLong(::java::util::random::RandomGenerator* rng, int64_t origin, int64_t bound);
	static int64_t boundedNextLong(::java::util::random::RandomGenerator* rng, int64_t bound);
	static void checkBound(float bound);
	static void checkBound(double bound);
	static void checkBound(int32_t bound);
	static void checkBound(int64_t bound);
	static void checkRange(float origin, float bound);
	static void checkRange(double origin, double bound);
	static void checkRange(int32_t origin, int32_t bound);
	static void checkRange(int64_t origin, int64_t bound);
	static void checkStreamSize(int64_t streamSize);
	static double computeNextExponential(::java::util::random::RandomGenerator* rng);
	static double computeNextGaussian(::java::util::random::RandomGenerator* rng);
	static $ints* convertSeedBytesToInts($bytes* seed, int32_t n, int32_t z);
	static $longs* convertSeedBytesToLongs($bytes* seed, int32_t n, int32_t z);
	static int64_t initialSeed();
	static int32_t mixLea32(int32_t z);
	static int64_t mixLea64(int64_t z);
	static int32_t mixMurmur32(int32_t z);
	static int64_t mixMurmur64(int64_t z);
	static int64_t mixStafford13(int64_t z);
	static bool secureRandomSeedRequested();
	static $String* BAD_SIZE;
	static $String* BAD_DISTANCE;
	static $String* BAD_BOUND;
	static $String* BAD_FLOATING_BOUND;
	static $String* BAD_RANGE;
	static bool useSecureRandomSeed;
	static const int32_t GOLDEN_RATIO_32 = 0x9E3779B9;
	static const int64_t GOLDEN_RATIO_64 = (int64_t)0x9E3779B97F4A7C15;
	static const int32_t SILVER_RATIO_32 = 0x6A09E667;
	static const int64_t SILVER_RATIO_64 = (int64_t)0x6A09E667F3BCC909;
};

			} // random
		} // util
	} // internal
} // jdk

#pragma pop_macro("BAD_BOUND")
#pragma pop_macro("BAD_DISTANCE")
#pragma pop_macro("BAD_FLOATING_BOUND")
#pragma pop_macro("BAD_RANGE")
#pragma pop_macro("BAD_SIZE")
#pragma pop_macro("GOLDEN_RATIO_32")
#pragma pop_macro("GOLDEN_RATIO_64")
#pragma pop_macro("SILVER_RATIO_32")
#pragma pop_macro("SILVER_RATIO_64")

#endif // _jdk_internal_util_random_RandomSupport_h_