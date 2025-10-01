#ifndef _sun_security_ssl_RSAKeyExchange$EphemeralRSAPossessionGenerator_h_
#define _sun_security_ssl_RSAKeyExchange$EphemeralRSAPossessionGenerator_h_
//$ class sun.security.ssl.RSAKeyExchange$EphemeralRSAPossessionGenerator
//$ extends sun.security.ssl.SSLPossessionGenerator

#include <sun/security/ssl/SSLPossessionGenerator.h>

namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
			class SSLPossession;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class RSAKeyExchange$EphemeralRSAPossessionGenerator : public ::sun::security::ssl::SSLPossessionGenerator {
	$class(RSAKeyExchange$EphemeralRSAPossessionGenerator, $NO_CLASS_INIT, ::sun::security::ssl::SSLPossessionGenerator)
public:
	RSAKeyExchange$EphemeralRSAPossessionGenerator();
	void init$();
	virtual ::sun::security::ssl::SSLPossession* createPossession(::sun::security::ssl::HandshakeContext* context) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_RSAKeyExchange$EphemeralRSAPossessionGenerator_h_