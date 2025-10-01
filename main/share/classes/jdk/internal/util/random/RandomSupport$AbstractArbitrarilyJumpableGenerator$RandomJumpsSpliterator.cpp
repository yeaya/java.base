#include <jdk/internal/util/random/RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $RandomSupport$AbstractArbitrarilyJumpableGenerator = ::jdk::internal::util::random::RandomSupport$AbstractArbitrarilyJumpableGenerator;
using $RandomSupport$RandomSpliterator = ::jdk::internal::util::random::RandomSupport$RandomSpliterator;

namespace jdk {
	namespace internal {
		namespace util {
			namespace random {

$FieldInfo _RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator_FieldInfo_[] = {
	{"generatingGenerator", "Ljava/util/random/RandomGenerator$ArbitrarilyJumpableGenerator;", nullptr, 0, $field(RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator, generatingGenerator)},
	{"distance", "D", nullptr, $FINAL, $field(RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator, distance)},
	{}
};

$MethodInfo _RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator_MethodInfo_[] = {
	{"*characteristics", "()I", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/random/RandomGenerator$ArbitrarilyJumpableGenerator;JJD)V", nullptr, 0, $method(static_cast<void(RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator::*)($RandomGenerator$ArbitrarilyJumpableGenerator*,int64_t,int64_t,double)>(&RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator::init$))},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/util/random/RandomGenerator;>;)V", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-Ljava/util/random/RandomGenerator;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<Ljava/util/random/RandomGenerator;>;", $PUBLIC},
	{}
};

$InnerClassInfo _RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator_InnerClassesInfo_[] = {
	{"jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator", "jdk.internal.util.random.RandomSupport", "AbstractArbitrarilyJumpableGenerator", $PUBLIC | $STATIC | $ABSTRACT},
	{"jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator", "jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator", "RandomJumpsSpliterator", $STATIC},
	{"jdk.internal.util.random.RandomSupport$RandomSpliterator", "jdk.internal.util.random.RandomSupport", "RandomSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator",
	"jdk.internal.util.random.RandomSupport$RandomSpliterator",
	"java.util.Spliterator",
	_RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator_FieldInfo_,
	_RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator_MethodInfo_,
	"Ljdk/internal/util/random/RandomSupport$RandomSpliterator;Ljava/util/Spliterator<Ljava/util/random/RandomGenerator;>;",
	nullptr,
	_RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.util.random.RandomSupport"
};

$Object* allocate$RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator($Class* clazz) {
	return $of($alloc(RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator));
}

int64_t RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator::estimateSize() {
	 return this->$RandomSupport$RandomSpliterator::estimateSize();
}

int32_t RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator::characteristics() {
	 return this->$RandomSupport$RandomSpliterator::characteristics();
}

int32_t RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator::hashCode() {
	 return this->$RandomSupport$RandomSpliterator::hashCode();
}

bool RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator::equals(Object$* obj) {
	 return this->$RandomSupport$RandomSpliterator::equals(obj);
}

$Object* RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator::clone() {
	 return this->$RandomSupport$RandomSpliterator::clone();
}

$String* RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator::toString() {
	 return this->$RandomSupport$RandomSpliterator::toString();
}

void RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator::finalize() {
	this->$RandomSupport$RandomSpliterator::finalize();
}

void RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator::init$($RandomGenerator$ArbitrarilyJumpableGenerator* generatingGenerator, int64_t index, int64_t fence, double distance) {
	$RandomSupport$RandomSpliterator::init$(index, fence);
	$set(this, generatingGenerator, generatingGenerator);
	this->distance = distance;
}

$Spliterator* RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator::trySplit() {
	int64_t i = this->index;
	int64_t delta = $Long::highestOneBit((this->fence - i) - 1);
	int64_t m = i + delta;
	if (m <= i) {
		return nullptr;
	}
	this->index = m;
	$var($RandomGenerator$ArbitrarilyJumpableGenerator, r, this->generatingGenerator);
	return $new(RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator, $($nc(r)->copyAndJump(this->distance * (double)delta)), i, m, this->distance);
}

bool RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator::tryAdvance($Consumer* consumer) {
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

void RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator::forEachRemaining($Consumer* consumer) {
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

RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator::RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator() {
}

$Class* RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator::load$($String* name, bool initialize) {
	$loadClass(RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator, name, initialize, &_RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator_ClassInfo_, allocate$RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator);
	return class$;
}

$Class* RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomJumpsSpliterator::class$ = nullptr;

			} // random
		} // util
	} // internal
} // jdk