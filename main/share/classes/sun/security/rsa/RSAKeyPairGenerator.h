#ifndef _sun_security_rsa_RSAKeyPairGenerator_h_
#define _sun_security_rsa_RSAKeyPairGenerator_h_
//$ class sun.security.rsa.RSAKeyPairGenerator
//$ extends java.security.KeyPairGeneratorSpi

#include <java/security/KeyPairGeneratorSpi.h>

#pragma push_macro("SQRT_3072")
#undef SQRT_3072
#pragma push_macro("SQRT_4096")
#undef SQRT_4096
#pragma push_macro("SQRT_2048")
#undef SQRT_2048

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
		}
	}
}
namespace sun {
	namespace security {
		namespace rsa {
			class RSAUtil$KeyType;
		}
	}
}

namespace sun {
	namespace security {
		namespace rsa {

class $export RSAKeyPairGenerator : public ::java::security::KeyPairGeneratorSpi {
	$class(RSAKeyPairGenerator, 0, ::java::security::KeyPairGeneratorSpi)
public:
	RSAKeyPairGenerator();
	void init$(::sun::security::rsa::RSAUtil$KeyType* type, int32_t defKeySize);
	static ::java::security::KeyPair* createKeyPair(::sun::security::rsa::RSAUtil$KeyType* type, ::java::security::spec::AlgorithmParameterSpec* keyParams, ::java::math::BigInteger* n, ::java::math::BigInteger* e, ::java::math::BigInteger* p, ::java::math::BigInteger* q);
	virtual ::java::security::KeyPair* generateKeyPair() override;
	static ::java::math::BigInteger* getSqrt(int32_t keySize);
	virtual void initialize(int32_t keySize, ::java::security::SecureRandom* random) override;
	virtual void initialize(::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) override;
	static bool isRelativePrime(::java::math::BigInteger* e, ::java::math::BigInteger* bi);
	static ::java::math::BigInteger* SQRT_2048;
	static ::java::math::BigInteger* SQRT_3072;
	static ::java::math::BigInteger* SQRT_4096;
	::java::math::BigInteger* publicExponent = nullptr;
	int32_t keySize = 0;
	::sun::security::rsa::RSAUtil$KeyType* type = nullptr;
	::java::security::spec::AlgorithmParameterSpec* keyParams = nullptr;
	::java::security::SecureRandom* random = nullptr;
	bool useNew = false;
};

		} // rsa
	} // security
} // sun

#pragma pop_macro("SQRT_3072")
#pragma pop_macro("SQRT_4096")
#pragma pop_macro("SQRT_2048")

#endif // _sun_security_rsa_RSAKeyPairGenerator_h_