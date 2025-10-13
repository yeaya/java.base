#include <java/util/Random.h>

#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/io/StreamCorruptedException.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Byte.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Double.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/StrictMath.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <java/util/random/RandomGenerator.h>
#include <java/util/stream/DoubleStream.h>
#include <java/util/stream/IntStream.h>
#include <java/util/stream/LongStream.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/util/random/RandomSupport$AbstractSpliteratorGenerator.h>
#include <jcpp.h>

#undef DOUBLE_UNIT
#undef SIZE
#undef TYPE

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $Serializable = ::java::io::Serializable;
using $StreamCorruptedException = ::java::io::StreamCorruptedException;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $StrictMath = ::java::lang::StrictMath;
using $Field = ::java::lang::reflect::Field;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;
using $RandomGenerator = ::java::util::random::RandomGenerator;
using $DoubleStream = ::java::util::stream::DoubleStream;
using $IntStream = ::java::util::stream::IntStream;
using $LongStream = ::java::util::stream::LongStream;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $RandomSupport$AbstractSpliteratorGenerator = ::jdk::internal::util::random::RandomSupport$AbstractSpliteratorGenerator;

namespace java {
	namespace util {

$NamedAttribute Random_Attribute_var$0[] = {
	{"name", 's', "Random"},
	{"i", 'I', "48"},
	{"j", 'I', "0"},
	{"k", 'I', "0"},
	{"equidistribution", 'I', "0"},
	{}
};
$CompoundAttribute _Random_Annotations_[] = {
	{"Ljdk/internal/util/random/RandomSupport$RandomGeneratorProperties;", Random_Attribute_var$0},
	{}
};


$FieldInfo _Random_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Random, serialVersionUID)},
	{"seed", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PRIVATE | $FINAL, $field(Random, seed)},
	{"multiplier", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Random, multiplier)},
	{"addend", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Random, addend)},
	{"mask", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Random, mask)},
	{"DOUBLE_UNIT", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Random, DOUBLE_UNIT)},
	{"seedUniquifier", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Random, seedUniquifier$)},
	{"nextNextGaussian", "D", nullptr, $PRIVATE, $field(Random, nextNextGaussian)},
	{"haveNextNextGaussian", "Z", nullptr, $PRIVATE, $field(Random, haveNextNextGaussian)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Random, serialPersistentFields)},
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Random, unsafe)},
	{"seedOffset", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Random, seedOffset)},
	{}
};

