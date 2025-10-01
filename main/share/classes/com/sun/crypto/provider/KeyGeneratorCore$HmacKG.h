#ifndef _com_sun_crypto_provider_KeyGeneratorCore$HmacKG_h_
#define _com_sun_crypto_provider_KeyGeneratorCore$HmacKG_h_
//$ class com.sun.crypto.provider.KeyGeneratorCore$HmacKG
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

class KeyGeneratorCore$HmacKG : public ::javax::crypto::KeyGeneratorSpi {
	$class(KeyGeneratorCore$HmacKG, $NO_CLASS_INIT, ::javax::crypto::KeyGeneratorSpi)
public:
	KeyGeneratorCore$HmacKG();
	void init$($String* algoName, int32_t len);
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

#endif // _com_sun_crypto_provider_KeyGeneratorCore$HmacKG_h_