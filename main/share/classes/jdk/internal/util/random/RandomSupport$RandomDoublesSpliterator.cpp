#include <jdk/internal/util/random/RandomSupport$RandomDoublesSpliterator.h>

#include <java/util/Objects.h>
#include <java/util/Spliterator$OfDouble.h>
#include <java/util/function/DoubleConsumer.h>
#include <java/util/random/RandomGenerator.h>
#include <jdk/internal/util/random/RandomSupport$RandomSpliterator.h>
#include <jdk/internal/util/random/RandomSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Spliterator$OfDouble = ::java::util::Spliterator$OfDouble;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;
using $RandomGenerator = ::java::util::random::RandomGenerator;
using $RandomSupport = ::jdk::internal::util::random::RandomSupport;
using $RandomSupport$RandomSpliterator = ::jdk::internal::util::random::RandomSupport$RandomSpliterator;

namespace jdk {
	namespace internal {
		namespace util {
			namespace random {

$FieldInfo _RandomSupport$RandomDoublesSpliterator_FieldInfo_[] = {
	{"generatingGenerator", "Ljava/util/random/RandomGenerator;", nullptr, $FINAL, $field(RandomSupport$RandomDoublesSpliterator, generatingGenerator)},
	{"origin", "D", nullptr, $FINAL, $field(RandomSupport$RandomDoublesSpliterator, origin)},
	{"bound", "D", nullptr, $FINAL, $field(RandomSupport$RandomDoublesSpliterator, bound)},
	{}
};

$MethodInfo _RandomSupport$RandomDoublesSpliterator_MethodInfo_[] = {
	{"*characteristics", "()I", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/random/RandomGenerator;JJDD)V", nullptr, $PUBLIC, $method(static_cast<void(RandomSupport$RandomDoublesSpliterator::*)($RandomGenerator*,int64_t,int64_t,double,double)>(&RandomSupport$RandomDoublesSpliterator::init$))},
	{"forEachRemaining", "(Ljava/util/function/DoubleConsumer;)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/DoubleConsumer;)Z", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"trySplit", "()Ljava/util/Spliterator$OfDouble;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RandomSupport$RandomDoublesSpliterator_InnerClassesInfo_[] = {
	{"jdk.internal.util.random.RandomSupport$RandomDoublesSpliterator", "jdk.internal.util.random.RandomSupport", "RandomDoublesSpliterator", $PUBLIC | $STATIC},
	{"jdk.internal.util.random.RandomSupport$RandomSpliterator", "jdk.internal.util.random.RandomSupport", "RandomSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.Spliterator$OfDouble", "java.util.Spliterator", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _RandomSupport$RandomDoublesSpliterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.util.random.RandomSupport$RandomDoublesSpliterator",
	"jdk.internal.util.random.RandomSupport$RandomSpliterator",
	"java.util.Spliterator$OfDouble",
	_RandomSupport$RandomDoublesSpliterator_FieldInfo_,
	_RandomSupport$RandomDoublesSpliterator_MethodInfo_,
	nullptr,
	nullptr,
	_RandomSupport$RandomDoublesSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.util.random.RandomSupport"
};

$Object* allocate$RandomSupport$RandomDoublesSpliterator($Class* clazz) {
	return $of($alloc(RandomSupport$RandomDoublesSpliterator));
}

int64_t RandomSupport$RandomDoublesSpliterator::estimateSize() {
	 return this->$RandomSupport$RandomSpliterator::estimateSize();
}

int32_t RandomSupport$RandomDoublesSpliterator::characteristics() {
	 return this->$RandomSupport$RandomSpliterator::characteristics();
}

int32_t RandomSupport$RandomDoublesSpliterator::hashCode() {
	 return this->$RandomSupport$RandomSpliterator::hashCode();
}

bool RandomSupport$RandomDoublesSpliterator::equals(Object$* obj) {
	 return this->$RandomSupport$RandomSpliterator::equals(obj);
}

$Object* RandomSupport$RandomDoublesSpliterator::clone() {
	 return this->$RandomSupport$RandomSpliterator::clone();
}

$String* RandomSupport$RandomDoublesSpliterator::toString() {
	 return this->$RandomSupport$RandomSpliterator::toString();
}

void RandomSupport$RandomDoublesSpliterator::finalize() {
	this->$RandomSupport$RandomSpliterator::finalize();
}

void RandomSupport$RandomDoublesSpliterator::init$($RandomGenerator* generatingGenerator, int64_t index, int64_t fence, double origin, double bound) {
	$RandomSupport$RandomSpliterator::init$(index, fence);
	$set(this, generatingGenerator, generatingGenerator);
	this->origin = origin;
	this->bound = bound;
}

$Spliterator$OfDouble* RandomSupport$RandomDoublesSpliterator::trySplit() {
	int64_t i = this->index;
	int64_t m = (int64_t)((uint64_t)(i + this->fence) >> 1);
	if (m <= i) {
		return nullptr;
	}
	this->index = m;
	return $new(RandomSupport$RandomDoublesSpliterator, this->generatingGenerator, i, m, this->origin, this->bound);
}

bool RandomSupport$RandomDoublesSpliterator::tryAdvance($DoubleConsumer* consumer) {
	$Objects::requireNonNull(consumer);
	int64_t i = this->index;
	int64_t f = this->fence;
	if (i < f) {
		consumer->accept($RandomSupport::boundedNextDouble(this->generatingGenerator, this->origin, this->bound));
		this->index = i + 1;
		return true;
	} else {
		return false;
	}
}

void RandomSupport$RandomDoublesSpliterator::forEachRemaining($DoubleConsumer* consumer) {
	$Objects::requireNonNull(consumer);
	int64_t i = this->index;
	int64_t f = this->fence;
	if (i < f) {
		this->index = f;
		$var($RandomGenerator, r, this->generatingGenerator);
		double o = this->origin;
		double b = this->bound;
		do {
			consumer->accept($RandomSupport::boundedNextDouble(r, o, b));
		} while (++i < f);
	}
}

void RandomSupport$RandomDoublesSpliterator::forEachRemaining(Object$* consumer) {
	this->forEachRemaining($cast($DoubleConsumer, consumer));
}

bool RandomSupport$RandomDoublesSpliterator::tryAdvance(Object$* consumer) {
	return this->tryAdvance($cast($DoubleConsumer, consumer));
}

RandomSupport$RandomDoublesSpliterator::RandomSupport$RandomDoublesSpliterator() {
}

$Class* RandomSupport$RandomDoublesSpliterator::load$($String* name, bool initialize) {
	$loadClass(RandomSupport$RandomDoublesSpliterator, name, initialize, &_RandomSupport$RandomDoublesSpliterator_ClassInfo_, allocate$RandomSupport$RandomDoublesSpliterator);
	return class$;
}

$Class* RandomSupport$RandomDoublesSpliterator::class$ = nullptr;

			} // random
		} // util
	} // internal
} // jdk