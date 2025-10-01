#ifndef _sun_security_ssl_SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator_h_
#define _sun_security_ssl_SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator_h_
//$ class sun.security.ssl.SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator
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

class SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator : public ::sun::security::ssl::SSLKeyDerivationGenerator {
	$class(SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator, $NO_CLASS_INIT, ::sun::security::ssl::SSLKeyDerivationGenerator)
public:
	SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator();
	void init$();
	virtual ::sun::security::ssl::SSLKeyDerivation* createKeyDerivation(::sun::security::ssl::HandshakeContext* context, ::javax::crypto::SecretKey* secretKey) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator_h_