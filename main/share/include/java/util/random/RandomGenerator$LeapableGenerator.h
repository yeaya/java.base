#ifndef _java_util_random_RandomGenerator$LeapableGenerator_h_
#define _java_util_random_RandomGenerator$LeapableGenerator_h_
//$ interface java.util.random.RandomGenerator$LeapableGenerator
//$ extends java.util.random.RandomGenerator$JumpableGenerator

#include <java/util/random/RandomGenerator$JumpableGenerator.h>

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

class $import RandomGenerator$LeapableGenerator : public ::java::util::random::RandomGenerator$JumpableGenerator {
	$interface(RandomGenerator$LeapableGenerator, $NO_CLASS_INIT, ::java::util::random::RandomGenerator$JumpableGenerator)
public:
	virtual ::java::util::random::RandomGenerator$LeapableGenerator* copy() override {return nullptr;}
	virtual ::java::util::random::RandomGenerator$JumpableGenerator* copyAndLeap();
	virtual void leap() {}
	virtual double leapDistance() {return 0.0;}
	virtual ::java::util::stream::Stream* leaps();
	virtual ::java::util::stream::Stream* leaps(int64_t streamSize);
	static ::java::util::random::RandomGenerator$LeapableGenerator* of($String* name);
};

		} // random
	} // util
} // java

#endif // _java_util_random_RandomGenerator$LeapableGenerator_h_