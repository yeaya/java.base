#ifndef _sun_security_ssl_SSLSecretDerivation_h_
#define _sun_security_ssl_SSLSecretDerivation_h_
//$ class sun.security.ssl.SSLSecretDerivation
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
			class CipherSuite$HashAlg;
			class HandshakeContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLSecretDerivation : public ::sun::security::ssl::SSLKeyDerivation {
	$class(SSLSecretDerivation, 0, ::sun::security::ssl::SSLKeyDerivation)
public:
	SSLSecretDerivation();
	void init$(::sun::security::ssl::HandshakeContext* context, ::javax::crypto::SecretKey* secret);
	static $bytes* createHkdfInfo($bytes* label, $bytes* context, int32_t length);
	virtual ::javax::crypto::SecretKey* deriveKey($String* algorithm, ::java::security::spec::AlgorithmParameterSpec* params) override;
	::sun::security::ssl::SSLSecretDerivation* forContext(::sun::security::ssl::HandshakeContext* context);
	static $bytes* sha256EmptyDigest;
	static $bytes* sha384EmptyDigest;
	::sun::security::ssl::CipherSuite$HashAlg* hashAlg = nullptr;
	::javax::crypto::SecretKey* secret = nullptr;
	$bytes* transcriptHash = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLSecretDerivation_h_