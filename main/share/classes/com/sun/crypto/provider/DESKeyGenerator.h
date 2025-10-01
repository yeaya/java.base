#ifndef _com_sun_crypto_provider_DESKeyGenerator_h_
#define _com_sun_crypto_provider_DESKeyGenerator_h_
//$ class com.sun.crypto.provider.DESKeyGenerator
//$ extends javax.crypto.KeyGeneratorSpi

#include <java/lang/Array.h>
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

class $export DESKeyGenerator : public ::javax::crypto::KeyGeneratorSpi {
	$class(DESKeyGenerator, $NO_CLASS_INIT, ::javax::crypto::KeyGeneratorSpi)
public:
	DESKeyGenerator();
	void init$();
	virtual ::javax::crypto::SecretKey* engineGenerateKey() override;
	virtual void engineInit(::java::security::SecureRandom* random) override;
	virtual void engineInit(::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) override;
	virtual void engineInit(int32_t keysize, ::java::security::SecureRandom* random) override;
	static void setParityBit($bytes* key, int32_t offset);
	::java::security::SecureRandom* random = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_DESKeyGenerator_h_