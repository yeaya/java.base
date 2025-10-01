#ifndef _sun_security_ssl_XDHKeyExchange$XDHECredentials_h_
#define _sun_security_ssl_XDHKeyExchange$XDHECredentials_h_
//$ class sun.security.ssl.XDHKeyExchange$XDHECredentials
//$ extends sun.security.ssl.NamedGroupCredentials

#include <java/lang/Array.h>
#include <sun/security/ssl/NamedGroupCredentials.h>

namespace java {
	namespace security {
		class PublicKey;
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

class XDHKeyExchange$XDHECredentials : public ::sun::security::ssl::NamedGroupCredentials {
	$class(XDHKeyExchange$XDHECredentials, $NO_CLASS_INIT, ::sun::security::ssl::NamedGroupCredentials)
public:
	XDHKeyExchange$XDHECredentials();
	void init$(::java::security::interfaces::XECPublicKey* popPublicKey, ::sun::security::ssl::NamedGroup* namedGroup);
	virtual ::sun::security::ssl::NamedGroup* getNamedGroup() override;
	virtual ::java::security::PublicKey* getPublicKey() override;
	static ::sun::security::ssl::XDHKeyExchange$XDHECredentials* valueOf(::sun::security::ssl::NamedGroup* namedGroup, $bytes* encodedPoint);
	::java::security::interfaces::XECPublicKey* popPublicKey = nullptr;
	::sun::security::ssl::NamedGroup* namedGroup = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_XDHKeyExchange$XDHECredentials_h_