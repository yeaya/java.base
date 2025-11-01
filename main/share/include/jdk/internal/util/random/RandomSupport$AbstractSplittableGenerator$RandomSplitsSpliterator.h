#ifndef _jdk_internal_util_random_RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator_h_
#define _jdk_internal_util_random_RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator_h_
//$ class jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator
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

class $import RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator : public ::jdk::internal::util::random::RandomSupport$RandomSpliterator, public ::java::util::Spliterator {
	$class(RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator, $NO_CLASS_INIT, ::jdk::internal::util::random::RandomSupport$RandomSpliterator, ::java::util::Spliterator)
public:
	RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator();
	virtual int32_t characteristics() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::random::RandomGenerator$SplittableGenerator* generatingGenerator, int64_t index, int64_t fence, ::java::util::random::RandomGenerator$SplittableGenerator* constructingGenerator);
	virtual void forEachRemaining(::java::util::function::Consumer* consumer) override;
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* consumer) override;
	virtual ::java::util::Spliterator* trySplit() override;
	::java::util::random::RandomGenerator$SplittableGenerator* generatingGenerator = nullptr;
	::java::util::random::RandomGenerator$SplittableGenerator* constructingGenerator = nullptr;
};

			} // random
		} // util
	} // internal
} // jdk

#endif // _jdk_internal_util_random_RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator_h_