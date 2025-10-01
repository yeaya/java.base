#ifndef _com_sun_crypto_provider_DHKeyFactory_h_
#define _com_sun_crypto_provider_DHKeyFactory_h_
//$ class com.sun.crypto.provider.DHKeyFactory
//$ extends java.security.KeyFactorySpi

#include <java/security/KeyFactorySpi.h>

namespace java {
	namespace security {
		class Key;
		class PrivateKey;
		class PublicKey;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class KeySpec;
		}
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class $import DHKeyFactory : public ::java::security::KeyFactorySpi {
	$class(DHKeyFactory, $NO_CLASS_INIT, ::java::security::KeyFactorySpi)
public:
	DHKeyFactory();
	void init$();
	virtual ::java::security::PrivateKey* engineGeneratePrivate(::java::security::spec::KeySpec* keySpec) override;
	virtual ::java::security::PublicKey* engineGeneratePublic(::java::security::spec::KeySpec* keySpec) override;
	virtual ::java::security::spec::KeySpec* engineGetKeySpec(::java::security::Key* key, $Class* keySpec) override;
	virtual ::java::security::Key* engineTranslateKey(::java::security::Key* key) override;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_DHKeyFactory_h_