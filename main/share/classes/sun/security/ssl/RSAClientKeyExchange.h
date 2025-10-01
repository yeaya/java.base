#ifndef _sun_security_ssl_RSAClientKeyExchange_h_
#define _sun_security_ssl_RSAClientKeyExchange_h_
//$ class sun.security.ssl.RSAClientKeyExchange
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

class RSAClientKeyExchange : public ::java::lang::Object {
	$class(RSAClientKeyExchange, 0, ::java::lang::Object)
public:
	RSAClientKeyExchange();
	void init$();
	static ::sun::security::ssl::SSLConsumer* rsaHandshakeConsumer;
	static ::sun::security::ssl::HandshakeProducer* rsaHandshakeProducer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_RSAClientKeyExchange_h_