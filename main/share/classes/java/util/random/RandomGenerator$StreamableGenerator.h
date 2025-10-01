#ifndef _java_util_random_RandomGenerator$StreamableGenerator_h_
#define _java_util_random_RandomGenerator$StreamableGenerator_h_
//$ interface java.util.random.RandomGenerator$StreamableGenerator
//$ extends java.util.random.RandomGenerator

#include <java/util/random/RandomGenerator.h>

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

class $export RandomGenerator$StreamableGenerator : public ::java::util::random::RandomGenerator {
	$interface(RandomGenerator$StreamableGenerator, $NO_CLASS_INIT, ::java::util::random::RandomGenerator)
public:
	static ::java::util::random::RandomGenerator$StreamableGenerator* of($String* name);
	virtual ::java::util::stream::Stream* rngs() {return nullptr;}
	virtual ::java::util::stream::Stream* rngs(int64_t streamSize);
};

		} // random
	} // util
} // java

#endif // _java_util_random_RandomGenerator$StreamableGenerator_h_