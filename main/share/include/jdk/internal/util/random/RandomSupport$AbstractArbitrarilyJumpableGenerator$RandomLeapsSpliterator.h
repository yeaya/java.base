#ifndef _jdk_internal_util_random_RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomLeapsSpliterator_h_
#define _jdk_internal_util_random_RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomLeapsSpliterator_h_
//$ class jdk.internal.util.random.RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomLeapsSpliterator
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
			class RandomGenerator$ArbitrarilyJumpableGenerator;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace util {
			namespace random {

class $import RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomLeapsSpliterator : public ::jdk::internal::util::random::RandomSupport$RandomSpliterator, public ::java::util::Spliterator {
	$class(RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomLeapsSpliterator, $NO_CLASS_INIT, ::jdk::internal::util::random::RandomSupport$RandomSpliterator, ::java::util::Spliterator)
public:
	RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomLeapsSpliterator();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual int32_t characteristics() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::random::RandomGenerator$ArbitrarilyJumpableGenerator* generatingGenerator, int64_t index, int64_t fence, double distance);
	virtual void forEachRemaining(::java::util::function::Consumer* consumer) override;
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* consumer) override;
	virtual ::java::util::Spliterator* trySplit() override;
	::java::util::random::RandomGenerator$ArbitrarilyJumpableGenerator* generatingGenerator = nullptr;
	double distance = 0.0;
};

			} // random
		} // util
	} // internal
} // jdk

#endif // _jdk_internal_util_random_RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomLeapsSpliterator_h_