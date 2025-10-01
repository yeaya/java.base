#ifndef _sun_security_ssl_DHServerKeyExchange_h_
#define _sun_security_ssl_DHServerKeyExchange_h_
//$ class sun.security.ssl.DHServerKeyExchange
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

class DHServerKeyExchange : public ::java::lang::Object {
	$class(DHServerKeyExchange, 0, ::java::lang::Object)
public:
	DHServerKeyExchange();
	void init$();
	static ::sun::security::ssl::SSLConsumer* dhHandshakeConsumer;
	static ::sun::security::ssl::HandshakeProducer* dhHandshakeProducer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_DHServerKeyExchange_h_