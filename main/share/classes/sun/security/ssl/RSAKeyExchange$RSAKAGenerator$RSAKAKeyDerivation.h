#ifndef _sun_security_ssl_RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation_h_
#define _sun_security_ssl_RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation_h_
//$ class sun.security.ssl.RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation
//$ extends sun.security.ssl.SSLKeyDerivation

#include <sun/security/ssl/SSLKeyDerivation.h>

namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}
namespace javax {
	namespace crypto {
		class SecretKey;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation : public ::sun::security::ssl::SSLKeyDerivation {
	$class(RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation, $NO_CLASS_INIT, ::sun::security::ssl::SSLKeyDerivation)
public:
	RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation();
	void init$(::sun::security::ssl::HandshakeContext* context, ::javax::crypto::SecretKey* preMasterSecret);
	virtual ::javax::crypto::SecretKey* deriveKey($String* algorithm, ::java::security::spec::AlgorithmParameterSpec* params) override;
	::sun::security::ssl::HandshakeContext* context = nullptr;
	::javax::crypto::SecretKey* preMasterSecret = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation_h_