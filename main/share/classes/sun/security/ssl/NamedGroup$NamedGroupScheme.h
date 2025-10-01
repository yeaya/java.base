#ifndef _sun_security_ssl_NamedGroup$NamedGroupScheme_h_
#define _sun_security_ssl_NamedGroup$NamedGroupScheme_h_
//$ interface sun.security.ssl.NamedGroup$NamedGroupScheme
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class AlgorithmConstraints;
		class PublicKey;
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

class NamedGroup$NamedGroupScheme : public ::java::lang::Object {
	$interface(NamedGroup$NamedGroupScheme, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void checkConstraints(::java::security::PublicKey* publicKey, ::java::security::AlgorithmConstraints* constraints, ::sun::security::ssl::NamedGroup$ExceptionSupplier* onConstraintFail);
	virtual ::sun::security::ssl::SSLKeyDerivation* createKeyDerivation(::sun::security::ssl::HandshakeContext* hc) {return nullptr;}
	virtual ::sun::security::ssl::SSLPossession* createPossession(::sun::security::ssl::NamedGroup* ng, ::java::security::SecureRandom* random) {return nullptr;}
	virtual ::sun::security::ssl::SSLCredentials* decodeCredentials(::sun::security::ssl::NamedGroup* ng, $bytes* encoded, ::java::security::AlgorithmConstraints* constraints, ::sun::security::ssl::NamedGroup$ExceptionSupplier* onConstraintFail) {return nullptr;}
	virtual $bytes* encodePossessionPublicKey(::sun::security::ssl::NamedGroupPossession* namedGroupPossession) {return nullptr;}
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_NamedGroup$NamedGroupScheme_h_