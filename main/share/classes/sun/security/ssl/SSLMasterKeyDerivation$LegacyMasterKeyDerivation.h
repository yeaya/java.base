#ifndef _sun_security_ssl_SSLMasterKeyDerivation$LegacyMasterKeyDerivation_h_
#define _sun_security_ssl_SSLMasterKeyDerivation$LegacyMasterKeyDerivation_h_
//$ class sun.security.ssl.SSLMasterKeyDerivation$LegacyMasterKeyDerivation
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

class SSLMasterKeyDerivation$LegacyMasterKeyDerivation : public ::sun::security::ssl::SSLKeyDerivation {
	$class(SSLMasterKeyDerivation$LegacyMasterKeyDerivation, $NO_CLASS_INIT, ::sun::security::ssl::SSLKeyDerivation)
public:
	SSLMasterKeyDerivation$LegacyMasterKeyDerivation();
	void init$(::sun::security::ssl::HandshakeContext* context, ::javax::crypto::SecretKey* preMasterSecret);
	virtual ::javax::crypto::SecretKey* deriveKey($String* algorithm, ::java::security::spec::AlgorithmParameterSpec* params) override;
	::sun::security::ssl::HandshakeContext* context = nullptr;
	::javax::crypto::SecretKey* preMasterSecret = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLMasterKeyDerivation$LegacyMasterKeyDerivation_h_