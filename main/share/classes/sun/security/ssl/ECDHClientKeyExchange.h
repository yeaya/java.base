#ifndef _sun_security_ssl_ECDHClientKeyExchange_h_
#define _sun_security_ssl_ECDHClientKeyExchange_h_
//$ class sun.security.ssl.ECDHClientKeyExchange
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

class ECDHClientKeyExchange : public ::java::lang::Object {
	$class(ECDHClientKeyExchange, 0, ::java::lang::Object)
public:
	ECDHClientKeyExchange();
	void init$();
	static ::sun::security::ssl::SSLConsumer* ecdhHandshakeConsumer;
	static ::sun::security::ssl::HandshakeProducer* ecdhHandshakeProducer;
	static ::sun::security::ssl::SSLConsumer* ecdheHandshakeConsumer;
	static ::sun::security::ssl::HandshakeProducer* ecdheHandshakeProducer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ECDHClientKeyExchange_h_