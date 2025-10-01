#ifndef _java_security_AlgorithmParameterGenerator_h_
#define _java_security_AlgorithmParameterGenerator_h_
//$ class java.security.AlgorithmParameterGenerator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class AlgorithmParameterGeneratorSpi;
		class AlgorithmParameters;
		class Provider;
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

class $export AlgorithmParameterGenerator : public ::java::lang::Object {
	$class(AlgorithmParameterGenerator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AlgorithmParameterGenerator();
	void init$(::java::security::AlgorithmParameterGeneratorSpi* paramGenSpi, ::java::security::Provider* provider, $String* algorithm);
	::java::security::AlgorithmParameters* generateParameters();
	$String* getAlgorithm();
	static ::java::security::AlgorithmParameterGenerator* getInstance($String* algorithm);
	static ::java::security::AlgorithmParameterGenerator* getInstance($String* algorithm, $String* provider);
	static ::java::security::AlgorithmParameterGenerator* getInstance($String* algorithm, ::java::security::Provider* provider);
	::java::security::Provider* getProvider();
	void init(int32_t size);
	void init(int32_t size, ::java::security::SecureRandom* random);
	void init(::java::security::spec::AlgorithmParameterSpec* genParamSpec);
	void init(::java::security::spec::AlgorithmParameterSpec* genParamSpec, ::java::security::SecureRandom* random);
	::java::security::Provider* provider = nullptr;
	::java::security::AlgorithmParameterGeneratorSpi* paramGenSpi = nullptr;
	$String* algorithm = nullptr;
};

	} // security
} // java

#endif // _java_security_AlgorithmParameterGenerator_h_