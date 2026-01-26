#include <java/util/concurrent/ThreadLocalRandom.h>

#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/security/AccessControlContext.h>
#include <java/security/SecureRandom.h>
#include <java/util/Random.h>
#include <java/util/concurrent/ThreadLocalRandom$ThreadLocalRandomProxy.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <java/util/random/RandomGenerator.h>
#include <java/util/stream/DoubleStream.h>
#include <java/util/stream/IntStream.h>
#include <java/util/stream/LongStream.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/misc/VM.h>
#include <jdk/internal/util/random/RandomSupport$AbstractSpliteratorGenerator.h>
#include <jdk/internal/util/random/RandomSupport.h>
#include <jcpp.h>

#undef BAD_BOUND
#undef BAD_RANGE
#undef BAD_SIZE
#undef GOLDEN_GAMMA
#undef INHERITABLETHREADLOCALS
#undef INHERITEDACCESSCONTROLCONTEXT
#undef PROBE
#undef PROBE_INCREMENT
#undef PROXY
#undef SECONDARY
#undef SEED
#undef SEEDER_INCREMENT
#undef THREADLOCALS
#undef TYPE
#undef U

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AccessControlContext = ::java::security::AccessControlContext;
using $SecureRandom = ::java::security::SecureRandom;
using $Random = ::java::util::Random;
using $ThreadLocalRandom$ThreadLocalRandomProxy = ::java::util::concurrent::ThreadLocalRandom$ThreadLocalRandomProxy;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;
using $RandomGenerator = ::java::util::random::RandomGenerator;
using $DoubleStream = ::java::util::stream::DoubleStream;
using $IntStream = ::java::util::stream::IntStream;
using $LongStream = ::java::util::stream::LongStream;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $VM = ::jdk::internal::misc::VM;
using $RandomSupport = ::jdk::internal::util::random::RandomSupport;
using $RandomSupport$AbstractSpliteratorGenerator = ::jdk::internal::util::random::RandomSupport$AbstractSpliteratorGenerator;

namespace java {
	namespace util {
		namespace concurrent {

$NamedAttribute ThreadLocalRandom_Attribute_var$0[] = {
	{"name", 's', "ThreadLocalRandom"},
	{"i", 'I', "64"},
	{"j", 'I', "0"},
	{"k", 'I', "0"},
	{"equidistribution", 'I', "1"},
	{}
};

$CompoundAttribute _ThreadLocalRandom_Annotations_[] = {
	{"Ljdk/internal/util/random/RandomSupport$RandomGeneratorProperties;", ThreadLocalRandom_Attribute_var$0},
	{}
};

$FieldInfo _ThreadLocalRandom_FieldInfo_[] = {
	{"initialized", "Z", nullptr, 0, $field(ThreadLocalRandom, initialized)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ThreadLocalRandom, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadLocalRandom, serialPersistentFields)},
	{"GOLDEN_GAMMA", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ThreadLocalRandom, GOLDEN_GAMMA)},
	{"PROBE_INCREMENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ThreadLocalRandom, PROBE_INCREMENT)},
	{"SEEDER_INCREMENT", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ThreadLocalRandom, SEEDER_INCREMENT)},
	{"BAD_BOUND", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ThreadLocalRandom, BAD_BOUND)},
	{"BAD_RANGE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ThreadLocalRandom, BAD_RANGE)},
	{"BAD_SIZE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ThreadLocalRandom, BAD_SIZE)},
	{"U", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadLocalRandom, U)},
	{"SEED", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadLocalRandom, SEED)},
	{"PROBE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadLocalRandom, PROBE)},
	{"SECONDARY", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadLocalRandom, SECONDARY)},
	{"THREADLOCALS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadLocalRandom, THREADLOCALS)},
	{"INHERITABLETHREADLOCALS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadLocalRandom, INHERITABLETHREADLOCALS)},
	{"INHERITEDACCESSCONTROLCONTEXT", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadLocalRandom, INHERITEDACCESSCONTROLCONTEXT)},
	{"probeGenerator", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadLocalRandom, probeGenerator)},
	{"instance", "Ljava/util/concurrent/ThreadLocalRandom;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadLocalRandom, instance)},
	{"seeder", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadLocalRandom, seeder)},
	{}
};

