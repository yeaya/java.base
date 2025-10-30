#include <jdk/internal/util/random/RandomSupport$RandomIntsSpliterator.h>

#include <java/util/Objects.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/random/RandomGenerator.h>
#include <jdk/internal/util/random/RandomSupport$RandomSpliterator.h>
#include <jdk/internal/util/random/RandomSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $IntConsumer = ::java::util::function::IntConsumer;
using $RandomGenerator = ::java::util::random::RandomGenerator;
using $RandomSupport = ::jdk::internal::util::random::RandomSupport;
using $RandomSupport$RandomSpliterator = ::jdk::internal::util::random::RandomSupport$RandomSpliterator;

namespace jdk {
	namespace internal {
		namespace util {
			namespace random {

$FieldInfo _RandomSupport$RandomIntsSpliterator_FieldInfo_[] = {
	{"generatingGenerator", "Ljava/util/random/RandomGenerator;", nullptr, $FINAL, $field(RandomSupport$RandomIntsSpliterator, generatingGenerator)},
	{"origin", "I", nullptr, $FINAL, $field(RandomSupport$RandomIntsSpliterator, origin)},
	{"bound", "I", nullptr, $FINAL, $field(RandomSupport$RandomIntsSpliterator, bound)},
	{}
};

$MethodInfo _RandomSupport$RandomIntsSpliterator_MethodInfo_[] = {
	{"*characteristics", "()I", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/random/RandomGenerator;JJII)V", nullptr, $PUBLIC, $method(static_cast<void(RandomSupport$RandomIntsSpliterator::*)($RandomGenerator*,int64_t,int64_t,int32_t,int32_t)>(&RandomSupport$RandomIntsSpliterator::init$))},
	{"forEachRemaining", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/IntConsumer;)Z", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"trySplit", "()Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RandomSupport$RandomIntsSpliterator_InnerClassesInfo_[] = {
	{"jdk.internal.util.random.RandomSupport$RandomIntsSpliterator", "jdk.internal.util.random.RandomSupport", "RandomIntsSpliterator", $PUBLIC | $STATIC},
	{"jdk.internal.util.random.RandomSupport$RandomSpliterator", "jdk.internal.util.random.RandomSupport", "RandomSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.Spliterator$OfInt", "java.util.Spliterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _RandomSupport$RandomIntsSpliterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.util.random.RandomSupport$RandomIntsSpliterator",
	"jdk.internal.util.random.RandomSupport$RandomSpliterator",
	"java.util.Spliterator$OfInt",
	_RandomSupport$RandomIntsSpliterator_FieldInfo_,
	_RandomSupport$RandomIntsSpliterator_MethodInfo_,
	nullptr,
	nullptr,
	_RandomSupport$RandomIntsSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.util.random.RandomSupport"
};

$Object* allocate$RandomSupport$RandomIntsSpliterator($Class* clazz) {
	return $of($alloc(RandomSupport$RandomIntsSpliterator));
}

int64_t RandomSupport$RandomIntsSpliterator::estimateSize() {
	 return this->$RandomSupport$RandomSpliterator::estimateSize();
}

int32_t RandomSupport$RandomIntsSpliterator::characteristics() {
	 return this->$RandomSupport$RandomSpliterator::characteristics();
}

int32_t RandomSupport$RandomIntsSpliterator::hashCode() {
	 return this->$RandomSupport$RandomSpliterator::hashCode();
}

bool RandomSupport$RandomIntsSpliterator::equals(Object$* obj) {
	 return this->$RandomSupport$RandomSpliterator::equals(obj);
}

$Object* RandomSupport$RandomIntsSpliterator::clone() {
	 return this->$RandomSupport$RandomSpliterator::clone();
}

$String* RandomSupport$RandomIntsSpliterator::toString() {
	 return this->$RandomSupport$RandomSpliterator::toString();
}

void RandomSupport$RandomIntsSpliterator::finalize() {
	this->$RandomSupport$RandomSpliterator::finalize();
}

void RandomSupport$RandomIntsSpliterator::init$($RandomGenerator* generatingGenerator, int64_t index, int64_t fence, int32_t origin, int32_t bound) {
	$RandomSupport$RandomSpliterator::init$(index, fence);
	$set(this, generatingGenerator, generatingGenerator);
	this->origin = origin;
	this->bound = bound;
}

$Spliterator$OfInt* RandomSupport$RandomIntsSpliterator::trySplit() {
	int64_t i = this->index;
	int64_t m = (int64_t)((uint64_t)(i + this->fence) >> 1);
	if (m <= i) {
		return nullptr;
	}
	this->index = m;
	return $new(RandomSupport$RandomIntsSpliterator, this->generatingGenerator, i, m, this->origin, this->bound);
}

bool RandomSupport$RandomIntsSpliterator::tryAdvance($IntConsumer* consumer) {
	$Objects::requireNonNull(consumer);
	int64_t i = this->index;
	int64_t f = this->fence;
	if (i < f) {
		consumer->accept($RandomSupport::boundedNextInt(this->generatingGenerator, this->origin, this->bound));
		this->index = i + 1;
		return true;
	} else {
		return false;
	}
}

void RandomSupport$RandomIntsSpliterator::forEachRemaining($IntConsumer* consumer) {
	$Objects::requireNonNull(consumer);
	int64_t i = this->index;
	int64_t f = this->fence;
	if (i < f) {
		this->index = f;
		$var($RandomGenerator, r, this->generatingGenerator);
		int32_t o = this->origin;
		int32_t b = this->bound;
		do {
			consumer->accept($RandomSupport::boundedNextInt(r, o, b));
		} while (++i < f);
	}
}

void RandomSupport$RandomIntsSpliterator::forEachRemaining(Object$* consumer) {
	this->forEachRemaining($cast($IntConsumer, consumer));
}

bool RandomSupport$RandomIntsSpliterator::tryAdvance(Object$* consumer) {
	return this->tryAdvance($cast($IntConsumer, consumer));
}

RandomSupport$RandomIntsSpliterator::RandomSupport$RandomIntsSpliterator() {
}

$Class* RandomSupport$RandomIntsSpliterator::load$($String* name, bool initialize) {
	$loadClass(RandomSupport$RandomIntsSpliterator, name, initialize, &_RandomSupport$RandomIntsSpliterator_ClassInfo_, allocate$RandomSupport$RandomIntsSpliterator);
	return class$;
}

$Class* RandomSupport$RandomIntsSpliterator::class$ = nullptr;

			} // random
		} // util
	} // internal
} // jdk