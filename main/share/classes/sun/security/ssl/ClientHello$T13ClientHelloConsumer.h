#ifndef _sun_security_ssl_ClientHello$T13ClientHelloConsumer_h_
#define _sun_security_ssl_ClientHello$T13ClientHelloConsumer_h_
//$ class sun.security.ssl.ClientHello$T13ClientHelloConsumer
//$ extends sun.security.ssl.HandshakeConsumer

#include <sun/security/ssl/HandshakeConsumer.h>

namespace sun {
	namespace security {
		namespace ssl {
			class ClientHello$ClientHelloMessage;
			class ConnectionContext;
			class SSLHandshake$HandshakeMessage;
			class ServerHandshakeContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class ClientHello$T13ClientHelloConsumer : public ::sun::security::ssl::HandshakeConsumer {
	$class(ClientHello$T13ClientHelloConsumer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeConsumer)
public:
	ClientHello$T13ClientHelloConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
	void goHelloRetryRequest(::sun::security::ssl::ServerHandshakeContext* shc, ::sun::security::ssl::ClientHello$ClientHelloMessage* clientHello);
	void goServerHello(::sun::security::ssl::ServerHandshakeContext* shc, ::sun::security::ssl::ClientHello$ClientHelloMessage* clientHello);
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ClientHello$T13ClientHelloConsumer_h_