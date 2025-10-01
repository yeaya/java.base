#ifndef _com_sun_crypto_provider_PBEKeyFactory_h_
#define _com_sun_crypto_provider_PBEKeyFactory_h_
//$ class com.sun.crypto.provider.PBEKeyFactory
//$ extends javax.crypto.SecretKeyFactorySpi

#include <javax/crypto/SecretKeyFactorySpi.h>

namespace java {
	namespace security {
		namespace spec {
			class KeySpec;
		}
	}
}
namespace java {
	namespace util {
		class HashSet;
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

class PBEKeyFactory : public ::javax::crypto::SecretKeyFactorySpi {
	$class(PBEKeyFactory, 0, ::javax::crypto::SecretKeyFactorySpi)
public:
	PBEKeyFactory();
	void init$($String* keytype);
	virtual ::javax::crypto::SecretKey* engineGenerateSecret(::java::security::spec::KeySpec* keySpec) override;
	virtual ::java::security::spec::KeySpec* engineGetKeySpec(::javax::crypto::SecretKey* key, $Class* keySpecCl) override;
	virtual ::javax::crypto::SecretKey* engineTranslateKey(::javax::crypto::SecretKey* key) override;
	$String* type = nullptr;
	static ::java::util::HashSet* validTypes;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_PBEKeyFactory_h_