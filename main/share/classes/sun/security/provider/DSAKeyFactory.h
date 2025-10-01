#ifndef _sun_security_provider_DSAKeyFactory_h_
#define _sun_security_provider_DSAKeyFactory_h_
//$ class sun.security.provider.DSAKeyFactory
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

namespace sun {
	namespace security {
		namespace provider {

class $export DSAKeyFactory : public ::java::security::KeyFactorySpi {
	$class(DSAKeyFactory, $NO_CLASS_INIT, ::java::security::KeyFactorySpi)
public:
	DSAKeyFactory();
	void init$();
	virtual ::java::security::PrivateKey* engineGeneratePrivate(::java::security::spec::KeySpec* keySpec) override;
	virtual ::java::security::PublicKey* engineGeneratePublic(::java::security::spec::KeySpec* keySpec) override;
	virtual ::java::security::spec::KeySpec* engineGetKeySpec(::java::security::Key* key, $Class* keySpec) override;
	virtual ::java::security::Key* engineTranslateKey(::java::security::Key* key) override;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_DSAKeyFactory_h_