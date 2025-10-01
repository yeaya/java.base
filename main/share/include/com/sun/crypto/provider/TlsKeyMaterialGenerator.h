#ifndef _com_sun_crypto_provider_TlsKeyMaterialGenerator_h_
#define _com_sun_crypto_provider_TlsKeyMaterialGenerator_h_
//$ class com.sun.crypto.provider.TlsKeyMaterialGenerator
//$ extends javax.crypto.KeyGeneratorSpi

#include <java/lang/Array.h>
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
				class TlsKeyMaterialParameterSpec;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class $import TlsKeyMaterialGenerator : public ::javax::crypto::KeyGeneratorSpi {
	$class(TlsKeyMaterialGenerator, 0, ::javax::crypto::KeyGeneratorSpi)
public:
	TlsKeyMaterialGenerator();
	void init$();
	virtual ::javax::crypto::SecretKey* engineGenerateKey() override;
	::javax::crypto::SecretKey* engineGenerateKey0($bytes* masterSecret);
	virtual void engineInit(::java::security::SecureRandom* random) override;
	virtual void engineInit(::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) override;
	virtual void engineInit(int32_t keysize, ::java::security::SecureRandom* random) override;
	static $String* MSG;
	::sun::security::internal::spec::TlsKeyMaterialParameterSpec* spec = nullptr;
	int32_t protocolVersion = 0;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("MSG")

#endif // _com_sun_crypto_provider_TlsKeyMaterialGenerator_h_