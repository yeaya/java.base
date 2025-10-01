#ifndef _sun_security_ssl_DHKeyExchange$DHECredentials_h_
#define _sun_security_ssl_DHKeyExchange$DHECredentials_h_
//$ class sun.security.ssl.DHKeyExchange$DHECredentials
//$ extends sun.security.ssl.NamedGroupCredentials

#include <java/lang/Array.h>
#include <sun/security/ssl/NamedGroupCredentials.h>

namespace java {
	namespace security {
		class PublicKey;
	}
}
namespace javax {
	namespace crypto {
		namespace interfaces {
			class DHPublicKey;
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

class DHKeyExchange$DHECredentials : public ::sun::security::ssl::NamedGroupCredentials {
	$class(DHKeyExchange$DHECredentials, $NO_CLASS_INIT, ::sun::security::ssl::NamedGroupCredentials)
public:
	DHKeyExchange$DHECredentials();
	void init$(::javax::crypto::interfaces::DHPublicKey* popPublicKey, ::sun::security::ssl::NamedGroup* namedGroup);
	virtual ::sun::security::ssl::NamedGroup* getNamedGroup() override;
	virtual ::java::security::PublicKey* getPublicKey() override;
	static ::sun::security::ssl::DHKeyExchange$DHECredentials* valueOf(::sun::security::ssl::NamedGroup* ng, $bytes* encodedPublic);
	::javax::crypto::interfaces::DHPublicKey* popPublicKey = nullptr;
	::sun::security::ssl::NamedGroup* namedGroup = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_DHKeyExchange$DHECredentials_h_