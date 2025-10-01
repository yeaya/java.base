#ifndef _sun_security_ssl_ServerKeyExchange_h_
#define _sun_security_ssl_ServerKeyExchange_h_
//$ class sun.security.ssl.ServerKeyExchange
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

class ServerKeyExchange : public ::java::lang::Object {
	$class(ServerKeyExchange, 0, ::java::lang::Object)
public:
	ServerKeyExchange();
	void init$();
	static ::sun::security::ssl::SSLConsumer* handshakeConsumer;
	static ::sun::security::ssl::HandshakeProducer* handshakeProducer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ServerKeyExchange_h_