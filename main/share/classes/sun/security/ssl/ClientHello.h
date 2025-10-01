#ifndef _sun_security_ssl_ClientHello_h_
#define _sun_security_ssl_ClientHello_h_
//$ class sun.security.ssl.ClientHello
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeConsumer;
			class HandshakeProducer;
			class SSLConsumer;
			class SSLProducer;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class ClientHello : public ::java::lang::Object {
	$class(ClientHello, 0, ::java::lang::Object)
public:
	ClientHello();
	void init$();
	static ::sun::security::ssl::SSLProducer* kickstartProducer;
	static ::sun::security::ssl::SSLConsumer* handshakeConsumer;
	static ::sun::security::ssl::HandshakeProducer* handshakeProducer;
	static ::sun::security::ssl::HandshakeConsumer* t12HandshakeConsumer;
	static ::sun::security::ssl::HandshakeConsumer* t13HandshakeConsumer;
	static ::sun::security::ssl::HandshakeConsumer* d12HandshakeConsumer;
	static ::sun::security::ssl::HandshakeConsumer* d13HandshakeConsumer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ClientHello_h_