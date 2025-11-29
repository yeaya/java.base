#include <java/util/random/RandomGenerator.h>

#include <java/io/Serializable.h>
#include <java/lang/Deprecated.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Objects.h>
#include <java/util/function/DoubleSupplier.h>
#include <java/util/function/IntSupplier.h>
#include <java/util/function/LongSupplier.h>
#include <java/util/random/RandomGeneratorFactory.h>
#include <java/util/stream/DoubleStream.h>
#include <java/util/stream/IntStream.h>
#include <java/util/stream/LongStream.h>
#include <jdk/internal/util/random/RandomSupport.h>
#include <jcpp.h>

#undef SIZE

using $Serializable = ::java::io::Serializable;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $Deprecated = ::java::lang::Deprecated;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Objects = ::java::util::Objects;
using $DoubleSupplier = ::java::util::function::DoubleSupplier;
using $IntSupplier = ::java::util::function::IntSupplier;
using $LongSupplier = ::java::util::function::LongSupplier;
using $RandomGeneratorFactory = ::java::util::random::RandomGeneratorFactory;
using $DoubleStream = ::java::util::stream::DoubleStream;
using $IntStream = ::java::util::stream::IntStream;
using $LongStream = ::java::util::stream::LongStream;
using $RandomSupport = ::jdk::internal::util::random::RandomSupport;

