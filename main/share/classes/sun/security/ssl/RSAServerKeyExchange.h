#ifndef _sun_security_ssl_RSAServerKeyExchange_h_
#define _sun_security_ssl_RSAServerKeyExchange_h_
//$ class sun.security.ssl.RSAServerKeyExchange
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeProducer;
			class SSLConsumer;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class RSAServerKeyExchange : public ::java::lang::Object {
	$class(RSAServerKeyExchange, 0, ::java::lang::Object)
public:
	RSAServerKeyExchange();
	void init$();
	static ::sun::security::ssl::SSLConsumer* rsaHandshakeConsumer;
	static ::sun::security::ssl::HandshakeProducer* rsaHandshakeProducer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_RSAServerKeyExchange_h_