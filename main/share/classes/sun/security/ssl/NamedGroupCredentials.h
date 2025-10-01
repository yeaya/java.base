#ifndef _sun_security_ssl_NamedGroupCredentials_h_
#define _sun_security_ssl_NamedGroupCredentials_h_
//$ interface sun.security.ssl.NamedGroupCredentials
//$ extends sun.security.ssl.SSLCredentials

#include <sun/security/ssl/SSLCredentials.h>

namespace java {
	namespace security {
		class PublicKey;
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

class NamedGroupCredentials : public ::sun::security::ssl::SSLCredentials {
	$interface(NamedGroupCredentials, $NO_CLASS_INIT, ::sun::security::ssl::SSLCredentials)
public:
	virtual ::sun::security::ssl::NamedGroup* getNamedGroup() {return nullptr;}
	virtual ::java::security::PublicKey* getPublicKey() {return nullptr;}
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_NamedGroupCredentials_h_