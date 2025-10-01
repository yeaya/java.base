#ifndef _java_util_concurrent_ThreadLocalRandom$ThreadLocalRandomProxy_h_
#define _java_util_concurrent_ThreadLocalRandom$ThreadLocalRandomProxy_h_
//$ class java.util.concurrent.ThreadLocalRandom$ThreadLocalRandomProxy
//$ extends java.util.Random

#include <java/util/Random.h>

#pragma push_macro("PROXY")
#undef PROXY

namespace java {
	namespace util {
		namespace concurrent {

class ThreadLocalRandom$ThreadLocalRandomProxy : public ::java::util::Random {
	$class(ThreadLocalRandom$ThreadLocalRandomProxy, 0, ::java::util::Random)
public:
	ThreadLocalRandom$ThreadLocalRandomProxy();
	void init$();
	using ::java::util::Random::nextInt;
	using ::java::util::Random::nextFloat;
	using ::java::util::Random::nextDouble;
	using ::java::util::Random::nextGaussian;
	virtual int32_t nextInt() override;
	using ::java::util::Random::nextLong;
	virtual int64_t nextLong() override;
	static ::java::util::Random* PROXY;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("PROXY")

#endif // _java_util_concurrent_ThreadLocalRandom$ThreadLocalRandomProxy_h_