$MethodInfo _ThreadLocalRandom_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ThreadLocalRandom, init$, void)},
	{"advanceProbe", "(I)I", nullptr, $STATIC | $FINAL, $staticMethod(ThreadLocalRandom, advanceProbe, int32_t, int32_t)},
	{"current", "()Ljava/util/concurrent/ThreadLocalRandom;", nullptr, $PUBLIC | $STATIC, $staticMethod(ThreadLocalRandom, current, ThreadLocalRandom*)},
	{"doubles", "(J)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom, doubles, $DoubleStream*, int64_t)},
	{"doubles", "()Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom, doubles, $DoubleStream*)},
	{"doubles", "(JDD)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom, doubles, $DoubleStream*, int64_t, double, double)},
	{"doubles", "(DD)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom, doubles, $DoubleStream*, double, double)},
	{"eraseThreadLocals", "(Ljava/lang/Thread;)V", nullptr, $STATIC | $FINAL, $staticMethod(ThreadLocalRandom, eraseThreadLocals, void, $Thread*)},
	{"getProbe", "()I", nullptr, $STATIC | $FINAL, $staticMethod(ThreadLocalRandom, getProbe, int32_t)},
	{"ints", "(J)Ljava/util/stream/IntStream;", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom, ints, $IntStream*, int64_t)},
	{"ints", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom, ints, $IntStream*)},
	{"ints", "(JII)Ljava/util/stream/IntStream;", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom, ints, $IntStream*, int64_t, int32_t, int32_t)},
	{"ints", "(II)Ljava/util/stream/IntStream;", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom, ints, $IntStream*, int32_t, int32_t)},
	{"localInit", "()V", nullptr, $STATIC | $FINAL, $staticMethod(ThreadLocalRandom, localInit, void)},
	{"longs", "(J)Ljava/util/stream/LongStream;", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom, longs, $LongStream*, int64_t)},
	{"longs", "()Ljava/util/stream/LongStream;", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom, longs, $LongStream*)},
	{"longs", "(JJJ)Ljava/util/stream/LongStream;", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom, longs, $LongStream*, int64_t, int64_t, int64_t)},
	{"longs", "(JJ)Ljava/util/stream/LongStream;", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom, longs, $LongStream*, int64_t, int64_t)},
	{"mix32", "(J)I", nullptr, $PRIVATE | $STATIC, $staticMethod(ThreadLocalRandom, mix32, int32_t, int64_t)},
	{"next", "(I)I", nullptr, $PROTECTED, $virtualMethod(ThreadLocalRandom, next, int32_t, int32_t)},
	{"nextBoolean", "()Z", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom, nextBoolean, bool)},
	{"nextDouble", "()D", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom, nextDouble, double)},
	{"nextDouble", "(D)D", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom, nextDouble, double, double)},
	{"nextDouble", "(DD)D", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom, nextDouble, double, double, double)},
	{"nextFloat", "()F", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom, nextFloat, float)},
	{"nextFloat", "(F)F", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom, nextFloat, float, float)},
	{"nextFloat", "(FF)F", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom, nextFloat, float, float, float)},
	{"nextInt", "()I", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom, nextInt, int32_t)},
	{"nextInt", "(I)I", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom, nextInt, int32_t, int32_t)},
	{"nextInt", "(II)I", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom, nextInt, int32_t, int32_t, int32_t)},
	{"nextLong", "()J", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom, nextLong, int64_t)},
	{"nextLong", "(J)J", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom, nextLong, int64_t, int64_t)},
	{"nextLong", "(JJ)J", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom, nextLong, int64_t, int64_t, int64_t)},
	{"nextSecondarySeed", "()I", nullptr, $STATIC | $FINAL, $staticMethod(ThreadLocalRandom, nextSecondarySeed, int32_t)},
	{"nextSeed", "()J", nullptr, $FINAL, $method(ThreadLocalRandom, nextSeed, int64_t)},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(ThreadLocalRandom, readResolve, $Object*)},
	{"setInheritedAccessControlContext", "(Ljava/lang/Thread;Ljava/security/AccessControlContext;)V", nullptr, $STATIC | $FINAL, $staticMethod(ThreadLocalRandom, setInheritedAccessControlContext, void, $Thread*, $AccessControlContext*)},
	{"setSeed", "(J)V", nullptr, $PUBLIC, $virtualMethod(ThreadLocalRandom, setSeed, void, int64_t)},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(ThreadLocalRandom, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
	{}
};

