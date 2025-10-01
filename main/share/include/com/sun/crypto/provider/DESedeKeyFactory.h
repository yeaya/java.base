#ifndef _com_sun_crypto_provider_DESedeKeyFactory_h_
#define _com_sun_crypto_provider_DESedeKeyFactory_h_
//$ class com.sun.crypto.provider.DESedeKeyFactory
//$ extends javax.crypto.SecretKeyFactorySpi

#include <javax/crypto/SecretKeyFactorySpi.h>

namespace java {
	namespace security {
		namespace spec {
			class KeySpec;
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

class $import DESedeKeyFactory : public ::javax::crypto::SecretKeyFactorySpi {
	$class(DESedeKeyFactory, $NO_CLASS_INIT, ::javax::crypto::SecretKeyFactorySpi)
public:
	DESedeKeyFactory();
	void init$();
	virtual ::javax::crypto::SecretKey* engineGenerateSecret(::java::security::spec::KeySpec* keySpec) override;
	virtual ::java::security::spec::KeySpec* engineGetKeySpec(::javax::crypto::SecretKey* key, $Class* keySpec) override;
	virtual ::javax::crypto::SecretKey* engineTranslateKey(::javax::crypto::SecretKey* key) override;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_DESedeKeyFactory_h_