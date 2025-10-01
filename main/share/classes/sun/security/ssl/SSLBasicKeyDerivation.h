#ifndef _sun_security_ssl_SSLBasicKeyDerivation_h_
#define _sun_security_ssl_SSLBasicKeyDerivation_h_
//$ class sun.security.ssl.SSLBasicKeyDerivation
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

class SSLBasicKeyDerivation : public ::sun::security::ssl::SSLKeyDerivation {
	$class(SSLBasicKeyDerivation, $NO_CLASS_INIT, ::sun::security::ssl::SSLKeyDerivation)
public:
	SSLBasicKeyDerivation();
	void init$(::javax::crypto::SecretKey* secret, $String* hashAlg, $bytes* label, $bytes* context, int32_t length);
	static $bytes* createHkdfInfo($bytes* label, $bytes* context, int32_t length);
	virtual ::javax::crypto::SecretKey* deriveKey($String* algorithm, ::java::security::spec::AlgorithmParameterSpec* keySpec) override;
	$String* hashAlg = nullptr;
	::javax::crypto::SecretKey* secret = nullptr;
	$bytes* hkdfInfo = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLBasicKeyDerivation_h_