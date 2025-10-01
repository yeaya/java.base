#ifndef _sun_security_ssl_SSLPossessionGenerator_h_
#define _sun_security_ssl_SSLPossessionGenerator_h_
//$ interface sun.security.ssl.SSLPossessionGenerator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
			class SSLPossession;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLPossessionGenerator : public ::java::lang::Object {
	$interface(SSLPossessionGenerator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::sun::security::ssl::SSLPossession* createPossession(::sun::security::ssl::HandshakeContext* handshakeContext) {return nullptr;}
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLPossessionGenerator_h_