#include <jdk/internal/util/random/RandomSupport.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/SecureRandom.h>
#include <java/util/random/RandomGenerator.h>
#include <jdk/internal/util/random/RandomSupport$DoubleZigguratTables.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef BAD_BOUND
#undef BAD_DISTANCE
#undef BAD_FLOATING_BOUND
#undef BAD_RANGE
#undef BAD_SIZE
#undef GOLDEN_RATIO_32
#undef GOLDEN_RATIO_64
#undef POSITIVE_INFINITY
#undef SILVER_RATIO_32
#undef SILVER_RATIO_64
#undef UA
#undef X
#undef Y

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $SecureRandom = ::java::security::SecureRandom;
using $RandomGenerator = ::java::util::random::RandomGenerator;
using $RandomSupport$DoubleZigguratTables = ::jdk::internal::util::random::RandomSupport$DoubleZigguratTables;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace jdk {
	namespace internal {
		namespace util {
			namespace random {

$FieldInfo _RandomSupport_FieldInfo_[] = {
	{"BAD_SIZE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RandomSupport, BAD_SIZE)},
	{"BAD_DISTANCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RandomSupport, BAD_DISTANCE)},
	{"BAD_BOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RandomSupport, BAD_BOUND)},
	{"BAD_FLOATING_BOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RandomSupport, BAD_FLOATING_BOUND)},
	{"BAD_RANGE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RandomSupport, BAD_RANGE)},
	{"useSecureRandomSeed", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RandomSupport, useSecureRandomSeed)},
	{"GOLDEN_RATIO_32", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(RandomSupport, GOLDEN_RATIO_32)},
	{"GOLDEN_RATIO_64", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(RandomSupport, GOLDEN_RATIO_64)},
	{"SILVER_RATIO_32", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(RandomSupport, SILVER_RATIO_32)},
	{"SILVER_RATIO_64", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(RandomSupport, SILVER_RATIO_64)},
	{}
};

$MethodInfo _RandomSupport_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(RandomSupport::*)()>(&RandomSupport::init$))},
	{"boundedNextDouble", "(Ljava/util/random/RandomGenerator;DD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)($RandomGenerator*,double,double)>(&RandomSupport::boundedNextDouble))},
	{"boundedNextDouble", "(Ljava/util/random/RandomGenerator;D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)($RandomGenerator*,double)>(&RandomSupport::boundedNextDouble))},
	{"boundedNextFloat", "(Ljava/util/random/RandomGenerator;FF)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)($RandomGenerator*,float,float)>(&RandomSupport::boundedNextFloat))},
	{"boundedNextFloat", "(Ljava/util/random/RandomGenerator;F)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)($RandomGenerator*,float)>(&RandomSupport::boundedNextFloat))},
	{"boundedNextInt", "(Ljava/util/random/RandomGenerator;II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($RandomGenerator*,int32_t,int32_t)>(&RandomSupport::boundedNextInt))},
	{"boundedNextInt", "(Ljava/util/random/RandomGenerator;I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($RandomGenerator*,int32_t)>(&RandomSupport::boundedNextInt))},
	{"boundedNextLong", "(Ljava/util/random/RandomGenerator;JJ)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($RandomGenerator*,int64_t,int64_t)>(&RandomSupport::boundedNextLong))},
	{"boundedNextLong", "(Ljava/util/random/RandomGenerator;J)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($RandomGenerator*,int64_t)>(&RandomSupport::boundedNextLong))},
	{"checkBound", "(F)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(float)>(&RandomSupport::checkBound))},
	{"checkBound", "(D)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(double)>(&RandomSupport::checkBound))},
	{"checkBound", "(I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int32_t)>(&RandomSupport::checkBound))},
	{"checkBound", "(J)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int64_t)>(&RandomSupport::checkBound))},
	{"checkRange", "(FF)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(float,float)>(&RandomSupport::checkRange))},
	{"checkRange", "(DD)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(double,double)>(&RandomSupport::checkRange))},
	{"checkRange", "(II)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int32_t,int32_t)>(&RandomSupport::checkRange))},
	{"checkRange", "(JJ)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int64_t,int64_t)>(&RandomSupport::checkRange))},
	{"checkStreamSize", "(J)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int64_t)>(&RandomSupport::checkStreamSize))},
	{"computeNextExponential", "(Ljava/util/random/RandomGenerator;)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)($RandomGenerator*)>(&RandomSupport::computeNextExponential))},
	{"computeNextGaussian", "(Ljava/util/random/RandomGenerator;)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)($RandomGenerator*)>(&RandomSupport::computeNextGaussian))},
	{"convertSeedBytesToInts", "([BII)[I", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ints*(*)($bytes*,int32_t,int32_t)>(&RandomSupport::convertSeedBytesToInts))},
	{"convertSeedBytesToLongs", "([BII)[J", nullptr, $PUBLIC | $STATIC, $method(static_cast<$longs*(*)($bytes*,int32_t,int32_t)>(&RandomSupport::convertSeedBytesToLongs))},
	{"initialSeed", "()J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)()>(&RandomSupport::initialSeed))},
	{"mixLea32", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&RandomSupport::mixLea32))},
	{"mixLea64", "(J)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&RandomSupport::mixLea64))},
	{"mixMurmur32", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&RandomSupport::mixMurmur32))},
	{"mixMurmur64", "(J)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&RandomSupport::mixMurmur64))},
	{"mixStafford13", "(J)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&RandomSupport::mixStafford13))},
	{"secureRandomSeedRequested", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&RandomSupport::secureRandomSeedRequested))},
	{}
};

$InnerClassInfo _RandomSupport_InnerClassesInfo_[] = {
	{"jdk.internal.util.random.RandomSupport$DoubleZigguratTables", "jdk.internal.util.random.RandomSupport", "DoubleZigguratTables", $STATIC | $FINAL},
	{"jdk.internal.util.random.RandomSupport$AbstractSplittableWithBrineGenerator", "jdk.internal.util.random.RandomSupport", "AbstractSplittableWithBrineGenerator", $PUBLIC | $STATIC | $ABSTRACT},
	{"jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator", "jdk.internal.util.random.RandomSupport", "AbstractSplittableGenerator", $PUBLIC | $STATIC | $ABSTRACT},
	{"jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator", "jdk.internal.util.random.RandomSupport", "AbstractArbitrarilyJumpableGenerator", $PUBLIC | $STATIC | $ABSTRACT},
	{"jdk.internal.util.random.RandomSupport$AbstractSpliteratorGenerator", "jdk.internal.util.random.RandomSupport", "AbstractSpliteratorGenerator", $PUBLIC | $STATIC | $ABSTRACT},
	{"jdk.internal.util.random.RandomSupport$RandomDoublesSpliterator", "jdk.internal.util.random.RandomSupport", "RandomDoublesSpliterator", $PUBLIC | $STATIC},
	{"jdk.internal.util.random.RandomSupport$RandomLongsSpliterator", "jdk.internal.util.random.RandomSupport", "RandomLongsSpliterator", $PUBLIC | $STATIC},
	{"jdk.internal.util.random.RandomSupport$RandomIntsSpliterator", "jdk.internal.util.random.RandomSupport", "RandomIntsSpliterator", $PUBLIC | $STATIC},
	{"jdk.internal.util.random.RandomSupport$RandomSpliterator", "jdk.internal.util.random.RandomSupport", "RandomSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{"jdk.internal.util.random.RandomSupport$RandomGeneratorProperties", "jdk.internal.util.random.RandomSupport", "RandomGeneratorProperties", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _RandomSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.util.random.RandomSupport",
	"java.lang.Object",
	nullptr,
	_RandomSupport_FieldInfo_,
	_RandomSupport_MethodInfo_,
	nullptr,
	nullptr,
	_RandomSupport_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.util.random.RandomSupport$DoubleZigguratTables,jdk.internal.util.random.RandomSupport$AbstractSplittableWithBrineGenerator,jdk.internal.util.random.RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt,jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator,jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator,jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator$RandomDoublesSpliterator,jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator$RandomLongsSpliterator,jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator$RandomIntsSpliterator,jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator,jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator,jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomLeapsSpliterator,jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator,jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomDoublesSpliterator,jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomLongsSpliterator,jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomIntsSpliterator,jdk.internal.util.random.RandomSupport$AbstractSpliteratorGenerator,jdk.internal.util.random.RandomSupport$RandomDoublesSpliterator,jdk.internal.util.random.RandomSupport$RandomLongsSpliterator,jdk.internal.util.random.RandomSupport$RandomIntsSpliterator,jdk.internal.util.random.RandomSupport$RandomSpliterator,jdk.internal.util.random.RandomSupport$RandomGeneratorProperties"
};

$Object* allocate$RandomSupport($Class* clazz) {
	return $of($alloc(RandomSupport));
}

$String* RandomSupport::BAD_SIZE = nullptr;
$String* RandomSupport::BAD_DISTANCE = nullptr;
$String* RandomSupport::BAD_BOUND = nullptr;
$String* RandomSupport::BAD_FLOATING_BOUND = nullptr;
$String* RandomSupport::BAD_RANGE = nullptr;
bool RandomSupport::useSecureRandomSeed = false;

void RandomSupport::init$() {
}

void RandomSupport::checkStreamSize(int64_t streamSize) {
	$init(RandomSupport);
	if (streamSize < (int64_t)0) {
		$throwNew($IllegalArgumentException, RandomSupport::BAD_SIZE);
	}
}

void RandomSupport::checkBound(float bound) {
	$init(RandomSupport);
	$init($Float);
	if (!(bound > 0.0 && bound < $Float::POSITIVE_INFINITY)) {
		$throwNew($IllegalArgumentException, RandomSupport::BAD_FLOATING_BOUND);
	}
}

void RandomSupport::checkBound(double bound) {
	$init(RandomSupport);
	$init($Double);
	if (!(bound > 0.0 && bound < $Double::POSITIVE_INFINITY)) {
		$throwNew($IllegalArgumentException, RandomSupport::BAD_FLOATING_BOUND);
	}
}

void RandomSupport::checkBound(int32_t bound) {
	$init(RandomSupport);
	if (bound <= 0) {
		$throwNew($IllegalArgumentException, RandomSupport::BAD_BOUND);
	}
}

void RandomSupport::checkBound(int64_t bound) {
	$init(RandomSupport);
	if (bound <= 0) {
		$throwNew($IllegalArgumentException, RandomSupport::BAD_BOUND);
	}
}

void RandomSupport::checkRange(float origin, float bound) {
	$init(RandomSupport);
	$init($Float);
	if (!(origin < bound && (bound - origin) < $Float::POSITIVE_INFINITY)) {
		$throwNew($IllegalArgumentException, RandomSupport::BAD_RANGE);
	}
}

void RandomSupport::checkRange(double origin, double bound) {
	$init(RandomSupport);
	$init($Double);
	if (!(origin < bound && (bound - origin) < $Double::POSITIVE_INFINITY)) {
		$throwNew($IllegalArgumentException, RandomSupport::BAD_RANGE);
	}
}

void RandomSupport::checkRange(int32_t origin, int32_t bound) {
	$init(RandomSupport);
	if (origin >= bound) {
		$throwNew($IllegalArgumentException, RandomSupport::BAD_RANGE);
	}
}

void RandomSupport::checkRange(int64_t origin, int64_t bound) {
	$init(RandomSupport);
	if (origin >= bound) {
		$throwNew($IllegalArgumentException, RandomSupport::BAD_RANGE);
	}
}

$longs* RandomSupport::convertSeedBytesToLongs($bytes* seed, int32_t n, int32_t z) {
	$init(RandomSupport);
	$var($longs, result, $new($longs, n));
	int32_t m = $Math::min($nc(seed)->length, n << 3);
	for (int32_t j = 0; j < m; ++j) {
		result->set(j >> 3, (result->get(j >> 3) << 8) | $nc(seed)->get(j));
	}
	int64_t v = result->get(0);
	for (int32_t j = (m + 7) >> 3; j < n; ++j) {
		result->set(j, mixMurmur64(v += RandomSupport::SILVER_RATIO_64));
	}
	bool search$break = false;
	for (;;) {
		{
			for (int32_t j = n - z; j < n; ++j) {
				if (result->get(j) != 0) {
					search$break = true;
					break;
				}
			}
			if (search$break) {
				break;
			}
			int64_t w = (int64_t)(result->get(0) & (uint64_t)~(int64_t)1);
			for (int32_t j = n - z; j < n; ++j) {
				result->set(j, mixMurmur64(w += RandomSupport::SILVER_RATIO_64));
			}
		}
		break;
	}
	return result;
}

$ints* RandomSupport::convertSeedBytesToInts($bytes* seed, int32_t n, int32_t z) {
	$init(RandomSupport);
	$var($ints, result, $new($ints, n));
	int32_t m = $Math::min($nc(seed)->length, n << 2);
	for (int32_t j = 0; j < m; ++j) {
		result->set(j >> 2, (result->get(j >> 2) << 8) | $nc(seed)->get(j));
	}
	int32_t v = result->get(0);
	for (int32_t j = (m + 3) >> 2; j < n; ++j) {
		result->set(j, mixMurmur32(v += RandomSupport::SILVER_RATIO_32));
	}
	bool search$break = false;
	for (;;) {
		{
			for (int32_t j = n - z; j < n; ++j) {
				if (result->get(j) != 0) {
					search$break = true;
					break;
				}
			}
			if (search$break) {
				break;
			}
			int32_t w = (int32_t)(result->get(0) & (uint32_t)~1);
			for (int32_t j = n - z; j < n; ++j) {
				result->set(j, mixMurmur32(w += RandomSupport::SILVER_RATIO_32));
			}
		}
		break;
	}
	return result;
}

int64_t RandomSupport::boundedNextLong($RandomGenerator* rng, int64_t origin, int64_t bound) {
	$init(RandomSupport);
	int64_t r = $nc(rng)->nextLong();
	if (origin < bound) {
		int64_t n = bound - origin;
		int64_t m = n - 1;
		if (((int64_t)(n & (uint64_t)m)) == (int64_t)0) {
			r = ((int64_t)(r & (uint64_t)m)) + origin;
		} else if (n > (int64_t)0) {
			for (int64_t u = (int64_t)((uint64_t)r >> 1); u + m - (r = $mod(u, n)) < (int64_t)0; u = (int64_t)((uint64_t)rng->nextLong() >> 1)) {
			}
			r += origin;
		} else {
			while (r < origin || r >= bound) {
				r = rng->nextLong();
			}
		}
	}
	return r;
}

int64_t RandomSupport::boundedNextLong($RandomGenerator* rng, int64_t bound) {
	$init(RandomSupport);
	int64_t m = bound - 1;
	int64_t r = $nc(rng)->nextLong();
	if (((int64_t)(bound & (uint64_t)m)) == (int64_t)0) {
		r &= (uint64_t)m;
	} else {
		for (int64_t u = (int64_t)((uint64_t)r >> 1); u + m - (r = $mod(u, bound)) < (int64_t)0; u = (int64_t)((uint64_t)rng->nextLong() >> 1)) {
		}
	}
	return r;
}

int32_t RandomSupport::boundedNextInt($RandomGenerator* rng, int32_t origin, int32_t bound) {
	$init(RandomSupport);
	int32_t r = $nc(rng)->nextInt();
	if (origin < bound) {
		int32_t n = bound - origin;
		int32_t m = n - 1;
		if (((int32_t)(n & (uint32_t)m)) == 0) {
			r = ((int32_t)(r & (uint32_t)m)) + origin;
		} else if (n > 0) {
			for (int32_t u = (int32_t)((uint32_t)r >> 1); u + m - (r = $mod(u, n)) < 0; u = (int32_t)((uint32_t)rng->nextInt() >> 1)) {
			}
			r += origin;
		} else {
			while (r < origin || r >= bound) {
				r = rng->nextInt();
			}
		}
	}
	return r;
}

int32_t RandomSupport::boundedNextInt($RandomGenerator* rng, int32_t bound) {
	$init(RandomSupport);
	int32_t m = bound - 1;
	int32_t r = $nc(rng)->nextInt();
	if (((int32_t)(bound & (uint32_t)m)) == 0) {
		r &= (uint32_t)m;
	} else {
		for (int32_t u = (int32_t)((uint32_t)r >> 1); u + m - (r = $mod(u, bound)) < 0; u = (int32_t)((uint32_t)rng->nextInt() >> 1)) {
		}
	}
	return r;
}

double RandomSupport::boundedNextDouble($RandomGenerator* rng, double origin, double bound) {
	$init(RandomSupport);
	double r = $nc(rng)->nextDouble();
	if (origin < bound) {
		r = r * (bound - origin) + origin;
		if (r >= bound) {
			r = $Double::longBitsToDouble($Double::doubleToLongBits(bound) - 1);
		}
	}
	return r;
}

double RandomSupport::boundedNextDouble($RandomGenerator* rng, double bound) {
	$init(RandomSupport);
	double r = $nc(rng)->nextDouble();
	r = r * bound;
	if (r >= bound) {
		r = $Double::longBitsToDouble($Double::doubleToLongBits(bound) - 1);
	}
	return r;
}

float RandomSupport::boundedNextFloat($RandomGenerator* rng, float origin, float bound) {
	$init(RandomSupport);
	float r = $nc(rng)->nextFloat();
	if (origin < bound) {
		r = r * (bound - origin) + origin;
		if (r >= bound) {
			r = $Float::intBitsToFloat($Float::floatToIntBits(bound) - 1);
		}
	}
	return r;
}

float RandomSupport::boundedNextFloat($RandomGenerator* rng, float bound) {
	$init(RandomSupport);
	float r = $nc(rng)->nextFloat();
	r = r * bound;
	if (r >= bound) {
		r = $Float::intBitsToFloat($Float::floatToIntBits(bound) - 1);
	}
	return r;
}

bool RandomSupport::secureRandomSeedRequested() {
	$init(RandomSupport);
	$beforeCallerSensitive();
	$var($String, pp, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "java.util.secureRandomSeed"_s)))));
	return (pp != nullptr && pp->equalsIgnoreCase("true"_s));
}

int64_t RandomSupport::initialSeed() {
	$init(RandomSupport);
	if (RandomSupport::useSecureRandomSeed) {
		$var($bytes, seedBytes, $SecureRandom::getSeed(8));
		int64_t s = (int64_t)((int64_t)($nc(seedBytes)->get(0)) & (uint64_t)(int64_t)255);
		for (int32_t i = 1; i < 8; ++i) {
			s = (s << 8) | ((int64_t)((int64_t)(seedBytes->get(i)) & (uint64_t)(int64_t)255));
		}
		return s;
	}
	int64_t var$0 = mixStafford13($System::currentTimeMillis());
	return (var$0 ^ mixStafford13($System::nanoTime()));
}

int64_t RandomSupport::mixMurmur64(int64_t z) {
	$init(RandomSupport);
	z = (z ^ ((int64_t)((uint64_t)z >> 33))) * (int64_t)0xFF51AFD7ED558CCD;
	z = (z ^ ((int64_t)((uint64_t)z >> 33))) * (int64_t)0xC4CEB9FE1A85EC53;
	return z ^ ((int64_t)((uint64_t)z >> 33));
}

int64_t RandomSupport::mixStafford13(int64_t z) {
	$init(RandomSupport);
	z = (z ^ ((int64_t)((uint64_t)z >> 30))) * (int64_t)0xBF58476D1CE4E5B9;
	z = (z ^ ((int64_t)((uint64_t)z >> 27))) * (int64_t)0x94D049BB133111EB;
	return z ^ ((int64_t)((uint64_t)z >> 31));
}

int64_t RandomSupport::mixLea64(int64_t z) {
	$init(RandomSupport);
	z = (z ^ ((int64_t)((uint64_t)z >> 32))) * (int64_t)0xDABA0B6EB09322E3;
	z = (z ^ ((int64_t)((uint64_t)z >> 32))) * (int64_t)0xDABA0B6EB09322E3;
	return z ^ ((int64_t)((uint64_t)z >> 32));
}

int32_t RandomSupport::mixMurmur32(int32_t z) {
	$init(RandomSupport);
	z = (z ^ ((int32_t)((uint32_t)z >> 16))) * (int32_t)0x85EBCA6B;
	z = (z ^ ((int32_t)((uint32_t)z >> 13))) * (int32_t)0xC2B2AE35;
	return z ^ ((int32_t)((uint32_t)z >> 16));
}

int32_t RandomSupport::mixLea32(int32_t z) {
	$init(RandomSupport);
	z = (z ^ ((int32_t)((uint32_t)z >> 16))) * (int32_t)0xD36D884B;
	z = (z ^ ((int32_t)((uint32_t)z >> 16))) * (int32_t)0xD36D884B;
	return z ^ ((int32_t)((uint32_t)z >> 16));
}

double RandomSupport::computeNextExponential($RandomGenerator* rng) {
	$init(RandomSupport);
	int64_t U1 = $nc(rng)->nextLong();
	int64_t i = (int64_t)(U1 & (uint64_t)(int64_t)$RandomSupport$DoubleZigguratTables::exponentialLayerMask);
	if (i < $RandomSupport$DoubleZigguratTables::exponentialNumberOfLayers) {
		$init($RandomSupport$DoubleZigguratTables);
		return $nc($RandomSupport$DoubleZigguratTables::exponentialX)->get((int32_t)i) * ((int64_t)((uint64_t)U1 >> 1));
	}
	for (double extra = 0.0;;) {
		int64_t UA = rng->nextLong();
		int32_t j = (int32_t)((int32_t)UA & (uint32_t)$RandomSupport$DoubleZigguratTables::exponentialAliasMask);
		$init($RandomSupport$DoubleZigguratTables);
		if (UA >= $nc($RandomSupport$DoubleZigguratTables::exponentialAliasThreshold)->get(j)) {
			j = (int32_t)($nc($RandomSupport$DoubleZigguratTables::exponentialAliasMap)->get(j) & (uint32_t)$RandomSupport$DoubleZigguratTables::exponentialSignCorrectionMask);
		}
		if (j > 0) {
			$var($doubles, X, $RandomSupport$DoubleZigguratTables::exponentialX);
			$var($doubles, Y, $RandomSupport$DoubleZigguratTables::exponentialY);
			for (;; U1 = ((int64_t)((uint64_t)rng->nextLong() >> 1))) {
				int64_t U2 = ((int64_t)((uint64_t)rng->nextLong() >> 1));
				double x = ($nc(X)->get(j) * 9.223372036854776E18) + ((X->get(j - 1) - X->get(j)) * (double)U1);
				int64_t Udiff = U2 - U1;
				if (Udiff < 0) {
					Udiff = -Udiff;
					U2 = U1;
					U1 -= Udiff;
				}
				if (Udiff >= $RandomSupport$DoubleZigguratTables::exponentialConvexMargin) {
					return x + extra;
				}
				double y = ($nc(Y)->get(j) * 9.223372036854776E18) + ((Y->get(j) - Y->get(j - 1)) * (double)U2);
				if (y <= $Math::exp(-x)) {
					return x + extra;
				}
			}
		}
		extra += $RandomSupport$DoubleZigguratTables::exponentialX0;
		U1 = rng->nextLong();
		i = (int64_t)(U1 & (uint64_t)(int64_t)$RandomSupport$DoubleZigguratTables::exponentialLayerMask);
		if (i < $RandomSupport$DoubleZigguratTables::exponentialNumberOfLayers) {
			return $nc($RandomSupport$DoubleZigguratTables::exponentialX)->get((int32_t)i) * ((int64_t)((uint64_t)U1 >> 1)) + extra;
		}
	}
}

double RandomSupport::computeNextGaussian($RandomGenerator* rng) {
	$init(RandomSupport);
	int64_t U1 = $nc(rng)->nextLong();
	int64_t i = (int64_t)(U1 & (uint64_t)(int64_t)$RandomSupport$DoubleZigguratTables::normalLayerMask);
	if (i < $RandomSupport$DoubleZigguratTables::normalNumberOfLayers) {
		$init($RandomSupport$DoubleZigguratTables);
		return $nc($RandomSupport$DoubleZigguratTables::normalX)->get((int32_t)i) * U1;
	}
	double signBit = (U1 >= 0) ? 1.0 : -1.0;
	U1 = (int64_t)((uint64_t)(U1 << 1) >> 1);
	int64_t UA = rng->nextLong();
	int32_t j = (int32_t)((int32_t)UA & (uint32_t)$RandomSupport$DoubleZigguratTables::normalAliasMask);
	$init($RandomSupport$DoubleZigguratTables);
	if (UA >= $nc($RandomSupport$DoubleZigguratTables::normalAliasThreshold)->get(j)) {
		j = (int32_t)($nc($RandomSupport$DoubleZigguratTables::normalAliasMap)->get(j) & (uint32_t)$RandomSupport$DoubleZigguratTables::normalSignCorrectionMask);
	}
	double x = 0.0;
	$var($doubles, X, $RandomSupport$DoubleZigguratTables::normalX);
	$var($doubles, Y, $RandomSupport$DoubleZigguratTables::normalY);
	if (j > $RandomSupport$DoubleZigguratTables::normalInflectionIndex) {
		for (;; U1 = ((int64_t)((uint64_t)rng->nextLong() >> 1))) {
			int64_t U2 = ((int64_t)((uint64_t)rng->nextLong() >> 1));
			x = ($nc(X)->get(j) * 9.223372036854776E18) + ((X->get(j - 1) - X->get(j)) * (double)U1);
			int64_t Udiff = U2 - U1;
			if (Udiff >= 0) {
				break;
			}
			if (Udiff <= -$RandomSupport$DoubleZigguratTables::normalConcaveMargin) {
				continue;
			}
			double y = ($nc(Y)->get(j) * 9.223372036854776E18) + ((Y->get(j) - Y->get(j - 1)) * (double)U2);
			if (y <= $Math::exp(-0.5 * x * x)) {
				break;
			}
		}
	} else if (j == 0) {
		do {
			x = ($div(1.0, $RandomSupport$DoubleZigguratTables::normalX0)) * computeNextExponential(rng);
		} while (computeNextExponential(rng) < 0.5 * x * x);
		x += $RandomSupport$DoubleZigguratTables::normalX0;
	} else if (j < $RandomSupport$DoubleZigguratTables::normalInflectionIndex) {
		for (;; U1 = ((int64_t)((uint64_t)rng->nextLong() >> 1))) {
			int64_t U2 = ((int64_t)((uint64_t)rng->nextLong() >> 1));
			x = ($nc(X)->get(j) * 9.223372036854776E18) + ((X->get(j - 1) - X->get(j)) * (double)U1);
			int64_t Udiff = U2 - U1;
			if (Udiff < 0) {
				Udiff = -Udiff;
				U2 = U1;
				U1 -= Udiff;
			}
			if (Udiff >= $RandomSupport$DoubleZigguratTables::normalConvexMargin) {
				break;
			}
			double y = ($nc(Y)->get(j) * 9.223372036854776E18) + ((Y->get(j) - Y->get(j - 1)) * (double)U2);
			if (y <= $Math::exp(-0.5 * x * x)) {
				break;
			}
		}
	} else {
		for (;; U1 = ((int64_t)((uint64_t)rng->nextLong() >> 1))) {
			int64_t U2 = ((int64_t)((uint64_t)rng->nextLong() >> 1));
			x = ($nc(X)->get(j) * 9.223372036854776E18) + ((X->get(j - 1) - X->get(j)) * (double)U1);
			int64_t Udiff = U2 - U1;
			if (Udiff >= $RandomSupport$DoubleZigguratTables::normalConvexMargin) {
				break;
			}
			if (Udiff <= -$RandomSupport$DoubleZigguratTables::normalConcaveMargin) {
				continue;
			}
			double y = ($nc(Y)->get(j) * 9.223372036854776E18) + ((Y->get(j) - Y->get(j - 1)) * (double)U2);
			if (y <= $Math::exp(-0.5 * x * x)) {
				break;
			}
		}
	}
	return signBit * x;
}

void clinit$RandomSupport($Class* class$) {
	$assignStatic(RandomSupport::BAD_SIZE, "size must be non-negative"_s);
	$assignStatic(RandomSupport::BAD_DISTANCE, "jump distance must be finite, positive, and an exact integer"_s);
	$assignStatic(RandomSupport::BAD_BOUND, "bound must be positive"_s);
	$assignStatic(RandomSupport::BAD_FLOATING_BOUND, "bound must be finite and positive"_s);
	$assignStatic(RandomSupport::BAD_RANGE, "bound must be greater than origin"_s);
	RandomSupport::useSecureRandomSeed = RandomSupport::secureRandomSeedRequested();
}

RandomSupport::RandomSupport() {
}

$Class* RandomSupport::load$($String* name, bool initialize) {
	$loadClass(RandomSupport, name, initialize, &_RandomSupport_ClassInfo_, clinit$RandomSupport, allocate$RandomSupport);
	return class$;
}

$Class* RandomSupport::class$ = nullptr;

			} // random
		} // util
	} // internal
} // jdk