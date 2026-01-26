#include <jdk/internal/util/random/RandomSupport$AbstractSplittableWithBrineGenerator.h>

#include <java/lang/Math.h>
#include <java/util/Spliterator.h>
#include <java/util/random/RandomGenerator$SplittableGenerator.h>
#include <java/util/random/RandomGenerator.h>
#include <jdk/internal/util/random/RandomSupport$AbstractSplittableGenerator.h>
#include <jdk/internal/util/random/RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt.h>
#include <jdk/internal/util/random/RandomSupport.h>
#include <jcpp.h>

#undef SALT_SHIFT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $RandomGenerator$SplittableGenerator = ::java::util::random::RandomGenerator$SplittableGenerator;
using $RandomSupport$AbstractSplittableGenerator = ::jdk::internal::util::random::RandomSupport$AbstractSplittableGenerator;
using $RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt = ::jdk::internal::util::random::RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt;

namespace jdk {
	namespace internal {
		namespace util {
			namespace random {

$FieldInfo _RandomSupport$AbstractSplittableWithBrineGenerator_FieldInfo_[] = {
	{"SALT_SHIFT", "I", nullptr, $STATIC | $FINAL, $constField(RandomSupport$AbstractSplittableWithBrineGenerator, SALT_SHIFT)},
	{}
};

$MethodInfo _RandomSupport$AbstractSplittableWithBrineGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(RandomSupport$AbstractSplittableWithBrineGenerator, init$, void)},
	{"makeSplitsSpliterator", "(JJLjava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/Spliterator;", "(JJLjava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/Spliterator<Ljava/util/random/RandomGenerator$SplittableGenerator;>;", 0, $virtualMethod(RandomSupport$AbstractSplittableWithBrineGenerator, makeSplitsSpliterator, $Spliterator*, int64_t, int64_t, $RandomGenerator$SplittableGenerator*)},
	{"split", "(J)Ljava/util/random/RandomGenerator$SplittableGenerator;", nullptr, $PUBLIC, $virtualMethod(RandomSupport$AbstractSplittableWithBrineGenerator, split, $RandomGenerator$SplittableGenerator*, int64_t)},
	{"split", "(Ljava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/random/RandomGenerator$SplittableGenerator;", nullptr, $PUBLIC, $virtualMethod(RandomSupport$AbstractSplittableWithBrineGenerator, split, $RandomGenerator$SplittableGenerator*, $RandomGenerator$SplittableGenerator*)},
	{"split", "(Ljava/util/random/RandomGenerator$SplittableGenerator;J)Ljava/util/random/RandomGenerator$SplittableGenerator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RandomSupport$AbstractSplittableWithBrineGenerator, split, $RandomGenerator$SplittableGenerator*, $RandomGenerator$SplittableGenerator*, int64_t)},
	{}
};

$InnerClassInfo _RandomSupport$AbstractSplittableWithBrineGenerator_InnerClassesInfo_[] = {
	{"jdk.internal.util.random.RandomSupport$AbstractSplittableWithBrineGenerator", "jdk.internal.util.random.RandomSupport", "AbstractSplittableWithBrineGenerator", $PUBLIC | $STATIC | $ABSTRACT},
	{"jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator", "jdk.internal.util.random.RandomSupport", "AbstractSplittableGenerator", $PUBLIC | $STATIC | $ABSTRACT},
	{"jdk.internal.util.random.RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt", "jdk.internal.util.random.RandomSupport$AbstractSplittableWithBrineGenerator", "RandomSplitsSpliteratorWithSalt", $STATIC},
	{}
};

$ClassInfo _RandomSupport$AbstractSplittableWithBrineGenerator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.util.random.RandomSupport$AbstractSplittableWithBrineGenerator",
	"jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator",
	nullptr,
	_RandomSupport$AbstractSplittableWithBrineGenerator_FieldInfo_,
	_RandomSupport$AbstractSplittableWithBrineGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_RandomSupport$AbstractSplittableWithBrineGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.util.random.RandomSupport"
};

$Object* allocate$RandomSupport$AbstractSplittableWithBrineGenerator($Class* clazz) {
	return $of($alloc(RandomSupport$AbstractSplittableWithBrineGenerator));
}

void RandomSupport$AbstractSplittableWithBrineGenerator::init$() {
	$RandomSupport$AbstractSplittableGenerator::init$();
}

$Spliterator* RandomSupport$AbstractSplittableWithBrineGenerator::makeSplitsSpliterator(int64_t index, int64_t fence, $RandomGenerator$SplittableGenerator* source) {
	int64_t bits = nextLong();
	int64_t multiplier = ($sl((int64_t)1, RandomSupport$AbstractSplittableWithBrineGenerator::SALT_SHIFT)) - 1;
	int64_t salt = $sl(multiplier, 64 - RandomSupport$AbstractSplittableWithBrineGenerator::SALT_SHIFT);
	while (((int64_t)(salt & (uint64_t)multiplier)) != 0) {
		int64_t digit = $Math::multiplyHigh(bits, multiplier);
		salt = ($usr(salt, RandomSupport$AbstractSplittableWithBrineGenerator::SALT_SHIFT)) | ($sl(digit, 64 - RandomSupport$AbstractSplittableWithBrineGenerator::SALT_SHIFT));
		bits *= multiplier;
	}
	return $new($RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt, source, index, fence, this, salt);
}

$RandomGenerator$SplittableGenerator* RandomSupport$AbstractSplittableWithBrineGenerator::split(int64_t brine) {
	return this->split(this, brine);
}

$RandomGenerator$SplittableGenerator* RandomSupport$AbstractSplittableWithBrineGenerator::split($RandomGenerator$SplittableGenerator* source) {
	return this->split(source, $nc(source)->nextLong());
}

RandomSupport$AbstractSplittableWithBrineGenerator::RandomSupport$AbstractSplittableWithBrineGenerator() {
}

$Class* RandomSupport$AbstractSplittableWithBrineGenerator::load$($String* name, bool initialize) {
	$loadClass(RandomSupport$AbstractSplittableWithBrineGenerator, name, initialize, &_RandomSupport$AbstractSplittableWithBrineGenerator_ClassInfo_, allocate$RandomSupport$AbstractSplittableWithBrineGenerator);
	return class$;
}

$Class* RandomSupport$AbstractSplittableWithBrineGenerator::class$ = nullptr;

			} // random
		} // util
	} // internal
} // jdk