#ifndef _sun_security_ssl_ECDHServerKeyExchange_h_
#define _sun_security_ssl_ECDHServerKeyExchange_h_
//$ class sun.security.ssl.ECDHServerKeyExchange
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

class ECDHServerKeyExchange : public ::java::lang::Object {
	$class(ECDHServerKeyExchange, 0, ::java::lang::Object)
public:
	ECDHServerKeyExchange();
	void init$();
	static ::sun::security::ssl::SSLConsumer* ecdheHandshakeConsumer;
	static ::sun::security::ssl::HandshakeProducer* ecdheHandshakeProducer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ECDHServerKeyExchange_h_