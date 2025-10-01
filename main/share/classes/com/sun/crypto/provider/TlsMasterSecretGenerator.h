#ifndef _com_sun_crypto_provider_TlsMasterSecretGenerator_h_
#define _com_sun_crypto_provider_TlsMasterSecretGenerator_h_
//$ class com.sun.crypto.provider.TlsMasterSecretGenerator
//$ extends javax.crypto.KeyGeneratorSpi

#include <javax/crypto/KeyGeneratorSpi.h>

#pragma push_macro("MSG")
#undef MSG

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
namespace sun {
	namespace security {
		namespace internal {
			namespace spec {
				class TlsMasterSecretParameterSpec;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class $export TlsMasterSecretGenerator : public ::javax::crypto::KeyGeneratorSpi {
	$class(TlsMasterSecretGenerator, 0, ::javax::crypto::KeyGeneratorSpi)
public:
	TlsMasterSecretGenerator();
	void init$();
	virtual ::javax::crypto::SecretKey* engineGenerateKey() override;
	virtual void engineInit(::java::security::SecureRandom* random) override;
	virtual void engineInit(::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) override;
	virtual void engineInit(int32_t keysize, ::java::security::SecureRandom* random) override;
	static $String* MSG;
	::sun::security::internal::spec::TlsMasterSecretParameterSpec* spec = nullptr;
	int32_t protocolVersion = 0;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("MSG")

#endif // _com_sun_crypto_provider_TlsMasterSecretGenerator_h_