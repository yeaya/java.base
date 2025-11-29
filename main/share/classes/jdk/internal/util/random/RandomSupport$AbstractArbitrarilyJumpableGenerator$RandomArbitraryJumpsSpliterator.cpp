#include <jdk/internal/util/random/RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator.h>

#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/random/RandomGenerator$ArbitrarilyJumpableGenerator.h>
#include <jdk/internal/util/random/RandomSupport$AbstractArbitrarilyJumpableGenerator.h>
#include <jdk/internal/util/random/RandomSupport$RandomSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $RandomGenerator$ArbitrarilyJumpableGenerator = ::java::util::random::RandomGenerator$ArbitrarilyJumpableGenerator;
using $RandomSupport$RandomSpliterator = ::jdk::internal::util::random::RandomSupport$RandomSpliterator;

namespace jdk {
	namespace internal {
		namespace util {
			namespace random {

$FieldInfo _RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator_FieldInfo_[] = {
	{"generatingGenerator", "Ljava/util/random/RandomGenerator$ArbitrarilyJumpableGenerator;", nullptr, 0, $field(RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator, generatingGenerator)},
	{"distance", "D", nullptr, $FINAL, $field(RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator, distance)},
	{}
};

$MethodInfo _RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator_MethodInfo_[] = {
	{"*characteristics", "()I", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/random/RandomGenerator$ArbitrarilyJumpableGenerator;JJD)V", nullptr, 0, $method(static_cast<void(RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator::*)($RandomGenerator$ArbitrarilyJumpableGenerator*,int64_t,int64_t,double)>(&RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator::init$))},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/util/random/RandomGenerator$ArbitrarilyJumpableGenerator;>;)V", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-Ljava/util/random/RandomGenerator$ArbitrarilyJumpableGenerator;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<Ljava/util/random/RandomGenerator$ArbitrarilyJumpableGenerator;>;", $PUBLIC},
	{}
};

$InnerClassInfo _RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator_InnerClassesInfo_[] = {
	{"jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator", "jdk.internal.util.random.RandomSupport", "AbstractArbitrarilyJumpableGenerator", $PUBLIC | $STATIC | $ABSTRACT},
	{"jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator", "jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator", "RandomArbitraryJumpsSpliterator", $STATIC},
	{"jdk.internal.util.random.RandomSupport$RandomSpliterator", "jdk.internal.util.random.RandomSupport", "RandomSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.random.RandomGenerator$ArbitrarilyJumpableGenerator", "java.util.random.RandomGenerator", "ArbitrarilyJumpableGenerator", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator",
	"jdk.internal.util.random.RandomSupport$RandomSpliterator",
	"java.util.Spliterator",
	_RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator_FieldInfo_,
	_RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator_MethodInfo_,
	"Ljdk/internal/util/random/RandomSupport$RandomSpliterator;Ljava/util/Spliterator<Ljava/util/random/RandomGenerator$ArbitrarilyJumpableGenerator;>;",
	nullptr,
	_RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.util.random.RandomSupport"
};

$Object* allocate$RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator($Class* clazz) {
	return $of($alloc(RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator));
}

int64_t RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator::estimateSize() {
	 return this->$RandomSupport$RandomSpliterator::estimateSize();
}

int32_t RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator::characteristics() {
	 return this->$RandomSupport$RandomSpliterator::characteristics();
}

int32_t RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator::hashCode() {
	 return this->$RandomSupport$RandomSpliterator::hashCode();
}

bool RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator::equals(Object$* obj) {
	 return this->$RandomSupport$RandomSpliterator::equals(obj);
}

$Object* RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator::clone() {
	 return this->$RandomSupport$RandomSpliterator::clone();
}

$String* RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator::toString() {
	 return this->$RandomSupport$RandomSpliterator::toString();
}

void RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator::finalize() {
	this->$RandomSupport$RandomSpliterator::finalize();
}

void RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator::init$($RandomGenerator$ArbitrarilyJumpableGenerator* generatingGenerator, int64_t index, int64_t fence, double distance) {
	$RandomSupport$RandomSpliterator::init$(index, fence);
	$set(this, generatingGenerator, generatingGenerator);
	this->distance = distance;
}

$Spliterator* RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator::trySplit() {
	int64_t i = this->index;
	int64_t delta = $Long::highestOneBit((this->fence - i) - 1);
	int64_t m = i + delta;
	if (m <= i) {
		return nullptr;
	}
	this->index = m;
	return $new(RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator, $($nc(this->generatingGenerator)->copyAndJump(this->distance * (double)delta)), i, m, this->distance);
}

bool RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator::tryAdvance($Consumer* consumer) {
	$Objects::requireNonNull(consumer);
	int64_t i = this->index;
	int64_t f = this->fence;
	if (i < f) {
		consumer->accept($($nc(this->generatingGenerator)->copyAndJump(this->distance)));
		this->index = i + 1;
		return true;
	}
	return false;
}

void RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator::forEachRemaining($Consumer* consumer) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(consumer);
	int64_t i = this->index;
	int64_t f = this->fence;
	if (i < f) {
		this->index = f;
		$var($RandomGenerator$ArbitrarilyJumpableGenerator, r, this->generatingGenerator);
		do {
			consumer->accept($($nc(r)->copyAndJump(this->distance)));
		} while (++i < f);
	}
}

RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator::RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator() {
}

$Class* RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator::load$($String* name, bool initialize) {
	$loadClass(RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator, name, initialize, &_RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator_ClassInfo_, allocate$RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator);
	return class$;
}

$Class* RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomArbitraryJumpsSpliterator::class$ = nullptr;

			} // random
		} // util
	} // internal
} // jdk