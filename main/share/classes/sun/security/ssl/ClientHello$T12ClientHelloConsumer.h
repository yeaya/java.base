#ifndef _sun_security_ssl_ClientHello$T12ClientHelloConsumer_h_
#define _sun_security_ssl_ClientHello$T12ClientHelloConsumer_h_
//$ class sun.security.ssl.ClientHello$T12ClientHelloConsumer
//$ extends sun.security.ssl.HandshakeConsumer

#include <sun/security/ssl/HandshakeConsumer.h>

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

class ClientHello$T12ClientHelloConsumer : public ::sun::security::ssl::HandshakeConsumer {
	$class(ClientHello$T12ClientHelloConsumer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeConsumer)
public:
	ClientHello$T12ClientHelloConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ClientHello$T12ClientHelloConsumer_h_