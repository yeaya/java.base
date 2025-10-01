#ifndef _java_util_random_RandomGenerator$JumpableGenerator_h_
#define _java_util_random_RandomGenerator$JumpableGenerator_h_
//$ interface java.util.random.RandomGenerator$JumpableGenerator
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

class $export RandomGenerator$JumpableGenerator : public ::java::util::random::RandomGenerator$StreamableGenerator {
	$interface(RandomGenerator$JumpableGenerator, $NO_CLASS_INIT, ::java::util::random::RandomGenerator$StreamableGenerator)
public:
	virtual ::java::util::random::RandomGenerator$JumpableGenerator* copy() {return nullptr;}
	virtual ::java::util::random::RandomGenerator* copyAndJump();
	virtual void jump() {}
	virtual double jumpDistance() {return 0.0;}
	virtual ::java::util::stream::Stream* jumps();
	virtual ::java::util::stream::Stream* jumps(int64_t streamSize);
	static ::java::util::random::RandomGenerator$JumpableGenerator* of($String* name);
	virtual ::java::util::stream::Stream* rngs() override;
	virtual ::java::util::stream::Stream* rngs(int64_t streamSize) override;
};

		} // random
	} // util
} // java

#endif // _java_util_random_RandomGenerator$JumpableGenerator_h_