$MethodInfo _Random_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Random::*)()>(&Random::init$))},
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(Random::*)(int64_t)>(&Random::init$))},
	{"doubles", "(J)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC},
	{"doubles", "()Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC},
	{"doubles", "(JDD)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC},
	{"doubles", "(DD)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC},
	{"initialScramble", "(J)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&Random::initialScramble))},
	{"ints", "(J)Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"ints", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"ints", "(JII)Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"ints", "(II)Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"longs", "(J)Ljava/util/stream/LongStream;", nullptr, $PUBLIC},
	{"longs", "()Ljava/util/stream/LongStream;", nullptr, $PUBLIC},
	{"longs", "(JJJ)Ljava/util/stream/LongStream;", nullptr, $PUBLIC},
	{"longs", "(JJ)Ljava/util/stream/LongStream;", nullptr, $PUBLIC},
	{"next", "(I)I", nullptr, $PROTECTED},
	{"nextBoolean", "()Z", nullptr, $PUBLIC},
	{"nextBytes", "([B)V", nullptr, $PUBLIC},
	{"nextDouble", "()D", nullptr, $PUBLIC},
	{"nextFloat", "()F", nullptr, $PUBLIC},
	{"nextGaussian", "()D", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"nextInt", "()I", nullptr, $PUBLIC},
	{"nextInt", "(I)I", nullptr, $PUBLIC},
	{"nextLong", "()J", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Random::*)($ObjectInputStream*)>(&Random::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"resetSeed", "(J)V", nullptr, $PRIVATE, $method(static_cast<void(Random::*)(int64_t)>(&Random::resetSeed))},
	{"seedUniquifier", "()J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)()>(&Random::seedUniquifier))},
	{"setSeed", "(J)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(Random::*)($ObjectOutputStream*)>(&Random::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _Random_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.Random",
	"java.lang.Object",
	"java.util.random.RandomGenerator,java.io.Serializable",
	_Random_FieldInfo_,
	_Random_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Random_Annotations_
};

$Object* allocate$Random($Class* clazz) {
	return $of($alloc(Random));
}

int32_t Random::hashCode() {
	 return this->$RandomGenerator::hashCode();
}

bool Random::equals(Object$* obj) {
	 return this->$RandomGenerator::equals(obj);
}

$Object* Random::clone() {
	 return this->$RandomGenerator::clone();
}

$String* Random::toString() {
	 return this->$RandomGenerator::toString();
}

void Random::finalize() {
	this->$RandomGenerator::finalize();
}

double Random::DOUBLE_UNIT = 0.0;
$AtomicLong* Random::seedUniquifier$ = nullptr;

$ObjectStreamFieldArray* Random::serialPersistentFields = nullptr;
$Unsafe* Random::unsafe = nullptr;
int64_t Random::seedOffset = 0;

void Random::init$() {
	int64_t var$0 = seedUniquifier();
	Random::init$(var$0 ^ $System::nanoTime());
}

int64_t Random::seedUniquifier() {
	$init(Random);
	for (;;) {
		int64_t current = $nc(Random::seedUniquifier$)->get();
		int64_t next = current * (int64_t)0x106689D45497FDB5;
		if ($nc(Random::seedUniquifier$)->compareAndSet(current, next)) {
			return next;
		}
	}
}

void Random::init$(int64_t seed) {
	this->haveNextNextGaussian = false;
	if ($of(this)->getClass() == Random::class$) {
		$set(this, seed, $new($AtomicLong, initialScramble(seed)));
	} else {
		$set(this, seed, $new($AtomicLong));
		setSeed(seed);
	}
}

int64_t Random::initialScramble(int64_t seed) {
	$init(Random);
	return (int64_t)((seed ^ Random::multiplier) & (uint64_t)Random::mask);
}

void Random::setSeed(int64_t seed) {
	$synchronized(this) {
		$nc(this->seed)->set(initialScramble(seed));
		this->haveNextNextGaussian = false;
	}
}

int32_t Random::next(int32_t bits) {
	int64_t oldseed = 0;
	int64_t nextseed = 0;
	$var($AtomicLong, seed, this->seed);
	do {
		oldseed = $nc(seed)->get();
		nextseed = (int64_t)((oldseed * Random::multiplier + Random::addend) & (uint64_t)Random::mask);
	} while (!$nc(seed)->compareAndSet(oldseed, nextseed));
	return (int32_t)($usr(nextseed, 48 - bits));
}

void Random::nextBytes($bytes* bytes) {
	{
		int32_t i = 0;
		int32_t len = $nc(bytes)->length;
		for (; i < len;) {
			{
				int32_t rnd = nextInt();
				int32_t n = $Math::min(len - i, $div($Integer::SIZE, $Byte::SIZE));
				for (; n-- > 0; rnd >>= $Byte::SIZE) {
					bytes->set(i++, (int8_t)rnd);
				}
			}
		}
	}
}

int32_t Random::nextInt() {
	return next(32);
}

int32_t Random::nextInt(int32_t bound) {
	if (bound <= 0) {
		$throwNew($IllegalArgumentException, "bound must be positive"_s);
	}
	int32_t r = next(31);
	int32_t m = bound - 1;
	if (((int32_t)(bound & (uint32_t)m)) == 0) {
		r = (int32_t)((bound * (int64_t)r) >> 31);
	} else {
		for (int32_t u = r; u - (r = $mod(u, bound)) + m < 0; u = next(31)) {
		}
	}
	return r;
}

int64_t Random::nextLong() {
	int64_t var$0 = ((int64_t)(next(32)) << 32);
	return var$0 + next(32);
}

bool Random::nextBoolean() {
	return next(1) != 0;
}

float Random::nextFloat() {
	return $div(next(24), ((float)(1 << 24)));
}

double Random::nextDouble() {
	int64_t var$0 = ((int64_t)(next(26)) << 27);
	return (var$0 + next(27)) * Random::DOUBLE_UNIT;
}

double Random::nextGaussian() {
	$synchronized(this) {
		if (this->haveNextNextGaussian) {
			this->haveNextNextGaussian = false;
			return this->nextNextGaussian;
		} else {
			double v1 = 0.0;
			double v2 = 0.0;
			double s = 0.0;
			do {
				v1 = 2 * nextDouble() - 1;
				v2 = 2 * nextDouble() - 1;
				s = v1 * v1 + v2 * v2;
			} while (s >= 1 || s == 0);
			double multiplier = $StrictMath::sqrt(-2 * $StrictMath::log(s) / s);
			this->nextNextGaussian = v2 * multiplier;
			this->haveNextNextGaussian = true;
			return v1 * multiplier;
		}
	}
}

void Random::readObject($ObjectInputStream* s) {
	$var($ObjectInputStream$GetField, fields, $nc(s)->readFields());
	int64_t seedVal = $nc(fields)->get("seed"_s, (int64_t)-1);
	if (seedVal < 0) {
		$throwNew($StreamCorruptedException, "Random: invalid seed"_s);
	}
	resetSeed(seedVal);
	this->nextNextGaussian = fields->get("nextNextGaussian"_s, 0.0);
	this->haveNextNextGaussian = fields->get("haveNextNextGaussian"_s, false);
}

void Random::writeObject($ObjectOutputStream* s) {
	$synchronized(this) {
		$var($ObjectOutputStream$PutField, fields, $nc(s)->putFields());
		$nc(fields)->put("seed"_s, $nc(this->seed)->get());
		fields->put("nextNextGaussian"_s, this->nextNextGaussian);
		fields->put("haveNextNextGaussian"_s, this->haveNextNextGaussian);
		s->writeFields();
	}
}

void Random::resetSeed(int64_t seedVal) {
	$nc(Random::unsafe)->putReferenceVolatile(this, Random::seedOffset, $$new($AtomicLong, seedVal));
}

$IntStream* Random::ints(int64_t streamSize) {
	return $RandomSupport$AbstractSpliteratorGenerator::ints(static_cast<$RandomGenerator*>(this), streamSize);
}

$IntStream* Random::ints() {
	return $RandomSupport$AbstractSpliteratorGenerator::ints(static_cast<$RandomGenerator*>(this));
}

$IntStream* Random::ints(int64_t streamSize, int32_t randomNumberOrigin, int32_t randomNumberBound) {
	return $RandomSupport$AbstractSpliteratorGenerator::ints(this, streamSize, randomNumberOrigin, randomNumberBound);
}

$IntStream* Random::ints(int32_t randomNumberOrigin, int32_t randomNumberBound) {
	return $RandomSupport$AbstractSpliteratorGenerator::ints(static_cast<$RandomGenerator*>(this), randomNumberOrigin, randomNumberBound);
}

$LongStream* Random::longs(int64_t streamSize) {
	return $RandomSupport$AbstractSpliteratorGenerator::longs(static_cast<$RandomGenerator*>(this), streamSize);
}

$LongStream* Random::longs() {
	return $RandomSupport$AbstractSpliteratorGenerator::longs(static_cast<$RandomGenerator*>(this));
}

$LongStream* Random::longs(int64_t streamSize, int64_t randomNumberOrigin, int64_t randomNumberBound) {
	return $RandomSupport$AbstractSpliteratorGenerator::longs(this, streamSize, randomNumberOrigin, randomNumberBound);
}

$LongStream* Random::longs(int64_t randomNumberOrigin, int64_t randomNumberBound) {
	return $RandomSupport$AbstractSpliteratorGenerator::longs(static_cast<$RandomGenerator*>(this), randomNumberOrigin, randomNumberBound);
}

$DoubleStream* Random::doubles(int64_t streamSize) {
	return $RandomSupport$AbstractSpliteratorGenerator::doubles(static_cast<$RandomGenerator*>(this), streamSize);
}

$DoubleStream* Random::doubles() {
	return $RandomSupport$AbstractSpliteratorGenerator::doubles(static_cast<$RandomGenerator*>(this));
}

$DoubleStream* Random::doubles(int64_t streamSize, double randomNumberOrigin, double randomNumberBound) {
	return $RandomSupport$AbstractSpliteratorGenerator::doubles(this, streamSize, randomNumberOrigin, randomNumberBound);
}

$DoubleStream* Random::doubles(double randomNumberOrigin, double randomNumberBound) {
	return $RandomSupport$AbstractSpliteratorGenerator::doubles(static_cast<$RandomGenerator*>(this), randomNumberOrigin, randomNumberBound);
}

void clinit$Random($Class* class$) {
	Random::DOUBLE_UNIT = 1.1102230246251565E-16;
	$beforeCallerSensitive();
	$assignStatic(Random::seedUniquifier$, $new($AtomicLong, 0x001ED8B55FAC9DEC));
		$init($Long);
		$init($Double);
		$init($Boolean);
	$assignStatic(Random::serialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "seed"_s, $Long::TYPE),
		$$new($ObjectStreamField, "nextNextGaussian"_s, $Double::TYPE),
		$$new($ObjectStreamField, "haveNextNextGaussian"_s, $Boolean::TYPE)
	}));
	$assignStatic(Random::unsafe, $Unsafe::getUnsafe());
	{
		try {
			Random::seedOffset = $nc(Random::unsafe)->objectFieldOffset($(Random::class$->getDeclaredField("seed"_s)));
		} catch ($Exception&) {
			$var($Exception, ex, $catch());
			$throwNew($Error, static_cast<$Throwable*>(ex));
		}
	}
}

Random::Random() {
}

$Class* Random::load$($String* name, bool initialize) {
	$loadClass(Random, name, initialize, &_Random_ClassInfo_, clinit$Random, allocate$Random);
	return class$;
}

$Class* Random::class$ = nullptr;

	} // util
} // java