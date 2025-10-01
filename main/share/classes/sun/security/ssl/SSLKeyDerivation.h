#ifndef _sun_security_ssl_SSLKeyDerivation_h_
#define _sun_security_ssl_SSLKeyDerivation_h_
//$ interface sun.security.ssl.SSLKeyDerivation
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class SSLKeyDerivation : public ::java::lang::Object {
	$interface(SSLKeyDerivation, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::crypto::SecretKey* deriveKey($String* algorithm, ::java::security::spec::AlgorithmParameterSpec* params) {return nullptr;}
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLKeyDerivation_h_