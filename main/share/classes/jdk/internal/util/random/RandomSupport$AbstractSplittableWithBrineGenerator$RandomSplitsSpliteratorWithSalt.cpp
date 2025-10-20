#include <jdk/internal/util/random/RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt.h>

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
#include <java/util/random/RandomGenerator$SplittableGenerator.h>
#include <jdk/internal/util/random/RandomSupport$AbstractSplittableWithBrineGenerator.h>
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
using $RandomGenerator$SplittableGenerator = ::java::util::random::RandomGenerator$SplittableGenerator;
using $RandomSupport$AbstractSplittableWithBrineGenerator = ::jdk::internal::util::random::RandomSupport$AbstractSplittableWithBrineGenerator;
using $RandomSupport$RandomSpliterator = ::jdk::internal::util::random::RandomSupport$RandomSpliterator;

namespace jdk {
	namespace internal {
		namespace util {
			namespace random {

$FieldInfo _RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt_FieldInfo_[] = {
	{"generatingGenerator", "Ljava/util/random/RandomGenerator$SplittableGenerator;", nullptr, $FINAL, $field(RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt, generatingGenerator)},
	{"constructingGenerator", "Ljdk/internal/util/random/RandomSupport$AbstractSplittableWithBrineGenerator;", nullptr, $FINAL, $field(RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt, constructingGenerator)},
	{"salt", "J", nullptr, 0, $field(RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt, salt)},
	{}
};

$MethodInfo _RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt_MethodInfo_[] = {
	{"*characteristics", "()I", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/random/RandomGenerator$SplittableGenerator;JJLjdk/internal/util/random/RandomSupport$AbstractSplittableWithBrineGenerator;J)V", nullptr, 0, $method(static_cast<void(RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt::*)($RandomGenerator$SplittableGenerator*,int64_t,int64_t,$RandomSupport$AbstractSplittableWithBrineGenerator*,int64_t)>(&RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt::init$))},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/util/random/RandomGenerator$SplittableGenerator;>;)V", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-Ljava/util/random/RandomGenerator$SplittableGenerator;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<Ljava/util/random/RandomGenerator$SplittableGenerator;>;", $PUBLIC},
	{}
};

$InnerClassInfo _RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt_InnerClassesInfo_[] = {
	{"jdk.internal.util.random.RandomSupport$AbstractSplittableWithBrineGenerator", "jdk.internal.util.random.RandomSupport", "AbstractSplittableWithBrineGenerator", $PUBLIC | $STATIC | $ABSTRACT},
	{"jdk.internal.util.random.RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt", "jdk.internal.util.random.RandomSupport$AbstractSplittableWithBrineGenerator", "RandomSplitsSpliteratorWithSalt", $STATIC},
	{"jdk.internal.util.random.RandomSupport$RandomSpliterator", "jdk.internal.util.random.RandomSupport", "RandomSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.random.RandomGenerator$SplittableGenerator", "java.util.random.RandomGenerator", "SplittableGenerator", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.util.random.RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt",
	"jdk.internal.util.random.RandomSupport$RandomSpliterator",
	"java.util.Spliterator",
	_RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt_FieldInfo_,
	_RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt_MethodInfo_,
	"Ljdk/internal/util/random/RandomSupport$RandomSpliterator;Ljava/util/Spliterator<Ljava/util/random/RandomGenerator$SplittableGenerator;>;",
	nullptr,
	_RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.util.random.RandomSupport"
};

$Object* allocate$RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt($Class* clazz) {
	return $of($alloc(RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt));
}

int64_t RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt::estimateSize() {
	 return this->$RandomSupport$RandomSpliterator::estimateSize();
}

int32_t RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt::characteristics() {
	 return this->$RandomSupport$RandomSpliterator::characteristics();
}

int32_t RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt::hashCode() {
	 return this->$RandomSupport$RandomSpliterator::hashCode();
}

bool RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt::equals(Object$* obj) {
	 return this->$RandomSupport$RandomSpliterator::equals(obj);
}

$Object* RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt::clone() {
	 return this->$RandomSupport$RandomSpliterator::clone();
}

$String* RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt::toString() {
	 return this->$RandomSupport$RandomSpliterator::toString();
}

void RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt::finalize() {
	this->$RandomSupport$RandomSpliterator::finalize();
}

void RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt::init$($RandomGenerator$SplittableGenerator* generatingGenerator, int64_t index, int64_t fence, $RandomSupport$AbstractSplittableWithBrineGenerator* constructingGenerator, int64_t salt) {
	$RandomSupport$RandomSpliterator::init$(index, fence);
	$set(this, generatingGenerator, generatingGenerator);
	$set(this, constructingGenerator, constructingGenerator);
	while ((salt != 0) && ($Long::compareUnsigned((int64_t)(salt & (uint64_t)-salt), index) <= 0)) {
		salt = salt << 4;
	}
	this->salt = salt;
}

$Spliterator* RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt::trySplit() {
	$useLocalCurrentObjectStackCache();
	int64_t i = this->index;
	int64_t m = (int64_t)((uint64_t)(i + this->fence) >> 1);
	if (m <= i) {
		return nullptr;
	}
	$var(RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt, result, $new(RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt, $($nc(this->generatingGenerator)->split()), i, m, this->constructingGenerator, this->salt));
	this->index = m;
	while ((this->salt != 0) && ($Long::compareUnsigned((int64_t)(this->salt & (uint64_t)-this->salt), this->index) <= 0)) {
		this->salt = this->salt << 4;
	}
	return result;
}

bool RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt::tryAdvance($Consumer* consumer) {
	$Objects::requireNonNull(consumer);
	int64_t i = this->index;
	int64_t f = this->fence;
	if (i < f) {
		consumer->accept($($nc(this->constructingGenerator)->split(this->generatingGenerator, this->salt | i)));
		++i;
		this->index = i;
		if (((int64_t)(i & (uint64_t)this->salt)) != 0) {
			this->salt <<= 4;
		}
		return true;
	}
	return false;
}

void RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt::forEachRemaining($Consumer* consumer) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(consumer);
	int64_t i = this->index;
	int64_t f = this->fence;
	if (i < f) {
		this->index = f;
		$var($RandomSupport$AbstractSplittableWithBrineGenerator, c, this->constructingGenerator);
		$var($RandomGenerator$SplittableGenerator, r, this->generatingGenerator);
		do {
			consumer->accept($($nc(c)->split(r, this->salt | i)));
			++i;
			if (((int64_t)(i & (uint64_t)this->salt)) != 0) {
				this->salt <<= 4;
			}
		} while (i < f);
	}
}

RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt::RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt() {
}

$Class* RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt::load$($String* name, bool initialize) {
	$loadClass(RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt, name, initialize, &_RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt_ClassInfo_, allocate$RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt);
	return class$;
}

$Class* RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt::class$ = nullptr;

			} // random
		} // util
	} // internal
} // jdk