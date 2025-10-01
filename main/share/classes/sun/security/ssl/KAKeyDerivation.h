#ifndef _sun_security_ssl_KAKeyDerivation_h_
#define _sun_security_ssl_KAKeyDerivation_h_
//$ class sun.security.ssl.KAKeyDerivation
//$ extends sun.security.ssl.SSLKeyDerivation

#include <sun/security/ssl/SSLKeyDerivation.h>

namespace java {
	namespace security {
		class PrivateKey;
		class PublicKey;
	}
}
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

class KAKeyDerivation : public ::sun::security::ssl::SSLKeyDerivation {
	$class(KAKeyDerivation, $NO_CLASS_INIT, ::sun::security::ssl::SSLKeyDerivation)
public:
	KAKeyDerivation();
	void init$($String* algorithmName, ::sun::security::ssl::HandshakeContext* context, ::java::security::PrivateKey* localPrivateKey, ::java::security::PublicKey* peerPublicKey);
	virtual ::javax::crypto::SecretKey* deriveKey($String* algorithm, ::java::security::spec::AlgorithmParameterSpec* params) override;
	::javax::crypto::SecretKey* t12DeriveKey($String* algorithm, ::java::security::spec::AlgorithmParameterSpec* params);
	::javax::crypto::SecretKey* t13DeriveKey($String* algorithm, ::java::security::spec::AlgorithmParameterSpec* params);
	$String* algorithmName = nullptr;
	::sun::security::ssl::HandshakeContext* context = nullptr;
	::java::security::PrivateKey* localPrivateKey = nullptr;
	::java::security::PublicKey* peerPublicKey = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_KAKeyDerivation_h_