$InnerClassInfo _ThreadLocalRandom_InnerClassesInfo_[] = {
	{"java.util.concurrent.ThreadLocalRandom$ThreadLocalRandomProxy", "java.util.concurrent.ThreadLocalRandom", "ThreadLocalRandomProxy", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ThreadLocalRandom_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.ThreadLocalRandom",
	"java.util.Random",
	nullptr,
	_ThreadLocalRandom_FieldInfo_,
	_ThreadLocalRandom_MethodInfo_,
	nullptr,
	nullptr,
	_ThreadLocalRandom_InnerClassesInfo_,
	_ThreadLocalRandom_Annotations_,
	nullptr,
	"java.util.concurrent.ThreadLocalRandom$ThreadLocalRandomProxy"
};

$Object* allocate$ThreadLocalRandom($Class* clazz) {
	return $of($alloc(ThreadLocalRandom));
}

$ObjectStreamFieldArray* ThreadLocalRandom::serialPersistentFields = nullptr;
$String* ThreadLocalRandom::BAD_BOUND = nullptr;
$String* ThreadLocalRandom::BAD_RANGE = nullptr;
$String* ThreadLocalRandom::BAD_SIZE = nullptr;
$Unsafe* ThreadLocalRandom::U = nullptr;
int64_t ThreadLocalRandom::SEED = 0;
int64_t ThreadLocalRandom::PROBE = 0;
int64_t ThreadLocalRandom::SECONDARY = 0;
int64_t ThreadLocalRandom::THREADLOCALS = 0;
int64_t ThreadLocalRandom::INHERITABLETHREADLOCALS = 0;
int64_t ThreadLocalRandom::INHERITEDACCESSCONTROLCONTEXT = 0;
$AtomicInteger* ThreadLocalRandom::probeGenerator = nullptr;
ThreadLocalRandom* ThreadLocalRandom::instance = nullptr;
$AtomicLong* ThreadLocalRandom::seeder = nullptr;

int32_t ThreadLocalRandom::mix32(int64_t z) {
	$init(ThreadLocalRandom);
	z = (z ^ ((int64_t)((uint64_t)z >> 33))) * (int64_t)0xFF51AFD7ED558CCD;
	return (int32_t)((int64_t)((uint64_t)((z ^ ((int64_t)((uint64_t)z >> 33))) * (int64_t)0xC4CEB9FE1A85EC53) >> 32));
}

void ThreadLocalRandom::init$() {
	$Random::init$();
	this->initialized = true;
}

void ThreadLocalRandom::localInit() {
	$init(ThreadLocalRandom);
	int32_t p = $nc(ThreadLocalRandom::probeGenerator)->addAndGet(ThreadLocalRandom::PROBE_INCREMENT);
	int32_t probe = (p == 0) ? 1 : p;
	int64_t seed = $RandomSupport::mixMurmur64($nc(ThreadLocalRandom::seeder)->getAndAdd(ThreadLocalRandom::SEEDER_INCREMENT));
	$var($Thread, t, $Thread::currentThread());
	$nc(ThreadLocalRandom::U)->putLong(t, ThreadLocalRandom::SEED, seed);
	$nc(ThreadLocalRandom::U)->putInt(t, ThreadLocalRandom::PROBE, probe);
}

ThreadLocalRandom* ThreadLocalRandom::current() {
	$init(ThreadLocalRandom);
	if ($nc(ThreadLocalRandom::U)->getInt($($Thread::currentThread()), ThreadLocalRandom::PROBE) == 0) {
		localInit();
	}
	return ThreadLocalRandom::instance;
}

void ThreadLocalRandom::setSeed(int64_t seed) {
	if (this->initialized) {
		$throwNew($UnsupportedOperationException);
	}
}

int64_t ThreadLocalRandom::nextSeed() {
	$useLocalCurrentObjectStackCache();
	$var($Thread, t, nullptr);
	int64_t r = 0;
	$var($Object, var$0, $of(($assign(t, $Thread::currentThread()))));
	int64_t var$1 = ThreadLocalRandom::SEED;
	int64_t var$2 = $nc(ThreadLocalRandom::U)->getLong(t, ThreadLocalRandom::SEED);
	$nc(ThreadLocalRandom::U)->putLong(var$0, var$1, r = var$2 + (t->getId() << 1) + ThreadLocalRandom::GOLDEN_GAMMA);
	return r;
}

int32_t ThreadLocalRandom::next(int32_t bits) {
	return $usr(nextInt(), 32 - bits);
}

int32_t ThreadLocalRandom::getProbe() {
	$init(ThreadLocalRandom);
	return $nc(ThreadLocalRandom::U)->getInt($($Thread::currentThread()), ThreadLocalRandom::PROBE);
}

int32_t ThreadLocalRandom::advanceProbe(int32_t probe) {
	$init(ThreadLocalRandom);
	probe ^= probe << 13;
	probe ^= (int32_t)((uint32_t)probe >> 17);
	probe ^= probe << 5;
	$nc(ThreadLocalRandom::U)->putInt($($Thread::currentThread()), ThreadLocalRandom::PROBE, probe);
	return probe;
}

int32_t ThreadLocalRandom::nextSecondarySeed() {
	$init(ThreadLocalRandom);
	int32_t r = 0;
	$var($Thread, t, $Thread::currentThread());
	if ((r = $nc(ThreadLocalRandom::U)->getInt(t, ThreadLocalRandom::SECONDARY)) != 0) {
		r ^= r << 13;
		r ^= (int32_t)((uint32_t)r >> 17);
		r ^= r << 5;
	} else {
		if ((r = mix32($nc(ThreadLocalRandom::seeder)->getAndAdd(ThreadLocalRandom::SEEDER_INCREMENT))) == 0) {
			r = 1;
		}
	}
	$nc(ThreadLocalRandom::U)->putInt(t, ThreadLocalRandom::SECONDARY, r);
	return r;
}

void ThreadLocalRandom::eraseThreadLocals($Thread* thread) {
	$init(ThreadLocalRandom);
	$nc(ThreadLocalRandom::U)->putReference(thread, ThreadLocalRandom::THREADLOCALS, nullptr);
	$nc(ThreadLocalRandom::U)->putReference(thread, ThreadLocalRandom::INHERITABLETHREADLOCALS, nullptr);
}

void ThreadLocalRandom::setInheritedAccessControlContext($Thread* thread, $AccessControlContext* acc) {
	$init(ThreadLocalRandom);
	$nc(ThreadLocalRandom::U)->putReferenceRelease(thread, ThreadLocalRandom::INHERITEDACCESSCONTROLCONTEXT, acc);
}

void ThreadLocalRandom::writeObject($ObjectOutputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectOutputStream$PutField, fields, $nc(s)->putFields());
	$nc(fields)->put("rnd"_s, $nc(ThreadLocalRandom::U)->getLong($($Thread::currentThread()), ThreadLocalRandom::SEED));
	fields->put("initialized"_s, true);
	s->writeFields();
}

