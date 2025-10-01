#ifndef _com_sun_crypto_provider_TlsRsaPremasterSecretGenerator_h_
#define _com_sun_crypto_provider_TlsRsaPremasterSecretGenerator_h_
//$ class com.sun.crypto.provider.TlsRsaPremasterSecretGenerator
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
				class TlsRsaPremasterSecretParameterSpec;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class $import TlsRsaPremasterSecretGenerator : public ::javax::crypto::KeyGeneratorSpi {
	$class(TlsRsaPremasterSecretGenerator, 0, ::javax::crypto::KeyGeneratorSpi)
public:
	TlsRsaPremasterSecretGenerator();
	void init$();
	virtual ::javax::crypto::SecretKey* engineGenerateKey() override;
	virtual void engineInit(::java::security::SecureRandom* random) override;
	virtual void engineInit(::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) override;
	virtual void engineInit(int32_t keysize, ::java::security::SecureRandom* random) override;
	static $String* MSG;
	::sun::security::internal::spec::TlsRsaPremasterSecretParameterSpec* spec = nullptr;
	::java::security::SecureRandom* random = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("MSG")

#endif // _com_sun_crypto_provider_TlsRsaPremasterSecretGenerator_h_