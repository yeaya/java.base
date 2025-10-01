#ifndef _sun_security_ssl_ECDHKeyExchange$ECDHEPossession_h_
#define _sun_security_ssl_ECDHKeyExchange$ECDHEPossession_h_
//$ class sun.security.ssl.ECDHKeyExchange$ECDHEPossession
//$ extends sun.security.ssl.NamedGroupPossession

#include <java/lang/Array.h>
#include <sun/security/ssl/NamedGroupPossession.h>

namespace java {
	namespace security {
		class AlgorithmConstraints;
		class PrivateKey;
		class PublicKey;
		class SecureRandom;
	}
}
namespace java {
	namespace security {
		namespace interfaces {
			class ECPublicKey;
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
		namespace ssl {
			class ECDHKeyExchange$ECDHECredentials;
			class NamedGroup;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class ECDHKeyExchange$ECDHEPossession : public ::sun::security::ssl::NamedGroupPossession {
	$class(ECDHKeyExchange$ECDHEPossession, $NO_CLASS_INIT, ::sun::security::ssl::NamedGroupPossession)
public:
	ECDHKeyExchange$ECDHEPossession();
	void init$(::sun::security::ssl::NamedGroup* namedGroup, ::java::security::SecureRandom* random);
	void init$(::sun::security::ssl::ECDHKeyExchange$ECDHECredentials* credentials, ::java::security::SecureRandom* random);
	void checkConstraints(::java::security::AlgorithmConstraints* constraints, $bytes* encodedPoint);
	virtual $bytes* encode() override;
	::javax::crypto::SecretKey* getAgreedSecret(::java::security::PublicKey* peerPublicKey);
	::javax::crypto::SecretKey* getAgreedSecret($bytes* encodedPoint);
	virtual ::sun::security::ssl::NamedGroup* getNamedGroup() override;
	virtual ::java::security::PrivateKey* getPrivateKey() override;
	virtual ::java::security::PublicKey* getPublicKey() override;
	::java::security::PrivateKey* privateKey = nullptr;
	::java::security::interfaces::ECPublicKey* publicKey = nullptr;
	::sun::security::ssl::NamedGroup* namedGroup = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ECDHKeyExchange$ECDHEPossession_h_