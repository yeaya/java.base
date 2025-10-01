#ifndef _sun_security_ssl_DHKeyExchange$DHEPossession_h_
#define _sun_security_ssl_DHKeyExchange$DHEPossession_h_
//$ class sun.security.ssl.DHKeyExchange$DHEPossession
//$ extends sun.security.ssl.NamedGroupPossession

#include <java/lang/Array.h>
#include <sun/security/ssl/NamedGroupPossession.h>

namespace java {
	namespace security {
		class KeyPair;
		class KeyPairGenerator;
		class PrivateKey;
		class PublicKey;
		class SecureRandom;
	}
}
namespace javax {
	namespace crypto {
		namespace interfaces {
			class DHPublicKey;
		}
	}
}
namespace javax {
	namespace crypto {
		namespace spec {
			class DHPublicKeySpec;
		}
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class DHKeyExchange$DHECredentials;
			class NamedGroup;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class DHKeyExchange$DHEPossession : public ::sun::security::ssl::NamedGroupPossession {
	$class(DHKeyExchange$DHEPossession, $NO_CLASS_INIT, ::sun::security::ssl::NamedGroupPossession)
public:
	DHKeyExchange$DHEPossession();
	void init$(::sun::security::ssl::NamedGroup* namedGroup, ::java::security::SecureRandom* random);
	void init$(int32_t keyLength, ::java::security::SecureRandom* random);
	void init$(::sun::security::ssl::DHKeyExchange$DHECredentials* credentials, ::java::security::SecureRandom* random);
	virtual $bytes* encode() override;
	::java::security::KeyPair* generateDHKeyPair(::java::security::KeyPairGenerator* kpg);
	static ::javax::crypto::spec::DHPublicKeySpec* getDHPublicKeySpec(::java::security::PublicKey* key);
	virtual ::sun::security::ssl::NamedGroup* getNamedGroup() override;
	virtual ::java::security::PrivateKey* getPrivateKey() override;
	virtual ::java::security::PublicKey* getPublicKey() override;
	::java::security::PrivateKey* privateKey = nullptr;
	::javax::crypto::interfaces::DHPublicKey* publicKey = nullptr;
	::sun::security::ssl::NamedGroup* namedGroup = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_DHKeyExchange$DHEPossession_h_