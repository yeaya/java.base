#ifndef _sun_security_ssl_ECDHKeyExchange$ECDHEXDHKAGenerator_h_
#define _sun_security_ssl_ECDHKeyExchange$ECDHEXDHKAGenerator_h_
//$ class sun.security.ssl.ECDHKeyExchange$ECDHEXDHKAGenerator
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

class ECDHKeyExchange$ECDHEXDHKAGenerator : public ::sun::security::ssl::SSLKeyAgreementGenerator {
	$class(ECDHKeyExchange$ECDHEXDHKAGenerator, $NO_CLASS_INIT, ::sun::security::ssl::SSLKeyAgreementGenerator)
public:
	ECDHKeyExchange$ECDHEXDHKAGenerator();
	void init$();
	virtual ::sun::security::ssl::SSLKeyDerivation* createKeyDerivation(::sun::security::ssl::HandshakeContext* context) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ECDHKeyExchange$ECDHEXDHKAGenerator_h_