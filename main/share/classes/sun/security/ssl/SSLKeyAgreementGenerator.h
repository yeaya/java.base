#ifndef _sun_security_ssl_SSLKeyAgreementGenerator_h_
#define _sun_security_ssl_SSLKeyAgreementGenerator_h_
//$ interface sun.security.ssl.SSLKeyAgreementGenerator
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class SSLKeyAgreementGenerator : public ::java::lang::Object {
	$interface(SSLKeyAgreementGenerator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::sun::security::ssl::SSLKeyDerivation* createKeyDerivation(::sun::security::ssl::HandshakeContext* context) {return nullptr;}
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLKeyAgreementGenerator_h_