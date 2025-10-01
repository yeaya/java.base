#ifndef _sun_security_ssl_DHKeyExchange$DHEPossessionGenerator_h_
#define _sun_security_ssl_DHKeyExchange$DHEPossessionGenerator_h_
//$ class sun.security.ssl.DHKeyExchange$DHEPossessionGenerator
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

class DHKeyExchange$DHEPossessionGenerator : public ::sun::security::ssl::SSLPossessionGenerator {
	$class(DHKeyExchange$DHEPossessionGenerator, 0, ::sun::security::ssl::SSLPossessionGenerator)
public:
	DHKeyExchange$DHEPossessionGenerator();
	void init$(bool exportable);
	virtual ::sun::security::ssl::SSLPossession* createPossession(::sun::security::ssl::HandshakeContext* context) override;
	static bool useSmartEphemeralDHKeys;
	static bool useLegacyEphemeralDHKeys;
	static int32_t customizedDHKeySize;
	bool exportable = false;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_DHKeyExchange$DHEPossessionGenerator_h_