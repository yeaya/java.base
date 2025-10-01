#ifndef _sun_security_ssl_ClientKeyExchange_h_
#define _sun_security_ssl_ClientKeyExchange_h_
//$ class sun.security.ssl.ClientKeyExchange
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

class ClientKeyExchange : public ::java::lang::Object {
	$class(ClientKeyExchange, 0, ::java::lang::Object)
public:
	ClientKeyExchange();
	void init$();
	static ::sun::security::ssl::SSLConsumer* handshakeConsumer;
	static ::sun::security::ssl::HandshakeProducer* handshakeProducer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ClientKeyExchange_h_