#ifndef _com_sun_crypto_provider_KeyGeneratorCore$ChaCha20KeyGenerator_h_
#define _com_sun_crypto_provider_KeyGeneratorCore$ChaCha20KeyGenerator_h_
//$ class com.sun.crypto.provider.KeyGeneratorCore$ChaCha20KeyGenerator
//$ extends javax.crypto.KeyGeneratorSpi

#include <javax/crypto/KeyGeneratorSpi.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {
				class KeyGeneratorCore;
			}
		}
	}
}
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

class KeyGeneratorCore$ChaCha20KeyGenerator : public ::javax::crypto::KeyGeneratorSpi {
	$class(KeyGeneratorCore$ChaCha20KeyGenerator, $NO_CLASS_INIT, ::javax::crypto::KeyGeneratorSpi)
public:
	KeyGeneratorCore$ChaCha20KeyGenerator();
	void init$();
	virtual ::javax::crypto::SecretKey* engineGenerateKey() override;
	virtual void engineInit(::java::security::SecureRandom* random) override;
	virtual void engineInit(::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) override;
	virtual void engineInit(int32_t keySize, ::java::security::SecureRandom* random) override;
	::com::sun::crypto::provider::KeyGeneratorCore* core = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_KeyGeneratorCore$ChaCha20KeyGenerator_h_