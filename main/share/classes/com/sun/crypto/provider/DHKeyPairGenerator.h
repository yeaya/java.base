#ifndef _com_sun_crypto_provider_DHKeyPairGenerator_h_
#define _com_sun_crypto_provider_DHKeyPairGenerator_h_
//$ class com.sun.crypto.provider.DHKeyPairGenerator
//$ extends java.security.KeyPairGeneratorSpi

#include <java/security/KeyPairGeneratorSpi.h>

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
namespace javax {
	namespace crypto {
		namespace spec {
			class DHParameterSpec;
		}
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class $export DHKeyPairGenerator : public ::java::security::KeyPairGeneratorSpi {
	$class(DHKeyPairGenerator, $NO_CLASS_INIT, ::java::security::KeyPairGeneratorSpi)
public:
	DHKeyPairGenerator();
	void init$();
	static void checkKeySize(int32_t keysize);
	virtual ::java::security::KeyPair* generateKeyPair() override;
	virtual void initialize(int32_t keysize, ::java::security::SecureRandom* random) override;
	virtual void initialize(::java::security::spec::AlgorithmParameterSpec* algParams, ::java::security::SecureRandom* random) override;
	::javax::crypto::spec::DHParameterSpec* params = nullptr;
	int32_t pSize = 0;
	int32_t lSize = 0;
	::java::security::SecureRandom* random = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_DHKeyPairGenerator_h_