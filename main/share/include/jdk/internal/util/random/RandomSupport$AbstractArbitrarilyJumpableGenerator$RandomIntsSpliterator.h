#ifndef _jdk_internal_util_random_RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomIntsSpliterator_h_
#define _jdk_internal_util_random_RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomIntsSpliterator_h_
//$ class jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomIntsSpliterator
//$ extends jdk.internal.util.random.RandomSupport$RandomSpliterator
//$ implements java.util.Spliterator$OfInt

#include <java/util/Spliterator$OfInt.h>
#include <jdk/internal/util/random/RandomSupport$RandomSpliterator.h>

namespace java {
	namespace util {
		namespace function {
			class IntConsumer;
		}
	}
}
namespace java {
	namespace util {
		namespace random {
			class RandomGenerator$ArbitrarilyJumpableGenerator;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace util {
			namespace random {

class $import RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomIntsSpliterator : public ::jdk::internal::util::random::RandomSupport$RandomSpliterator, public ::java::util::Spliterator$OfInt {
	$class(RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomIntsSpliterator, $NO_CLASS_INIT, ::jdk::internal::util::random::RandomSupport$RandomSpliterator, ::java::util::Spliterator$OfInt)
public:
	RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomIntsSpliterator();
	using ::java::util::Spliterator$OfInt::forEachRemaining;
	virtual int32_t characteristics() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::random::RandomGenerator$ArbitrarilyJumpableGenerator* generatingGenerator, int64_t index, int64_t fence, int32_t origin, int32_t bound);
	virtual void forEachRemaining(::java::util::function::IntConsumer* consumer) override;
	virtual void forEachRemaining(Object$* consumer) override;
	using ::java::util::Spliterator$OfInt::tryAdvance;
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::IntConsumer* consumer) override;
	virtual bool tryAdvance(Object$* consumer) override;
	virtual ::java::util::Spliterator$OfInt* trySplit() override;
	::java::util::random::RandomGenerator$ArbitrarilyJumpableGenerator* generatingGenerator = nullptr;
	int32_t origin = 0;
	int32_t bound = 0;
};

			} // random
		} // util
	} // internal
} // jdk

#endif // _jdk_internal_util_random_RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomIntsSpliterator_h_