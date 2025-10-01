#ifndef _java_util_SplittableRandom$AbstractSplittableGeneratorProxy_h_
#define _java_util_SplittableRandom$AbstractSplittableGeneratorProxy_h_
//$ class java.util.SplittableRandom$AbstractSplittableGeneratorProxy
//$ extends jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator

#include <jdk/internal/util/random/RandomSupport$AbstractSplittableGenerator.h>

namespace java {
	namespace util {
		class SplittableRandom;
	}
}
namespace java {
	namespace util {
		namespace random {
			class RandomGenerator$SplittableGenerator;
		}
	}
}

namespace java {
	namespace util {

class SplittableRandom$AbstractSplittableGeneratorProxy : public ::jdk::internal::util::random::RandomSupport$AbstractSplittableGenerator {
	$class(SplittableRandom$AbstractSplittableGeneratorProxy, $NO_CLASS_INIT, ::jdk::internal::util::random::RandomSupport$AbstractSplittableGenerator)
public:
	SplittableRandom$AbstractSplittableGeneratorProxy();
	void init$(::java::util::SplittableRandom* this$0);
	using ::jdk::internal::util::random::RandomSupport$AbstractSplittableGenerator::nextInt;
	virtual int32_t nextInt() override;
	using ::jdk::internal::util::random::RandomSupport$AbstractSplittableGenerator::nextLong;
	virtual int64_t nextLong() override;
	using ::jdk::internal::util::random::RandomSupport$AbstractSplittableGenerator::split;
	virtual ::java::util::random::RandomGenerator$SplittableGenerator* split(::java::util::random::RandomGenerator$SplittableGenerator* source) override;
	::java::util::SplittableRandom* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_SplittableRandom$AbstractSplittableGeneratorProxy_h_