namespace java {
	namespace util {
		namespace random {

class RandomGenerator$$Lambda$nextDouble : public $DoubleSupplier {
	$class(RandomGenerator$$Lambda$nextDouble, $NO_CLASS_INIT, $DoubleSupplier)
public:
	void init$(RandomGenerator* inst) {
		$set(this, inst$, inst);
	}
	virtual double getAsDouble() override {
		 return $nc(inst$)->nextDouble();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RandomGenerator$$Lambda$nextDouble>());
	}
	RandomGenerator* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RandomGenerator$$Lambda$nextDouble::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RandomGenerator$$Lambda$nextDouble, inst$)},
	{}
};
$MethodInfo RandomGenerator$$Lambda$nextDouble::methodInfos[3] = {
	{"<init>", "(Ljava/util/random/RandomGenerator;)V", nullptr, $PUBLIC, $method(static_cast<void(RandomGenerator$$Lambda$nextDouble::*)(RandomGenerator*)>(&RandomGenerator$$Lambda$nextDouble::init$))},
	{"getAsDouble", "()D", nullptr, $PUBLIC},
	{}
};
$ClassInfo RandomGenerator$$Lambda$nextDouble::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.random.RandomGenerator$$Lambda$nextDouble",
	"java.lang.Object",
	"java.util.function.DoubleSupplier",
	fieldInfos,
	methodInfos
};
$Class* RandomGenerator$$Lambda$nextDouble::load$($String* name, bool initialize) {
	$loadClass(RandomGenerator$$Lambda$nextDouble, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RandomGenerator$$Lambda$nextDouble::class$ = nullptr;

class RandomGenerator$$Lambda$lambda$doubles$0$1 : public $DoubleSupplier {
	$class(RandomGenerator$$Lambda$lambda$doubles$0$1, $NO_CLASS_INIT, $DoubleSupplier)
public:
	void init$(RandomGenerator* inst, double randomNumberOrigin, double randomNumberBound) {
		$set(this, inst$, inst);
		this->randomNumberOrigin = randomNumberOrigin;
		this->randomNumberBound = randomNumberBound;
	}
	virtual double getAsDouble() override {
		 return $nc(inst$)->lambda$doubles$0(randomNumberOrigin, randomNumberBound);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RandomGenerator$$Lambda$lambda$doubles$0$1>());
	}
	RandomGenerator* inst$ = nullptr;
	double randomNumberOrigin = 0.0;
	double randomNumberBound = 0.0;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RandomGenerator$$Lambda$lambda$doubles$0$1::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RandomGenerator$$Lambda$lambda$doubles$0$1, inst$)},
	{"randomNumberOrigin", "D", nullptr, $PUBLIC, $field(RandomGenerator$$Lambda$lambda$doubles$0$1, randomNumberOrigin)},
	{"randomNumberBound", "D", nullptr, $PUBLIC, $field(RandomGenerator$$Lambda$lambda$doubles$0$1, randomNumberBound)},
	{}
};
$MethodInfo RandomGenerator$$Lambda$lambda$doubles$0$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/random/RandomGenerator;DD)V", nullptr, $PUBLIC, $method(static_cast<void(RandomGenerator$$Lambda$lambda$doubles$0$1::*)(RandomGenerator*,double,double)>(&RandomGenerator$$Lambda$lambda$doubles$0$1::init$))},
	{"getAsDouble", "()D", nullptr, $PUBLIC},
	{}
};
$ClassInfo RandomGenerator$$Lambda$lambda$doubles$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.random.RandomGenerator$$Lambda$lambda$doubles$0$1",
	"java.lang.Object",
	"java.util.function.DoubleSupplier",
	fieldInfos,
	methodInfos
};
$Class* RandomGenerator$$Lambda$lambda$doubles$0$1::load$($String* name, bool initialize) {
	$loadClass(RandomGenerator$$Lambda$lambda$doubles$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RandomGenerator$$Lambda$lambda$doubles$0$1::class$ = nullptr;

class RandomGenerator$$Lambda$nextInt$2 : public $IntSupplier {
	$class(RandomGenerator$$Lambda$nextInt$2, $NO_CLASS_INIT, $IntSupplier)
public:
	void init$(RandomGenerator* inst) {
		$set(this, inst$, inst);
	}
	virtual int32_t getAsInt() override {
		 return $nc(inst$)->nextInt();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RandomGenerator$$Lambda$nextInt$2>());
	}
	RandomGenerator* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RandomGenerator$$Lambda$nextInt$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RandomGenerator$$Lambda$nextInt$2, inst$)},
	{}
};
$MethodInfo RandomGenerator$$Lambda$nextInt$2::methodInfos[3] = {
	{"<init>", "(Ljava/util/random/RandomGenerator;)V", nullptr, $PUBLIC, $method(static_cast<void(RandomGenerator$$Lambda$nextInt$2::*)(RandomGenerator*)>(&RandomGenerator$$Lambda$nextInt$2::init$))},
	{"getAsInt", "()I", nullptr, $PUBLIC},
	{}
};
$ClassInfo RandomGenerator$$Lambda$nextInt$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.random.RandomGenerator$$Lambda$nextInt$2",
	"java.lang.Object",
	"java.util.function.IntSupplier",
	fieldInfos,
	methodInfos
};
$Class* RandomGenerator$$Lambda$nextInt$2::load$($String* name, bool initialize) {
	$loadClass(RandomGenerator$$Lambda$nextInt$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RandomGenerator$$Lambda$nextInt$2::class$ = nullptr;

class RandomGenerator$$Lambda$lambda$ints$1$3 : public $IntSupplier {
	$class(RandomGenerator$$Lambda$lambda$ints$1$3, $NO_CLASS_INIT, $IntSupplier)
public:
	void init$(RandomGenerator* inst, int32_t randomNumberOrigin, int32_t randomNumberBound) {
		$set(this, inst$, inst);
		this->randomNumberOrigin = randomNumberOrigin;
		this->randomNumberBound = randomNumberBound;
	}
	virtual int32_t getAsInt() override {
		 return $nc(inst$)->lambda$ints$1(randomNumberOrigin, randomNumberBound);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RandomGenerator$$Lambda$lambda$ints$1$3>());
	}
	RandomGenerator* inst$ = nullptr;
	int32_t randomNumberOrigin = 0;
	int32_t randomNumberBound = 0;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RandomGenerator$$Lambda$lambda$ints$1$3::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RandomGenerator$$Lambda$lambda$ints$1$3, inst$)},
	{"randomNumberOrigin", "I", nullptr, $PUBLIC, $field(RandomGenerator$$Lambda$lambda$ints$1$3, randomNumberOrigin)},
	{"randomNumberBound", "I", nullptr, $PUBLIC, $field(RandomGenerator$$Lambda$lambda$ints$1$3, randomNumberBound)},
	{}
};
$MethodInfo RandomGenerator$$Lambda$lambda$ints$1$3::methodInfos[3] = {
	{"<init>", "(Ljava/util/random/RandomGenerator;II)V", nullptr, $PUBLIC, $method(static_cast<void(RandomGenerator$$Lambda$lambda$ints$1$3::*)(RandomGenerator*,int32_t,int32_t)>(&RandomGenerator$$Lambda$lambda$ints$1$3::init$))},
	{"getAsInt", "()I", nullptr, $PUBLIC},
	{}
};
$ClassInfo RandomGenerator$$Lambda$lambda$ints$1$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.random.RandomGenerator$$Lambda$lambda$ints$1$3",
	"java.lang.Object",
	"java.util.function.IntSupplier",
	fieldInfos,
	methodInfos
};
$Class* RandomGenerator$$Lambda$lambda$ints$1$3::load$($String* name, bool initialize) {
	$loadClass(RandomGenerator$$Lambda$lambda$ints$1$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RandomGenerator$$Lambda$lambda$ints$1$3::class$ = nullptr;

class RandomGenerator$$Lambda$nextLong$4 : public $LongSupplier {
	$class(RandomGenerator$$Lambda$nextLong$4, $NO_CLASS_INIT, $LongSupplier)
public:
	void init$(RandomGenerator* inst) {
		$set(this, inst$, inst);
	}
	virtual int64_t getAsLong() override {
		 return $nc(inst$)->nextLong();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RandomGenerator$$Lambda$nextLong$4>());
	}
	RandomGenerator* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RandomGenerator$$Lambda$nextLong$4::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RandomGenerator$$Lambda$nextLong$4, inst$)},
	{}
};
$MethodInfo RandomGenerator$$Lambda$nextLong$4::methodInfos[3] = {
	{"<init>", "(Ljava/util/random/RandomGenerator;)V", nullptr, $PUBLIC, $method(static_cast<void(RandomGenerator$$Lambda$nextLong$4::*)(RandomGenerator*)>(&RandomGenerator$$Lambda$nextLong$4::init$))},
	{"getAsLong", "()J", nullptr, $PUBLIC},
	{}
};
$ClassInfo RandomGenerator$$Lambda$nextLong$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.random.RandomGenerator$$Lambda$nextLong$4",
	"java.lang.Object",
	"java.util.function.LongSupplier",
	fieldInfos,
	methodInfos
};
$Class* RandomGenerator$$Lambda$nextLong$4::load$($String* name, bool initialize) {
	$loadClass(RandomGenerator$$Lambda$nextLong$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RandomGenerator$$Lambda$nextLong$4::class$ = nullptr;

class RandomGenerator$$Lambda$lambda$longs$2$5 : public $LongSupplier {
	$class(RandomGenerator$$Lambda$lambda$longs$2$5, $NO_CLASS_INIT, $LongSupplier)
public:
	void init$(RandomGenerator* inst, int64_t randomNumberOrigin, int64_t randomNumberBound) {
		$set(this, inst$, inst);
		this->randomNumberOrigin = randomNumberOrigin;
		this->randomNumberBound = randomNumberBound;
	}
	virtual int64_t getAsLong() override {
		 return $nc(inst$)->lambda$longs$2(randomNumberOrigin, randomNumberBound);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RandomGenerator$$Lambda$lambda$longs$2$5>());
	}
	RandomGenerator* inst$ = nullptr;
	int64_t randomNumberOrigin = 0;
	int64_t randomNumberBound = 0;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RandomGenerator$$Lambda$lambda$longs$2$5::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RandomGenerator$$Lambda$lambda$longs$2$5, inst$)},
	{"randomNumberOrigin", "J", nullptr, $PUBLIC, $field(RandomGenerator$$Lambda$lambda$longs$2$5, randomNumberOrigin)},
	{"randomNumberBound", "J", nullptr, $PUBLIC, $field(RandomGenerator$$Lambda$lambda$longs$2$5, randomNumberBound)},
	{}
};
$MethodInfo RandomGenerator$$Lambda$lambda$longs$2$5::methodInfos[3] = {
	{"<init>", "(Ljava/util/random/RandomGenerator;JJ)V", nullptr, $PUBLIC, $method(static_cast<void(RandomGenerator$$Lambda$lambda$longs$2$5::*)(RandomGenerator*,int64_t,int64_t)>(&RandomGenerator$$Lambda$lambda$longs$2$5::init$))},
	{"getAsLong", "()J", nullptr, $PUBLIC},
	{}
};
$ClassInfo RandomGenerator$$Lambda$lambda$longs$2$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.random.RandomGenerator$$Lambda$lambda$longs$2$5",
	"java.lang.Object",
	"java.util.function.LongSupplier",
	fieldInfos,
	methodInfos
};
$Class* RandomGenerator$$Lambda$lambda$longs$2$5::load$($String* name, bool initialize) {
	$loadClass(RandomGenerator$$Lambda$lambda$longs$2$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RandomGenerator$$Lambda$lambda$longs$2$5::class$ = nullptr;

$MethodInfo _RandomGenerator_MethodInfo_[] = {
	{"doubles", "()Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC},
	{"doubles", "(DD)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC},
	{"doubles", "(J)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC},
	{"doubles", "(JDD)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC},
	{"getDefault", "()Ljava/util/random/RandomGenerator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<RandomGenerator*(*)()>(&RandomGenerator::getDefault))},
	{"ints", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"ints", "(II)Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"ints", "(J)Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"ints", "(JII)Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"isDeprecated", "()Z", nullptr, $PUBLIC},
	{"lambda$doubles$0", "(DD)D", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<double(RandomGenerator::*)(double,double)>(&RandomGenerator::lambda$doubles$0))},
	{"lambda$ints$1", "(II)I", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<int32_t(RandomGenerator::*)(int32_t,int32_t)>(&RandomGenerator::lambda$ints$1))},
	{"lambda$longs$2", "(JJ)J", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<int64_t(RandomGenerator::*)(int64_t,int64_t)>(&RandomGenerator::lambda$longs$2))},
	{"longs", "()Ljava/util/stream/LongStream;", nullptr, $PUBLIC},
	{"longs", "(JJ)Ljava/util/stream/LongStream;", nullptr, $PUBLIC},
	{"longs", "(J)Ljava/util/stream/LongStream;", nullptr, $PUBLIC},
	{"longs", "(JJJ)Ljava/util/stream/LongStream;", nullptr, $PUBLIC},
	{"nextBoolean", "()Z", nullptr, $PUBLIC},
	{"nextBytes", "([B)V", nullptr, $PUBLIC},
	{"nextDouble", "()D", nullptr, $PUBLIC},
	{"nextDouble", "(D)D", nullptr, $PUBLIC},
	{"nextDouble", "(DD)D", nullptr, $PUBLIC},
	{"nextExponential", "()D", nullptr, $PUBLIC},
	{"nextFloat", "()F", nullptr, $PUBLIC},
	{"nextFloat", "(F)F", nullptr, $PUBLIC},
	{"nextFloat", "(FF)F", nullptr, $PUBLIC},
	{"nextGaussian", "()D", nullptr, $PUBLIC},
	{"nextGaussian", "(DD)D", nullptr, $PUBLIC},
	{"nextInt", "()I", nullptr, $PUBLIC},
	{"nextInt", "(I)I", nullptr, $PUBLIC},
	{"nextInt", "(II)I", nullptr, $PUBLIC},
	{"nextLong", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"nextLong", "(J)J", nullptr, $PUBLIC},
	{"nextLong", "(JJ)J", nullptr, $PUBLIC},
	{"of", "(Ljava/lang/String;)Ljava/util/random/RandomGenerator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<RandomGenerator*(*)($String*)>(&RandomGenerator::of))},
	{}
};

$InnerClassInfo _RandomGenerator_InnerClassesInfo_[] = {
	{"java.util.random.RandomGenerator$ArbitrarilyJumpableGenerator", "java.util.random.RandomGenerator", "ArbitrarilyJumpableGenerator", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.random.RandomGenerator$LeapableGenerator", "java.util.random.RandomGenerator", "LeapableGenerator", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.random.RandomGenerator$JumpableGenerator", "java.util.random.RandomGenerator", "JumpableGenerator", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.random.RandomGenerator$SplittableGenerator", "java.util.random.RandomGenerator", "SplittableGenerator", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.random.RandomGenerator$StreamableGenerator", "java.util.random.RandomGenerator", "StreamableGenerator", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _RandomGenerator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.random.RandomGenerator",
	nullptr,
	nullptr,
	nullptr,
	_RandomGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_RandomGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.random.RandomGenerator$ArbitrarilyJumpableGenerator,java.util.random.RandomGenerator$LeapableGenerator,java.util.random.RandomGenerator$JumpableGenerator,java.util.random.RandomGenerator$SplittableGenerator,java.util.random.RandomGenerator$StreamableGenerator"
};

$Object* allocate$RandomGenerator($Class* clazz) {
	return $of($alloc(RandomGenerator));
}

RandomGenerator* RandomGenerator::of($String* name) {
	$Objects::requireNonNull(name);
	$load(RandomGenerator);
	return $RandomGeneratorFactory::of(name, RandomGenerator::class$);
}

RandomGenerator* RandomGenerator::getDefault() {
	return of("L32X64MixRandom"_s);
}

bool RandomGenerator::isDeprecated() {
	$load($Deprecated);
	return $of(this)->getClass()->isAnnotationPresent($Deprecated::class$);
}

$DoubleStream* RandomGenerator::doubles() {
	$useLocalCurrentObjectStackCache();
	return $nc($($DoubleStream::generate(static_cast<$DoubleSupplier*>($$new(RandomGenerator$$Lambda$nextDouble, this)))))->sequential();
}

$DoubleStream* RandomGenerator::doubles(double randomNumberOrigin, double randomNumberBound) {
	$useLocalCurrentObjectStackCache();
	$RandomSupport::checkRange(randomNumberOrigin, randomNumberBound);
	return $nc($($DoubleStream::generate(static_cast<$DoubleSupplier*>($$new(RandomGenerator$$Lambda$lambda$doubles$0$1, this, randomNumberOrigin, randomNumberBound)))))->sequential();
}

$DoubleStream* RandomGenerator::doubles(int64_t streamSize) {
	$RandomSupport::checkStreamSize(streamSize);
	return $nc($(doubles()))->limit(streamSize);
}

$DoubleStream* RandomGenerator::doubles(int64_t streamSize, double randomNumberOrigin, double randomNumberBound) {
	$RandomSupport::checkStreamSize(streamSize);
	$RandomSupport::checkRange(randomNumberOrigin, randomNumberBound);
	return $nc($(doubles(randomNumberOrigin, randomNumberBound)))->limit(streamSize);
}

$IntStream* RandomGenerator::ints() {
	$useLocalCurrentObjectStackCache();
	return $nc($($IntStream::generate(static_cast<$IntSupplier*>($$new(RandomGenerator$$Lambda$nextInt$2, this)))))->sequential();
}

$IntStream* RandomGenerator::ints(int32_t randomNumberOrigin, int32_t randomNumberBound) {
	$useLocalCurrentObjectStackCache();
	$RandomSupport::checkRange(randomNumberOrigin, randomNumberBound);
	return $nc($($IntStream::generate(static_cast<$IntSupplier*>($$new(RandomGenerator$$Lambda$lambda$ints$1$3, this, randomNumberOrigin, randomNumberBound)))))->sequential();
}

$IntStream* RandomGenerator::ints(int64_t streamSize) {
	$RandomSupport::checkStreamSize(streamSize);
	return $nc($(ints()))->limit(streamSize);
}

$IntStream* RandomGenerator::ints(int64_t streamSize, int32_t randomNumberOrigin, int32_t randomNumberBound) {
	$RandomSupport::checkStreamSize(streamSize);
	$RandomSupport::checkRange(randomNumberOrigin, randomNumberBound);
	return $nc($(ints(randomNumberOrigin, randomNumberBound)))->limit(streamSize);
}

$LongStream* RandomGenerator::longs() {
	$useLocalCurrentObjectStackCache();
	return $nc($($LongStream::generate(static_cast<$LongSupplier*>($$new(RandomGenerator$$Lambda$nextLong$4, this)))))->sequential();
}

$LongStream* RandomGenerator::longs(int64_t randomNumberOrigin, int64_t randomNumberBound) {
	$useLocalCurrentObjectStackCache();
	$RandomSupport::checkRange(randomNumberOrigin, randomNumberBound);
	return $nc($($LongStream::generate(static_cast<$LongSupplier*>($$new(RandomGenerator$$Lambda$lambda$longs$2$5, this, randomNumberOrigin, randomNumberBound)))))->sequential();
}

$LongStream* RandomGenerator::longs(int64_t streamSize) {
	$RandomSupport::checkStreamSize(streamSize);
	return $nc($(longs()))->limit(streamSize);
}

$LongStream* RandomGenerator::longs(int64_t streamSize, int64_t randomNumberOrigin, int64_t randomNumberBound) {
	$RandomSupport::checkStreamSize(streamSize);
	$RandomSupport::checkRange(randomNumberOrigin, randomNumberBound);
	return $nc($(longs(randomNumberOrigin, randomNumberBound)))->limit(streamSize);
}

bool RandomGenerator::nextBoolean() {
	return nextInt() < 0;
}

void RandomGenerator::nextBytes($bytes* bytes) {
	int32_t i = 0;
	int32_t len = $nc(bytes)->length;
	for (int32_t words = len >> 3; words-- > 0;) {
		int64_t rnd = nextLong();
		for (int32_t n = 8; n-- > 0; $usrAssign(rnd, $Byte::SIZE)) {
			bytes->set(i++, (int8_t)rnd);
		}
	}
	if (i < len) {
		for (int64_t rnd = nextLong(); i < len; $usrAssign(rnd, $Byte::SIZE)) {
			bytes->set(i++, (int8_t)rnd);
		}
	}
}

float RandomGenerator::nextFloat() {
	return ((int32_t)((uint32_t)nextInt() >> 8)) * 5.9604645E-8f;
}

float RandomGenerator::nextFloat(float bound) {
	$RandomSupport::checkBound(bound);
	return $RandomSupport::boundedNextFloat(this, bound);
}

float RandomGenerator::nextFloat(float origin, float bound) {
	$RandomSupport::checkRange(origin, bound);
	return $RandomSupport::boundedNextFloat(this, origin, bound);
}

double RandomGenerator::nextDouble() {
	return ((int64_t)((uint64_t)nextLong() >> 11)) * 1.1102230246251565E-16;
}

double RandomGenerator::nextDouble(double bound) {
	$RandomSupport::checkBound(bound);
	return $RandomSupport::boundedNextDouble(this, bound);
}

double RandomGenerator::nextDouble(double origin, double bound) {
	$RandomSupport::checkRange(origin, bound);
	return $RandomSupport::boundedNextDouble(this, origin, bound);
}

int32_t RandomGenerator::nextInt() {
	return (int32_t)((int64_t)((uint64_t)nextLong() >> 32));
}

int32_t RandomGenerator::nextInt(int32_t bound) {
	$RandomSupport::checkBound(bound);
	return $RandomSupport::boundedNextInt(this, bound);
}

int32_t RandomGenerator::nextInt(int32_t origin, int32_t bound) {
	$RandomSupport::checkRange(origin, bound);
	return $RandomSupport::boundedNextInt(this, origin, bound);
}

int64_t RandomGenerator::nextLong(int64_t bound) {
	$RandomSupport::checkBound(bound);
	return $RandomSupport::boundedNextLong(this, bound);
}

int64_t RandomGenerator::nextLong(int64_t origin, int64_t bound) {
	$RandomSupport::checkRange(origin, bound);
	return $RandomSupport::boundedNextLong(this, origin, bound);
}

double RandomGenerator::nextGaussian() {
	return $RandomSupport::computeNextGaussian(this);
}

double RandomGenerator::nextGaussian(double mean, double stddev) {
	if (stddev < 0.0) {
		$throwNew($IllegalArgumentException, "standard deviation must be non-negative"_s);
	}
	return mean + stddev * $RandomSupport::computeNextGaussian(this);
}

double RandomGenerator::nextExponential() {
	return $RandomSupport::computeNextExponential(this);
}

int64_t RandomGenerator::lambda$longs$2(int64_t randomNumberOrigin, int64_t randomNumberBound) {
	return nextLong(randomNumberOrigin, randomNumberBound);
}

int32_t RandomGenerator::lambda$ints$1(int32_t randomNumberOrigin, int32_t randomNumberBound) {
	return nextInt(randomNumberOrigin, randomNumberBound);
}

double RandomGenerator::lambda$doubles$0(double randomNumberOrigin, double randomNumberBound) {
	return nextDouble(randomNumberOrigin, randomNumberBound);
}

$Class* RandomGenerator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(RandomGenerator$$Lambda$nextDouble::classInfo$.name)) {
			return RandomGenerator$$Lambda$nextDouble::load$(name, initialize);
		}
		if (name->equals(RandomGenerator$$Lambda$lambda$doubles$0$1::classInfo$.name)) {
			return RandomGenerator$$Lambda$lambda$doubles$0$1::load$(name, initialize);
		}
		if (name->equals(RandomGenerator$$Lambda$nextInt$2::classInfo$.name)) {
			return RandomGenerator$$Lambda$nextInt$2::load$(name, initialize);
		}
		if (name->equals(RandomGenerator$$Lambda$lambda$ints$1$3::classInfo$.name)) {
			return RandomGenerator$$Lambda$lambda$ints$1$3::load$(name, initialize);
		}
		if (name->equals(RandomGenerator$$Lambda$nextLong$4::classInfo$.name)) {
			return RandomGenerator$$Lambda$nextLong$4::load$(name, initialize);
		}
		if (name->equals(RandomGenerator$$Lambda$lambda$longs$2$5::classInfo$.name)) {
			return RandomGenerator$$Lambda$lambda$longs$2$5::load$(name, initialize);
		}
	}
	$loadClass(RandomGenerator, name, initialize, &_RandomGenerator_ClassInfo_, allocate$RandomGenerator);
	return class$;
}

$Class* RandomGenerator::class$ = nullptr;

		} // random
	} // util
} // java