$Object* ThreadLocalRandom::readResolve() {
	return $of(current());
}

bool ThreadLocalRandom::nextBoolean() {
	return $Random::nextBoolean();
}

int32_t ThreadLocalRandom::nextInt() {
	return mix32(nextSeed());
}

int32_t ThreadLocalRandom::nextInt(int32_t bound) {
	return $Random::nextInt(bound);
}

int32_t ThreadLocalRandom::nextInt(int32_t origin, int32_t bound) {
	return $Random::nextInt(origin, bound);
}

int64_t ThreadLocalRandom::nextLong() {
	return $RandomSupport::mixMurmur64(nextSeed());
}

int64_t ThreadLocalRandom::nextLong(int64_t bound) {
	return $Random::nextLong(bound);
}

int64_t ThreadLocalRandom::nextLong(int64_t origin, int64_t bound) {
	return $Random::nextLong(origin, bound);
}

float ThreadLocalRandom::nextFloat() {
	return $Random::nextFloat();
}

float ThreadLocalRandom::nextFloat(float bound) {
	return $Random::nextFloat(bound);
}

float ThreadLocalRandom::nextFloat(float origin, float bound) {
	return $Random::nextFloat(origin, bound);
}

double ThreadLocalRandom::nextDouble() {
	return $Random::nextDouble();
}

