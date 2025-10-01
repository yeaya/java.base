#ifndef _java_util_random_RandomGeneratorFactory$FactoryMapHolder_h_
#define _java_util_random_RandomGeneratorFactory$FactoryMapHolder_h_
//$ class java.util.random.RandomGeneratorFactory$FactoryMapHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("FACTORY_MAP")
#undef FACTORY_MAP

namespace java {
	namespace util {
		class Map;
		class ServiceLoader$Provider;
	}
}

namespace java {
	namespace util {
		namespace random {

class RandomGeneratorFactory$FactoryMapHolder : public ::java::lang::Object {
	$class(RandomGeneratorFactory$FactoryMapHolder, 0, ::java::lang::Object)
public:
	RandomGeneratorFactory$FactoryMapHolder();
	void init$();
	static ::java::util::Map* createFactoryMap();
	static bool lambda$createFactoryMap$0(::java::util::ServiceLoader$Provider* p);
	static $String* lambda$createFactoryMap$1(::java::util::ServiceLoader$Provider* p);
	static ::java::util::Map* FACTORY_MAP;
};

		} // random
	} // util
} // java

#pragma pop_macro("FACTORY_MAP")

#endif // _java_util_random_RandomGeneratorFactory$FactoryMapHolder_h_