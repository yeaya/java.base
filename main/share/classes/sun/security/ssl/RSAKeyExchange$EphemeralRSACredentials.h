#ifndef _sun_security_ssl_RSAKeyExchange$EphemeralRSACredentials_h_
#define _sun_security_ssl_RSAKeyExchange$EphemeralRSACredentials_h_
//$ class sun.security.ssl.RSAKeyExchange$EphemeralRSACredentials
//$ extends sun.security.ssl.SSLCredentials

#include <sun/security/ssl/SSLCredentials.h>

namespace java {
	namespace security {
		namespace interfaces {
			class RSAPublicKey;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class RSAKeyExchange$EphemeralRSACredentials : public ::sun::security::ssl::SSLCredentials {
	$class(RSAKeyExchange$EphemeralRSACredentials, $NO_CLASS_INIT, ::sun::security::ssl::SSLCredentials)
public:
	RSAKeyExchange$EphemeralRSACredentials();
	void init$(::java::security::interfaces::RSAPublicKey* popPublicKey);
	::java::security::interfaces::RSAPublicKey* popPublicKey = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_RSAKeyExchange$EphemeralRSACredentials_h_