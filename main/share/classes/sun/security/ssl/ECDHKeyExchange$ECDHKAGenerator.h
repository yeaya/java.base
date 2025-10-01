#ifndef _sun_security_ssl_ECDHKeyExchange$ECDHKAGenerator_h_
#define _sun_security_ssl_ECDHKeyExchange$ECDHKAGenerator_h_
//$ class sun.security.ssl.ECDHKeyExchange$ECDHKAGenerator
//$ extends sun.security.ssl.SSLKeyAgreementGenerator

#include <sun/security/ssl/SSLKeyAgreementGenerator.h>

namespace sun {
	namespace security {
		namespace ssl {
			class ClientHandshakeContext;
			class HandshakeContext;
			class SSLKeyDerivation;
			class ServerHandshakeContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class ECDHKeyExchange$ECDHKAGenerator : public ::sun::security::ssl::SSLKeyAgreementGenerator {
	$class(ECDHKeyExchange$ECDHKAGenerator, $NO_CLASS_INIT, ::sun::security::ssl::SSLKeyAgreementGenerator)
public:
	ECDHKeyExchange$ECDHKAGenerator();
	void init$();
	::sun::security::ssl::SSLKeyDerivation* createClientKeyDerivation(::sun::security::ssl::ClientHandshakeContext* chc);
	virtual ::sun::security::ssl::SSLKeyDerivation* createKeyDerivation(::sun::security::ssl::HandshakeContext* context) override;
	::sun::security::ssl::SSLKeyDerivation* createServerKeyDerivation(::sun::security::ssl::ServerHandshakeContext* shc);
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ECDHKeyExchange$ECDHKAGenerator_h_