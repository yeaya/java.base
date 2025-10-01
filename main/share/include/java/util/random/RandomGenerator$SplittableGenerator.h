#ifndef _java_util_random_RandomGenerator$SplittableGenerator_h_
#define _java_util_random_RandomGenerator$SplittableGenerator_h_
//$ interface java.util.random.RandomGenerator$SplittableGenerator
//$ extends java.util.random.RandomGenerator$StreamableGenerator

#include <java/util/random/RandomGenerator$StreamableGenerator.h>

namespace java {
	namespace util {
		namespace random {
			class RandomGenerator;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace java {
	namespace util {
		namespace random {

class $import RandomGenerator$SplittableGenerator : public ::java::util::random::RandomGenerator$StreamableGenerator {
	$interface(RandomGenerator$SplittableGenerator, $NO_CLASS_INIT, ::java::util::random::RandomGenerator$StreamableGenerator)
public:
	static ::java::util::random::RandomGenerator* lambda$rngs$0(::java::util::random::RandomGenerator$SplittableGenerator* x);
	static ::java::util::random::RandomGenerator$SplittableGenerator* of($String* name);
	virtual ::java::util::stream::Stream* rngs() override;
	virtual ::java::util::stream::Stream* rngs(int64_t streamSize) override;
	virtual ::java::util::random::RandomGenerator$SplittableGenerator* split() {return nullptr;}
	virtual ::java::util::random::RandomGenerator$SplittableGenerator* split(::java::util::random::RandomGenerator$SplittableGenerator* source) {return nullptr;}
	virtual ::java::util::stream::Stream* splits();
	virtual ::java::util::stream::Stream* splits(int64_t streamSize) {return nullptr;}
	virtual ::java::util::stream::Stream* splits(::java::util::random::RandomGenerator$SplittableGenerator* source) {return nullptr;}
	virtual ::java::util::stream::Stream* splits(int64_t streamSize, ::java::util::random::RandomGenerator$SplittableGenerator* source) {return nullptr;}
};

		} // random
	} // util
} // java

#endif // _java_util_random_RandomGenerator$SplittableGenerator_h_