#ifndef _java_security_AlgorithmParameterGeneratorSpi_h_
#define _java_security_AlgorithmParameterGeneratorSpi_h_
//$ class java.security.AlgorithmParameterGeneratorSpi
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class AlgorithmParameters;
		class SecureRandom;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}

namespace java {
	namespace security {

class $export AlgorithmParameterGeneratorSpi : public ::java::lang::Object {
	$class(AlgorithmParameterGeneratorSpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AlgorithmParameterGeneratorSpi();
	void init$();
	virtual ::java::security::AlgorithmParameters* engineGenerateParameters() {return nullptr;}
	virtual void engineInit(int32_t size, ::java::security::SecureRandom* random) {}
	virtual void engineInit(::java::security::spec::AlgorithmParameterSpec* genParamSpec, ::java::security::SecureRandom* random) {}
};

	} // security
} // java

#endif // _java_security_AlgorithmParameterGeneratorSpi_h_