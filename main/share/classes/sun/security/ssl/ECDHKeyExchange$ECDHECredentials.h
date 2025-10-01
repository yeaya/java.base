#ifndef _sun_security_ssl_ECDHKeyExchange$ECDHECredentials_h_
#define _sun_security_ssl_ECDHKeyExchange$ECDHECredentials_h_
//$ class sun.security.ssl.ECDHKeyExchange$ECDHECredentials
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
			class ECPublicKey;
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

class ECDHKeyExchange$ECDHECredentials : public ::sun::security::ssl::NamedGroupCredentials {
	$class(ECDHKeyExchange$ECDHECredentials, $NO_CLASS_INIT, ::sun::security::ssl::NamedGroupCredentials)
public:
	ECDHKeyExchange$ECDHECredentials();
	void init$(::java::security::interfaces::ECPublicKey* popPublicKey, ::sun::security::ssl::NamedGroup* namedGroup);
	virtual ::sun::security::ssl::NamedGroup* getNamedGroup() override;
	virtual ::java::security::PublicKey* getPublicKey() override;
	static ::sun::security::ssl::ECDHKeyExchange$ECDHECredentials* valueOf(::sun::security::ssl::NamedGroup* namedGroup, $bytes* encodedPoint);
	::java::security::interfaces::ECPublicKey* popPublicKey = nullptr;
	::sun::security::ssl::NamedGroup* namedGroup = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ECDHKeyExchange$ECDHECredentials_h_