double ThreadLocalRandom::nextDouble(double bound) {
	return $Random::nextDouble(bound);
}

double ThreadLocalRandom::nextDouble(double origin, double bound) {
	return $Random::nextDouble(origin, bound);
}

$IntStream* ThreadLocalRandom::ints(int64_t streamSize) {
	$init($ThreadLocalRandom$ThreadLocalRandomProxy);
	return $RandomSupport$AbstractSpliteratorGenerator::ints(static_cast<$RandomGenerator*>($ThreadLocalRandom$ThreadLocalRandomProxy::PROXY), streamSize);
}

$IntStream* ThreadLocalRandom::ints() {
	$init($ThreadLocalRandom$ThreadLocalRandomProxy);
	return $RandomSupport$AbstractSpliteratorGenerator::ints(static_cast<$RandomGenerator*>($ThreadLocalRandom$ThreadLocalRandomProxy::PROXY));
}

$IntStream* ThreadLocalRandom::ints(int64_t streamSize, int32_t randomNumberOrigin, int32_t randomNumberBound) {
	$init($ThreadLocalRandom$ThreadLocalRandomProxy);
	return $RandomSupport$AbstractSpliteratorGenerator::ints($ThreadLocalRandom$ThreadLocalRandomProxy::PROXY, streamSize, randomNumberOrigin, randomNumberBound);
}

$IntStream* ThreadLocalRandom::ints(int32_t randomNumberOrigin, int32_t randomNumberBound) {
	$init($ThreadLocalRandom$ThreadLocalRandomProxy);
	return $RandomSupport$AbstractSpliteratorGenerator::ints(static_cast<$RandomGenerator*>($ThreadLocalRandom$ThreadLocalRandomProxy::PROXY), randomNumberOrigin, randomNumberBound);
}

$LongStream* ThreadLocalRandom::longs(int64_t streamSize) {
	$init($ThreadLocalRandom$ThreadLocalRandomProxy);
	return $RandomSupport$AbstractSpliteratorGenerator::longs(static_cast<$RandomGenerator*>($ThreadLocalRandom$ThreadLocalRandomProxy::PROXY), streamSize);
}

$LongStream* ThreadLocalRandom::longs() {
	$init($ThreadLocalRandom$ThreadLocalRandomProxy);
	return $RandomSupport$AbstractSpliteratorGenerator::longs(static_cast<$RandomGenerator*>($ThreadLocalRandom$ThreadLocalRandomProxy::PROXY));
}

$LongStream* ThreadLocalRandom::longs(int64_t streamSize, int64_t randomNumberOrigin, int64_t randomNumberBound) {
	$init($ThreadLocalRandom$ThreadLocalRandomProxy);
	return $RandomSupport$AbstractSpliteratorGenerator::longs($ThreadLocalRandom$ThreadLocalRandomProxy::PROXY, streamSize, randomNumberOrigin, randomNumberBound);
}

$LongStream* ThreadLocalRandom::longs(int64_t randomNumberOrigin, int64_t randomNumberBound) {
	$init($ThreadLocalRandom$ThreadLocalRandomProxy);
	return $RandomSupport$AbstractSpliteratorGenerator::longs(static_cast<$RandomGenerator*>($ThreadLocalRandom$ThreadLocalRandomProxy::PROXY), randomNumberOrigin, randomNumberBound);
}

$DoubleStream* ThreadLocalRandom::doubles(int64_t streamSize) {
	$init($ThreadLocalRandom$ThreadLocalRandomProxy);
	return $RandomSupport$AbstractSpliteratorGenerator::doubles(static_cast<$RandomGenerator*>($ThreadLocalRandom$ThreadLocalRandomProxy::PROXY), streamSize);
}

$DoubleStream* ThreadLocalRandom::doubles() {
	$init($ThreadLocalRandom$ThreadLocalRandomProxy);
	return $RandomSupport$AbstractSpliteratorGenerator::doubles(static_cast<$RandomGenerator*>($ThreadLocalRandom$ThreadLocalRandomProxy::PROXY));
}

