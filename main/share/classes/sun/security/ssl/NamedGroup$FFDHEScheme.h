#ifndef _sun_security_ssl_NamedGroup$FFDHEScheme_h_
#define _sun_security_ssl_NamedGroup$FFDHEScheme_h_
//$ class sun.security.ssl.NamedGroup$FFDHEScheme
//$ extends sun.security.ssl.NamedGroup$NamedGroupScheme

#include <java/lang/Array.h>
#include <sun/security/ssl/NamedGroup$NamedGroupScheme.h>

namespace java {
	namespace security {
		class AlgorithmConstraints;
		class SecureRandom;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
			class NamedGroup;
			class NamedGroup$ExceptionSupplier;
			class NamedGroupPossession;
			class SSLCredentials;
			class SSLKeyDerivation;
			class SSLPossession;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class NamedGroup$FFDHEScheme : public ::sun::security::ssl::NamedGroup$NamedGroupScheme {
	$class(NamedGroup$FFDHEScheme, 0, ::sun::security::ssl::NamedGroup$NamedGroupScheme)
public:
	NamedGroup$FFDHEScheme();
	void init$();
	virtual ::sun::security::ssl::SSLKeyDerivation* createKeyDerivation(::sun::security::ssl::HandshakeContext* hc) override;
	virtual ::sun::security::ssl::SSLPossession* createPossession(::sun::security::ssl::NamedGroup* ng, ::java::security::SecureRandom* random) override;
	virtual ::sun::security::ssl::SSLCredentials* decodeCredentials(::sun::security::ssl::NamedGroup* ng, $bytes* encoded, ::java::security::AlgorithmConstraints* constraints, ::sun::security::ssl::NamedGroup$ExceptionSupplier* onConstraintFail) override;
	virtual $bytes* encodePossessionPublicKey(::sun::security::ssl::NamedGroupPossession* namedGroupPossession) override;
	static ::sun::security::ssl::NamedGroup$FFDHEScheme* instance;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_NamedGroup$FFDHEScheme_h_