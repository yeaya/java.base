#ifndef _sun_security_ssl_XDHKeyExchange$XDHEKAGenerator_h_
#define _sun_security_ssl_XDHKeyExchange$XDHEKAGenerator_h_
//$ class sun.security.ssl.XDHKeyExchange$XDHEKAGenerator
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

class XDHKeyExchange$XDHEKAGenerator : public ::sun::security::ssl::SSLKeyAgreementGenerator {
	$class(XDHKeyExchange$XDHEKAGenerator, $NO_CLASS_INIT, ::sun::security::ssl::SSLKeyAgreementGenerator)
public:
	XDHKeyExchange$XDHEKAGenerator();
	void init$();
	virtual ::sun::security::ssl::SSLKeyDerivation* createKeyDerivation(::sun::security::ssl::HandshakeContext* context) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_XDHKeyExchange$XDHEKAGenerator_h_