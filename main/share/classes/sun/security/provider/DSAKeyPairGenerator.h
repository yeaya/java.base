#ifndef _sun_security_provider_DSAKeyPairGenerator_h_
#define _sun_security_provider_DSAKeyPairGenerator_h_
//$ class sun.security.provider.DSAKeyPairGenerator
//$ extends java.security.KeyPairGenerator

#include <java/security/KeyPairGenerator.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		class KeyPair;
		class SecureRandom;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
			class DSAParameterSpec;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class DSAKeyPairGenerator : public ::java::security::KeyPairGenerator {
	$class(DSAKeyPairGenerator, $NO_CLASS_INIT, ::java::security::KeyPairGenerator)
public:
	DSAKeyPairGenerator();
	void init$(int32_t defaultKeySize);
	static void checkStrength(int32_t sizeP, int32_t sizeQ);
	virtual ::java::security::KeyPair* generateKeyPair() override;
	::java::security::KeyPair* generateKeyPair(::java::math::BigInteger* p, ::java::math::BigInteger* q, ::java::math::BigInteger* g, ::java::security::SecureRandom* random);
	::java::math::BigInteger* generateX(::java::security::SecureRandom* random, ::java::math::BigInteger* q);
	virtual ::java::math::BigInteger* generateY(::java::math::BigInteger* x, ::java::math::BigInteger* p, ::java::math::BigInteger* g);
	virtual void init(int32_t modlen, ::java::security::SecureRandom* random, bool forceNew);
	virtual void init(::java::security::spec::DSAParameterSpec* params, ::java::security::SecureRandom* random, bool forceNew);
	using ::java::security::KeyPairGenerator::initialize;
	virtual void initialize(int32_t modlen, ::java::security::SecureRandom* random) override;
	virtual void initialize(::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) override;
	int32_t plen = 0;
	int32_t qlen = 0;
	bool forceNewParameters = false;
	::java::security::spec::DSAParameterSpec* params = nullptr;
	::java::security::SecureRandom* random = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_DSAKeyPairGenerator_h_