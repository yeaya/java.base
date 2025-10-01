#ifndef _jdk_internal_util_random_RandomSupport$AbstractSplittableWithBrineGenerator_h_
#define _jdk_internal_util_random_RandomSupport$AbstractSplittableWithBrineGenerator_h_
//$ class jdk.internal.util.random.RandomSupport$AbstractSplittableWithBrineGenerator
//$ extends jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator

#include <jdk/internal/util/random/RandomSupport$AbstractSplittableGenerator.h>

#pragma push_macro("SALT_SHIFT")
#undef SALT_SHIFT

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace random {
			class RandomGenerator$SplittableGenerator;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace util {
			namespace random {

class $export RandomSupport$AbstractSplittableWithBrineGenerator : public ::jdk::internal::util::random::RandomSupport$AbstractSplittableGenerator {
	$class(RandomSupport$AbstractSplittableWithBrineGenerator, $NO_CLASS_INIT, ::jdk::internal::util::random::RandomSupport$AbstractSplittableGenerator)
public:
	RandomSupport$AbstractSplittableWithBrineGenerator();
	void init$();
	virtual ::java::util::Spliterator* makeSplitsSpliterator(int64_t index, int64_t fence, ::java::util::random::RandomGenerator$SplittableGenerator* source) override;
	using ::jdk::internal::util::random::RandomSupport$AbstractSplittableGenerator::split;
	virtual ::java::util::random::RandomGenerator$SplittableGenerator* split(int64_t brine);
	virtual ::java::util::random::RandomGenerator$SplittableGenerator* split(::java::util::random::RandomGenerator$SplittableGenerator* source) override;
	virtual ::java::util::random::RandomGenerator$SplittableGenerator* split(::java::util::random::RandomGenerator$SplittableGenerator* source, int64_t brine) {return nullptr;}
	static const int32_t SALT_SHIFT = 4;
};

			} // random
		} // util
	} // internal
} // jdk

#pragma pop_macro("SALT_SHIFT")

#endif // _jdk_internal_util_random_RandomSupport$AbstractSplittableWithBrineGenerator_h_