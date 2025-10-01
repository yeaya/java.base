#ifndef _java_util_random_RandomGenerator$ArbitrarilyJumpableGenerator_h_
#define _java_util_random_RandomGenerator$ArbitrarilyJumpableGenerator_h_
//$ interface java.util.random.RandomGenerator$ArbitrarilyJumpableGenerator
//$ extends java.util.random.RandomGenerator$LeapableGenerator

#include <java/util/random/RandomGenerator$LeapableGenerator.h>

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

class $import RandomGenerator$ArbitrarilyJumpableGenerator : public ::java::util::random::RandomGenerator$LeapableGenerator {
	$interface(RandomGenerator$ArbitrarilyJumpableGenerator, $NO_CLASS_INIT, ::java::util::random::RandomGenerator$LeapableGenerator)
public:
	virtual ::java::util::random::RandomGenerator$ArbitrarilyJumpableGenerator* copy() override {return nullptr;}
	using ::java::util::random::RandomGenerator$LeapableGenerator::copyAndJump;
	virtual ::java::util::random::RandomGenerator$ArbitrarilyJumpableGenerator* copyAndJump(double distance);
	virtual void jump(double distance) {}
	virtual void jump() override;
	virtual void jumpPowerOfTwo(int32_t logDistance) {}
	using ::java::util::random::RandomGenerator$LeapableGenerator::jumps;
	virtual ::java::util::stream::Stream* jumps(double distance);
	virtual ::java::util::stream::Stream* jumps(int64_t streamSize, double distance);
	::java::util::random::RandomGenerator$ArbitrarilyJumpableGenerator* lambda$jumps$0(double distance);
	virtual void leap() override;
	static ::java::util::random::RandomGenerator$ArbitrarilyJumpableGenerator* of($String* name);
};

		} // random
	} // util
} // java

#endif // _java_util_random_RandomGenerator$ArbitrarilyJumpableGenerator_h_