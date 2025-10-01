#ifndef _sun_security_ssl_SSLTrafficKeyDerivation$T13TrafficKeyDerivation_h_
#define _sun_security_ssl_SSLTrafficKeyDerivation$T13TrafficKeyDerivation_h_
//$ class sun.security.ssl.SSLTrafficKeyDerivation$T13TrafficKeyDerivation
//$ extends sun.security.ssl.SSLKeyDerivation

#include <java/lang/Array.h>
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
			class CipherSuite;
			class HandshakeContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLTrafficKeyDerivation$T13TrafficKeyDerivation : public ::sun::security::ssl::SSLKeyDerivation {
	$class(SSLTrafficKeyDerivation$T13TrafficKeyDerivation, $NO_CLASS_INIT, ::sun::security::ssl::SSLKeyDerivation)
public:
	SSLTrafficKeyDerivation$T13TrafficKeyDerivation();
	void init$(::sun::security::ssl::HandshakeContext* context, ::javax::crypto::SecretKey* secret);
	static $bytes* createHkdfInfo($bytes* label, int32_t length);
	virtual ::javax::crypto::SecretKey* deriveKey($String* algorithm, ::java::security::spec::AlgorithmParameterSpec* params) override;
	::sun::security::ssl::CipherSuite* cs = nullptr;
	::javax::crypto::SecretKey* secret = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLTrafficKeyDerivation$T13TrafficKeyDerivation_h_