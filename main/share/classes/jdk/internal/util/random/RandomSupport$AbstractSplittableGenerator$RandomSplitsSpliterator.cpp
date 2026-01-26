#include <jdk/internal/util/random/RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator.h>

#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/random/RandomGenerator$SplittableGenerator.h>
#include <jdk/internal/util/random/RandomSupport$AbstractSplittableGenerator.h>
#include <jdk/internal/util/random/RandomSupport$RandomSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $RandomGenerator$SplittableGenerator = ::java::util::random::RandomGenerator$SplittableGenerator;
using $RandomSupport$RandomSpliterator = ::jdk::internal::util::random::RandomSupport$RandomSpliterator;

namespace jdk {
	namespace internal {
		namespace util {
			namespace random {

$FieldInfo _RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator_FieldInfo_[] = {
	{"generatingGenerator", "Ljava/util/random/RandomGenerator$SplittableGenerator;", nullptr, $FINAL, $field(RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator, generatingGenerator)},
	{"constructingGenerator", "Ljava/util/random/RandomGenerator$SplittableGenerator;", nullptr, $FINAL, $field(RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator, constructingGenerator)},
	{}
};

$MethodInfo _RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator_MethodInfo_[] = {
	{"*characteristics", "()I", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/random/RandomGenerator$SplittableGenerator;JJLjava/util/random/RandomGenerator$SplittableGenerator;)V", nullptr, 0, $method(RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator, init$, void, $RandomGenerator$SplittableGenerator*, int64_t, int64_t, $RandomGenerator$SplittableGenerator*)},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/util/random/RandomGenerator$SplittableGenerator;>;)V", $PUBLIC, $virtualMethod(RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator, forEachRemaining, void, $Consumer*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-Ljava/util/random/RandomGenerator$SplittableGenerator;>;)Z", $PUBLIC, $virtualMethod(RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator, tryAdvance, bool, $Consumer*)},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<Ljava/util/random/RandomGenerator$SplittableGenerator;>;", $PUBLIC, $virtualMethod(RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator, trySplit, $Spliterator*)},
	{}
};

$InnerClassInfo _RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator_InnerClassesInfo_[] = {
	{"jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator", "jdk.internal.util.random.RandomSupport", "AbstractSplittableGenerator", $PUBLIC | $STATIC | $ABSTRACT},
	{"jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator", "jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator", "RandomSplitsSpliterator", $STATIC},
	{"jdk.internal.util.random.RandomSupport$RandomSpliterator", "jdk.internal.util.random.RandomSupport", "RandomSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.random.RandomGenerator$SplittableGenerator", "java.util.random.RandomGenerator", "SplittableGenerator", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator",
	"jdk.internal.util.random.RandomSupport$RandomSpliterator",
	"java.util.Spliterator",
	_RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator_FieldInfo_,
	_RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator_MethodInfo_,
	"Ljdk/internal/util/random/RandomSupport$RandomSpliterator;Ljava/util/Spliterator<Ljava/util/random/RandomGenerator$SplittableGenerator;>;",
	nullptr,
	_RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.util.random.RandomSupport"
};

$Object* allocate$RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator($Class* clazz) {
	return $of($alloc(RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator));
}

int64_t RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator::estimateSize() {
	 return this->$RandomSupport$RandomSpliterator::estimateSize();
}

int32_t RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator::characteristics() {
	 return this->$RandomSupport$RandomSpliterator::characteristics();
}

int32_t RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator::hashCode() {
	 return this->$RandomSupport$RandomSpliterator::hashCode();
}

bool RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator::equals(Object$* obj) {
	 return this->$RandomSupport$RandomSpliterator::equals(obj);
}

$Object* RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator::clone() {
	 return this->$RandomSupport$RandomSpliterator::clone();
}

$String* RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator::toString() {
	 return this->$RandomSupport$RandomSpliterator::toString();
}

void RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator::finalize() {
	this->$RandomSupport$RandomSpliterator::finalize();
}

void RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator::init$($RandomGenerator$SplittableGenerator* generatingGenerator, int64_t index, int64_t fence, $RandomGenerator$SplittableGenerator* constructingGenerator) {
	$RandomSupport$RandomSpliterator::init$(index, fence);
	$set(this, generatingGenerator, generatingGenerator);
	$set(this, constructingGenerator, constructingGenerator);
}

$Spliterator* RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator::trySplit() {
	int64_t i = this->index;
	int64_t m = (int64_t)((uint64_t)(i + this->fence) >> 1);
	if (m <= i) {
		return nullptr;
	}
	this->index = m;
	return $new(RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator, $($nc(this->generatingGenerator)->split()), i, m, this->constructingGenerator);
}

bool RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator::tryAdvance($Consumer* consumer) {
	$Objects::requireNonNull(consumer);
	int64_t i = this->index;
	int64_t f = this->fence;
	if (i < f) {
		consumer->accept($($nc(this->constructingGenerator)->split(this->generatingGenerator)));
		this->index = i + 1;
		return true;
	} else {
		return false;
	}
}

void RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator::forEachRemaining($Consumer* consumer) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(consumer);
	int64_t i = this->index;
	int64_t f = this->fence;
	if (i < f) {
		this->index = f;
		$var($RandomGenerator$SplittableGenerator, c, this->constructingGenerator);
		$var($RandomGenerator$SplittableGenerator, r, this->generatingGenerator);
		do {
			consumer->accept($($nc(c)->split(r)));
		} while (++i < f);
	}
}

RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator::RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator() {
}

$Class* RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator::load$($String* name, bool initialize) {
	$loadClass(RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator, name, initialize, &_RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator_ClassInfo_, allocate$RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator);
	return class$;
}

$Class* RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator::class$ = nullptr;

			} // random
		} // util
	} // internal
} // jdk