#ifndef _sun_security_ssl_RSAKeyExchange$RSAKAGenerator_h_
#define _sun_security_ssl_RSAKeyExchange$RSAKAGenerator_h_
//$ class sun.security.ssl.RSAKeyExchange$RSAKAGenerator
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

class RSAKeyExchange$RSAKAGenerator : public ::sun::security::ssl::SSLKeyAgreementGenerator {
	$class(RSAKeyExchange$RSAKAGenerator, $NO_CLASS_INIT, ::sun::security::ssl::SSLKeyAgreementGenerator)
public:
	RSAKeyExchange$RSAKAGenerator();
	void init$();
	virtual ::sun::security::ssl::SSLKeyDerivation* createKeyDerivation(::sun::security::ssl::HandshakeContext* context) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_RSAKeyExchange$RSAKAGenerator_h_