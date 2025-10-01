#ifndef _com_sun_crypto_provider_DHParameterGenerator_h_
#define _com_sun_crypto_provider_DHParameterGenerator_h_
//$ class com.sun.crypto.provider.DHParameterGenerator
//$ extends java.security.AlgorithmParameterGeneratorSpi

#include <java/security/AlgorithmParameterGeneratorSpi.h>

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

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class $import DHParameterGenerator : public ::java::security::AlgorithmParameterGeneratorSpi {
	$class(DHParameterGenerator, $NO_CLASS_INIT, ::java::security::AlgorithmParameterGeneratorSpi)
public:
	DHParameterGenerator();
	void init$();
	static void checkKeySize(int32_t keysize);
	virtual ::java::security::AlgorithmParameters* engineGenerateParameters() override;
	virtual void engineInit(int32_t keysize, ::java::security::SecureRandom* random) override;
	virtual void engineInit(::java::security::spec::AlgorithmParameterSpec* genParamSpec, ::java::security::SecureRandom* random) override;
	int32_t primeSize = 0;
	int32_t exponentSize = 0;
	::java::security::SecureRandom* random = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_DHParameterGenerator_h_