$DoubleStream* ThreadLocalRandom::doubles(int64_t streamSize, double randomNumberOrigin, double randomNumberBound) {
	$init($ThreadLocalRandom$ThreadLocalRandomProxy);
	return $RandomSupport$AbstractSpliteratorGenerator::doubles($ThreadLocalRandom$ThreadLocalRandomProxy::PROXY, streamSize, randomNumberOrigin, randomNumberBound);
}

$DoubleStream* ThreadLocalRandom::doubles(double randomNumberOrigin, double randomNumberBound) {
	$init($ThreadLocalRandom$ThreadLocalRandomProxy);
	return $RandomSupport$AbstractSpliteratorGenerator::doubles(static_cast<$RandomGenerator*>($ThreadLocalRandom$ThreadLocalRandomProxy::PROXY), randomNumberOrigin, randomNumberBound);
}

void clinit$ThreadLocalRandom($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(ThreadLocalRandom::BAD_BOUND, "bound must be positive"_s);
	$assignStatic(ThreadLocalRandom::BAD_RANGE, "bound must be greater than origin"_s);
	$assignStatic(ThreadLocalRandom::BAD_SIZE, "size must be non-negative"_s);
	$init($Long);
	$init($Boolean);
	$assignStatic(ThreadLocalRandom::serialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "rnd"_s, $Long::TYPE),
		$$new($ObjectStreamField, "initialized"_s, $Boolean::TYPE)
	}));
	$assignStatic(ThreadLocalRandom::U, $Unsafe::getUnsafe());
	ThreadLocalRandom::SEED = $nc(ThreadLocalRandom::U)->objectFieldOffset($Thread::class$, "threadLocalRandomSeed"_s);
	ThreadLocalRandom::PROBE = $nc(ThreadLocalRandom::U)->objectFieldOffset($Thread::class$, "threadLocalRandomProbe"_s);
	ThreadLocalRandom::SECONDARY = $nc(ThreadLocalRandom::U)->objectFieldOffset($Thread::class$, "threadLocalRandomSecondarySeed"_s);
	ThreadLocalRandom::THREADLOCALS = $nc(ThreadLocalRandom::U)->objectFieldOffset($Thread::class$, "threadLocals"_s);
	ThreadLocalRandom::INHERITABLETHREADLOCALS = $nc(ThreadLocalRandom::U)->objectFieldOffset($Thread::class$, "inheritableThreadLocals"_s);
	ThreadLocalRandom::INHERITEDACCESSCONTROLCONTEXT = $nc(ThreadLocalRandom::U)->objectFieldOffset($Thread::class$, "inheritedAccessControlContext"_s);
	$assignStatic(ThreadLocalRandom::probeGenerator, $new($AtomicInteger));
	$assignStatic(ThreadLocalRandom::instance, $new(ThreadLocalRandom));
	int64_t var$0 = $RandomSupport::mixMurmur64($System::currentTimeMillis());
	$assignStatic(ThreadLocalRandom::seeder, $new($AtomicLong, var$0 ^ $RandomSupport::mixMurmur64($System::nanoTime())));
	{
		$var($String, sec, $VM::getSavedProperty("java.util.secureRandomSeed"_s));
		if ($Boolean::parseBoolean(sec)) {
			$var($bytes, seedBytes, $SecureRandom::getSeed(8));
			int64_t s = (int64_t)((int64_t)$nc(seedBytes)->get(0) & (uint64_t)(int64_t)255);
			for (int32_t i = 1; i < 8; ++i) {
				s = (s << 8) | ((int64_t)((int64_t)seedBytes->get(i) & (uint64_t)(int64_t)255));
			}
			$nc(ThreadLocalRandom::seeder)->set(s);
		}
	}
}

ThreadLocalRandom::ThreadLocalRandom() {
}

$Class* ThreadLocalRandom::load$($String* name, bool initialize) {
	$loadClass(ThreadLocalRandom, name, initialize, &_ThreadLocalRandom_ClassInfo_, clinit$ThreadLocalRandom, allocate$ThreadLocalRandom);
	return class$;
}

$Class* ThreadLocalRandom::class$ = nullptr;

		} // concurrent
	} // util
} // java