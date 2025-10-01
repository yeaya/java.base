#ifndef _java_util_random_RandomGeneratorFactory_h_
#define _java_util_random_RandomGeneratorFactory_h_
//$ class java.util.random.RandomGeneratorFactory
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
		}
	}
}
namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace util {
		class Map;
		class ServiceLoader$Provider;
	}
}
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
namespace jdk {
	namespace internal {
		namespace util {
			namespace random {
				class RandomSupport$RandomGeneratorProperties;
			}
		}
	}
}

namespace java {
	namespace util {
		namespace random {

class $export RandomGeneratorFactory : public ::java::lang::Object {
	$class(RandomGeneratorFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RandomGeneratorFactory();
	void init$(::java::util::ServiceLoader$Provider* provider);
	static ::java::util::stream::Stream* all();
	::java::util::random::RandomGenerator* create();
	::java::util::random::RandomGenerator* create(int64_t seed);
	::java::util::random::RandomGenerator* create($bytes* seed);
	void ensureConstructors();
	int32_t equidistribution();
	static ::java::util::random::RandomGeneratorFactory* factoryOf($String* name, $Class* category);
	static ::java::util::ServiceLoader$Provider* findProvider($String* name, $Class* category);
	void getConstructors($Class* randomGeneratorClass);
	static ::java::util::random::RandomGeneratorFactory* getDefault();
	static ::java::util::Map* getFactoryMap();
	::jdk::internal::util::random::RandomSupport$RandomGeneratorProperties* getProperties();
	$String* group();
	bool isArbitrarilyJumpable();
	bool isDeprecated();
	bool isHardware();
	bool isJumpable();
	bool isLeapable();
	bool isSplittable();
	bool isStatistical();
	bool isStochastic();
	bool isStreamable();
	bool isSubclass($Class* category);
	static bool isSubclass($Class* category, ::java::util::ServiceLoader$Provider* provider);
	static bool lambda$all$0(::java::util::ServiceLoader$Provider* p);
	$String* name();
	static ::java::util::random::RandomGenerator* of($String* name, $Class* category);
	static ::java::util::random::RandomGeneratorFactory* of($String* name);
	::java::math::BigInteger* period();
	int32_t stateBits();
	::java::util::ServiceLoader$Provider* provider = nullptr;
	$volatile(::jdk::internal::util::random::RandomSupport$RandomGeneratorProperties*) properties = nullptr;
	$volatile(::java::lang::reflect::Constructor*) ctor = nullptr;
	::java::lang::reflect::Constructor* ctorLong = nullptr;
	::java::lang::reflect::Constructor* ctorBytes = nullptr;
};

		} // random
	} // util
} // java

#endif // _java_util_random_RandomGeneratorFactory_h_