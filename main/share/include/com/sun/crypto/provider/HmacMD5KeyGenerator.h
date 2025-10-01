#ifndef _com_sun_crypto_provider_HmacMD5KeyGenerator_h_
#define _com_sun_crypto_provider_HmacMD5KeyGenerator_h_
//$ class com.sun.crypto.provider.HmacMD5KeyGenerator
//$ extends javax.crypto.KeyGeneratorSpi

#include <javax/crypto/KeyGeneratorSpi.h>

namespace java {
	namespace security {
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
		class SecretKey;
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class $import HmacMD5KeyGenerator : public ::javax::crypto::KeyGeneratorSpi {
	$class(HmacMD5KeyGenerator, $NO_CLASS_INIT, ::javax::crypto::KeyGeneratorSpi)
public:
	HmacMD5KeyGenerator();
	void init$();
	virtual ::javax::crypto::SecretKey* engineGenerateKey() override;
	virtual void engineInit(::java::security::SecureRandom* random) override;
	virtual void engineInit(::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) override;
	virtual void engineInit(int32_t keysize, ::java::security::SecureRandom* random) override;
	::java::security::SecureRandom* random = nullptr;
	int32_t keysize = 0;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_HmacMD5KeyGenerator_h_