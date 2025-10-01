#ifndef _sun_security_ssl_DHKeyExchange$DHEKAGenerator_h_
#define _sun_security_ssl_DHKeyExchange$DHEKAGenerator_h_
//$ class sun.security.ssl.DHKeyExchange$DHEKAGenerator
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

class DHKeyExchange$DHEKAGenerator : public ::sun::security::ssl::SSLKeyAgreementGenerator {
	$class(DHKeyExchange$DHEKAGenerator, 0, ::sun::security::ssl::SSLKeyAgreementGenerator)
public:
	DHKeyExchange$DHEKAGenerator();
	void init$();
	virtual ::sun::security::ssl::SSLKeyDerivation* createKeyDerivation(::sun::security::ssl::HandshakeContext* context) override;
	static ::sun::security::ssl::DHKeyExchange$DHEKAGenerator* instance;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_DHKeyExchange$DHEKAGenerator_h_