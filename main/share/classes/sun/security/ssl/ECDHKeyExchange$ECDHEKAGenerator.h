#ifndef _sun_security_ssl_ECDHKeyExchange$ECDHEKAGenerator_h_
#define _sun_security_ssl_ECDHKeyExchange$ECDHEKAGenerator_h_
//$ class sun.security.ssl.ECDHKeyExchange$ECDHEKAGenerator
//$ extends sun.security.ssl.SSLKeyAgreementGenerator

#include <sun/security/ssl/SSLKeyAgreementGenerator.h>

namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
			class SSLKeyDerivation;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class ECDHKeyExchange$ECDHEKAGenerator : public ::sun::security::ssl::SSLKeyAgreementGenerator {
	$class(ECDHKeyExchange$ECDHEKAGenerator, $NO_CLASS_INIT, ::sun::security::ssl::SSLKeyAgreementGenerator)
public:
	ECDHKeyExchange$ECDHEKAGenerator();
	void init$();
	virtual ::sun::security::ssl::SSLKeyDerivation* createKeyDerivation(::sun::security::ssl::HandshakeContext* context) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ECDHKeyExchange$ECDHEKAGenerator_h_