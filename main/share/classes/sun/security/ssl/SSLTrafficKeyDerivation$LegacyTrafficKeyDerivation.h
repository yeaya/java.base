#ifndef _sun_security_ssl_SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation_h_
#define _sun_security_ssl_SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation_h_
//$ class sun.security.ssl.SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation
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
		namespace internal {
			namespace spec {
				class TlsKeyMaterialSpec;
			}
		}
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

class SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation : public ::sun::security::ssl::SSLKeyDerivation {
	$class(SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation, $NO_CLASS_INIT, ::sun::security::ssl::SSLKeyDerivation)
public:
	SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation();
	void init$(::sun::security::ssl::HandshakeContext* context, ::javax::crypto::SecretKey* masterSecret);
	virtual ::javax::crypto::SecretKey* deriveKey($String* algorithm, ::java::security::spec::AlgorithmParameterSpec* params) override;
	::javax::crypto::SecretKey* getTrafficKey($String* algorithm);
	::sun::security::internal::spec::TlsKeyMaterialSpec* keyMaterialSpec = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation_h_