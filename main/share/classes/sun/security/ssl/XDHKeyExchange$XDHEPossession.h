#ifndef _sun_security_ssl_XDHKeyExchange$XDHEPossession_h_
#define _sun_security_ssl_XDHKeyExchange$XDHEPossession_h_
//$ class sun.security.ssl.XDHKeyExchange$XDHEPossession
//$ extends sun.security.ssl.NamedGroupPossession

#include <java/lang/Array.h>
#include <sun/security/ssl/NamedGroupPossession.h>

namespace java {
	namespace security {
		class PrivateKey;
		class PublicKey;
		class SecureRandom;
	}
}
namespace java {
	namespace security {
		namespace interfaces {
			class XECPublicKey;
		}
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class NamedGroup;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class XDHKeyExchange$XDHEPossession : public ::sun::security::ssl::NamedGroupPossession {
	$class(XDHKeyExchange$XDHEPossession, $NO_CLASS_INIT, ::sun::security::ssl::NamedGroupPossession)
public:
	XDHKeyExchange$XDHEPossession();
	void init$(::sun::security::ssl::NamedGroup* namedGroup, ::java::security::SecureRandom* random);
	virtual $bytes* encode() override;
	virtual ::sun::security::ssl::NamedGroup* getNamedGroup() override;
	virtual ::java::security::PrivateKey* getPrivateKey() override;
	virtual ::java::security::PublicKey* getPublicKey() override;
	::java::security::PrivateKey* privateKey = nullptr;
	::java::security::interfaces::XECPublicKey* publicKey = nullptr;
	::sun::security::ssl::NamedGroup* namedGroup = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_XDHKeyExchange$XDHEPossession_h_