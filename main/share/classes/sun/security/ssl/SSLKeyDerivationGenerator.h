#ifndef _sun_security_ssl_SSLKeyDerivationGenerator_h_
#define _sun_security_ssl_SSLKeyDerivationGenerator_h_
//$ interface sun.security.ssl.SSLKeyDerivationGenerator
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class SSLKeyDerivationGenerator : public ::java::lang::Object {
	$interface(SSLKeyDerivationGenerator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::sun::security::ssl::SSLKeyDerivation* createKeyDerivation(::sun::security::ssl::HandshakeContext* context, ::javax::crypto::SecretKey* secretKey) {return nullptr;}
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLKeyDerivationGenerator_h_