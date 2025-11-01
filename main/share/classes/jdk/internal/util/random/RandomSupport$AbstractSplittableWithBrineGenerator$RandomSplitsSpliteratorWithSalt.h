#ifndef _jdk_internal_util_random_RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt_h_
#define _jdk_internal_util_random_RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt_h_
//$ class jdk.internal.util.random.RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt
//$ extends jdk.internal.util.random.RandomSupport$RandomSpliterator
//$ implements java.util.Spliterator

#include <java/util/Spliterator.h>
#include <jdk/internal/util/random/RandomSupport$RandomSpliterator.h>

namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
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
				class RandomSupport$AbstractSplittableWithBrineGenerator;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace util {
			namespace random {

class $export RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt : public ::jdk::internal::util::random::RandomSupport$RandomSpliterator, public ::java::util::Spliterator {
	$class(RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt, $NO_CLASS_INIT, ::jdk::internal::util::random::RandomSupport$RandomSpliterator, ::java::util::Spliterator)
public:
	RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt();
	virtual int32_t characteristics() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::random::RandomGenerator$SplittableGenerator* generatingGenerator, int64_t index, int64_t fence, ::jdk::internal::util::random::RandomSupport$AbstractSplittableWithBrineGenerator* constructingGenerator, int64_t salt);
	virtual void forEachRemaining(::java::util::function::Consumer* consumer) override;
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* consumer) override;
	virtual ::java::util::Spliterator* trySplit() override;
	::java::util::random::RandomGenerator$SplittableGenerator* generatingGenerator = nullptr;
	::jdk::internal::util::random::RandomSupport$AbstractSplittableWithBrineGenerator* constructingGenerator = nullptr;
	int64_t salt = 0;
};

			} // random
		} // util
	} // internal
} // jdk

#endif // _jdk_internal_util_random_RandomSupport$AbstractSplittableWithBrineGenerator$RandomSplitsSpliteratorWithSalt_h_