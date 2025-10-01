#ifndef _sun_security_ssl_HandshakeConsumer_h_
#define _sun_security_ssl_HandshakeConsumer_h_
//$ interface sun.security.ssl.HandshakeConsumer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace ssl {
			class ConnectionContext;
			class SSLHandshake$HandshakeMessage;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class HandshakeConsumer : public ::java::lang::Object {
	$interface(HandshakeConsumer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) {}
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_HandshakeConsumer_h_