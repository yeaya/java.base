#ifndef _sun_security_ssl_SSLTrafficKeyDerivation$S30TrafficKeyDerivationGenerator_h_
#define _sun_security_ssl_SSLTrafficKeyDerivation$S30TrafficKeyDerivationGenerator_h_
//$ class sun.security.ssl.SSLTrafficKeyDerivation$S30TrafficKeyDerivationGenerator
//$ extends sun.security.ssl.SSLKeyDerivationGenerator

#include <sun/security/ssl/SSLKeyDerivationGenerator.h>

namespace javax {
	namespace crypto {
		class SecretKey;
	}
}
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

class SSLTrafficKeyDerivation$S30TrafficKeyDerivationGenerator : public ::sun::security::ssl::SSLKeyDerivationGenerator {
	$class(SSLTrafficKeyDerivation$S30TrafficKeyDerivationGenerator, $NO_CLASS_INIT, ::sun::security::ssl::SSLKeyDerivationGenerator)
public:
	SSLTrafficKeyDerivation$S30TrafficKeyDerivationGenerator();
	void init$();
	virtual ::sun::security::ssl::SSLKeyDerivation* createKeyDerivation(::sun::security::ssl::HandshakeContext* context, ::javax::crypto::SecretKey* secretKey) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLTrafficKeyDerivation$S30TrafficKeyDerivationGenerator_h_