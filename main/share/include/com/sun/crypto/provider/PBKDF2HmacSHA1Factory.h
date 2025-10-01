#ifndef _com_sun_crypto_provider_PBKDF2HmacSHA1Factory_h_
#define _com_sun_crypto_provider_PBKDF2HmacSHA1Factory_h_
//$ class com.sun.crypto.provider.PBKDF2HmacSHA1Factory
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

class $import PBKDF2HmacSHA1Factory : public ::javax::crypto::SecretKeyFactorySpi {
	$class(PBKDF2HmacSHA1Factory, $NO_CLASS_INIT, ::javax::crypto::SecretKeyFactorySpi)
public:
	PBKDF2HmacSHA1Factory();
	void init$();
	virtual ::javax::crypto::SecretKey* engineGenerateSecret(::java::security::spec::KeySpec* keySpec) override;
	virtual ::java::security::spec::KeySpec* engineGetKeySpec(::javax::crypto::SecretKey* key, $Class* keySpecCl) override;
	virtual ::javax::crypto::SecretKey* engineTranslateKey(::javax::crypto::SecretKey* key) override;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_PBKDF2HmacSHA1Factory_h_