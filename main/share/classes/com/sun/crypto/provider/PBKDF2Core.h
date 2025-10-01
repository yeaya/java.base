#ifndef _com_sun_crypto_provider_PBKDF2Core_h_
#define _com_sun_crypto_provider_PBKDF2Core_h_
//$ class com.sun.crypto.provider.PBKDF2Core
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

class PBKDF2Core : public ::javax::crypto::SecretKeyFactorySpi {
	$class(PBKDF2Core, $NO_CLASS_INIT, ::javax::crypto::SecretKeyFactorySpi)
public:
	PBKDF2Core();
	void init$($String* prfAlgo);
	virtual ::javax::crypto::SecretKey* engineGenerateSecret(::java::security::spec::KeySpec* keySpec) override;
	virtual ::java::security::spec::KeySpec* engineGetKeySpec(::javax::crypto::SecretKey* key, $Class* keySpecCl) override;
	virtual ::javax::crypto::SecretKey* engineTranslateKey(::javax::crypto::SecretKey* key) override;
	$String* prfAlgo = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_PBKDF2Core_h_