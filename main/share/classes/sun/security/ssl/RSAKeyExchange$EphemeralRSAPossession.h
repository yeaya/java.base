#ifndef _sun_security_ssl_RSAKeyExchange$EphemeralRSAPossession_h_
#define _sun_security_ssl_RSAKeyExchange$EphemeralRSAPossession_h_
//$ class sun.security.ssl.RSAKeyExchange$EphemeralRSAPossession
//$ extends sun.security.ssl.SSLPossession

#include <sun/security/ssl/SSLPossession.h>

namespace java {
	namespace security {
		class PrivateKey;
	}
}
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

class RSAKeyExchange$EphemeralRSAPossession : public ::sun::security::ssl::SSLPossession {
	$class(RSAKeyExchange$EphemeralRSAPossession, $NO_CLASS_INIT, ::sun::security::ssl::SSLPossession)
public:
	RSAKeyExchange$EphemeralRSAPossession();
	void init$(::java::security::PrivateKey* popPrivateKey, ::java::security::interfaces::RSAPublicKey* popPublicKey);
	::java::security::interfaces::RSAPublicKey* popPublicKey = nullptr;
	::java::security::PrivateKey* popPrivateKey = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_RSAKeyExchange$EphemeralRSAPossession_h_