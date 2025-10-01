#ifndef _sun_security_provider_DSAParameterGenerator_h_
#define _sun_security_provider_DSAParameterGenerator_h_
//$ class sun.security.provider.DSAParameterGenerator
//$ extends java.security.AlgorithmParameterGeneratorSpi

#include <java/lang/Array.h>
#include <java/security/AlgorithmParameterGeneratorSpi.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
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

namespace sun {
	namespace security {
		namespace provider {

class $export DSAParameterGenerator : public ::java::security::AlgorithmParameterGeneratorSpi {
	$class(DSAParameterGenerator, $NO_CLASS_INIT, ::java::security::AlgorithmParameterGeneratorSpi)
public:
	DSAParameterGenerator();
	void init$();
	virtual ::java::security::AlgorithmParameters* engineGenerateParameters() override;
	virtual void engineInit(int32_t strength, ::java::security::SecureRandom* random) override;
	virtual void engineInit(::java::security::spec::AlgorithmParameterSpec* genParamSpec, ::java::security::SecureRandom* random) override;
	static ::java::math::BigInteger* generateG(::java::math::BigInteger* p, ::java::math::BigInteger* q);
	static $Array<::java::math::BigInteger>* generatePandQ(::java::security::SecureRandom* random, int32_t valueL, int32_t valueN, int32_t seedLen);
	static $bytes* toByteArray(::java::math::BigInteger* bigInt);
	int32_t valueL = 0;
	int32_t valueN = 0;
	int32_t seedLen = 0;
	::java::security::SecureRandom* random = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_DSAParameterGenerator_h_