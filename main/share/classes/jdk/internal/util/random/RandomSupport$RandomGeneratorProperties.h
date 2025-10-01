#ifndef _jdk_internal_util_random_RandomSupport$RandomGeneratorProperties_h_
#define _jdk_internal_util_random_RandomSupport$RandomGeneratorProperties_h_
//$ interface jdk.internal.util.random.RandomSupport$RandomGeneratorProperties
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace jdk {
	namespace internal {
		namespace util {
			namespace random {

class $export RandomSupport$RandomGeneratorProperties : public ::java::lang::annotation::Annotation {
	$interface(RandomSupport$RandomGeneratorProperties, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int32_t equidistribution() {return 0;}
	virtual $String* group() {return nullptr;}
	virtual int32_t i() {return 0;}
	virtual bool isHardware() {return false;}
	virtual bool isStochastic() {return false;}
	virtual int32_t j() {return 0;}
	virtual int32_t k() {return 0;}
	virtual $String* name() {return nullptr;}
};

			} // random
		} // util
	} // internal
} // jdk

#endif // _jdk_internal_util_random_RandomSupport$RandomGeneratorProperties_h_