#ifndef _sun_security_ssl_ECDHKeyExchange$ECDHEPossessionGenerator_h_
#define _sun_security_ssl_ECDHKeyExchange$ECDHEPossessionGenerator_h_
//$ class sun.security.ssl.ECDHKeyExchange$ECDHEPossessionGenerator
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

class ECDHKeyExchange$ECDHEPossessionGenerator : public ::sun::security::ssl::SSLPossessionGenerator {
	$class(ECDHKeyExchange$ECDHEPossessionGenerator, $NO_CLASS_INIT, ::sun::security::ssl::SSLPossessionGenerator)
public:
	ECDHKeyExchange$ECDHEPossessionGenerator();
	void init$();
	virtual ::sun::security::ssl::SSLPossession* createPossession(::sun::security::ssl::HandshakeContext* context) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ECDHKeyExchange$ECDHEPossessionGenerator_h_