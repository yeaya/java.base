#ifndef _sun_security_ssl_ClientHello$D12ClientHelloConsumer_h_
#define _sun_security_ssl_ClientHello$D12ClientHelloConsumer_h_
//$ class sun.security.ssl.ClientHello$D12ClientHelloConsumer
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

class ClientHello$D12ClientHelloConsumer : public ::sun::security::ssl::HandshakeConsumer {
	$class(ClientHello$D12ClientHelloConsumer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeConsumer)
public:
	ClientHello$D12ClientHelloConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ClientHello$D12ClientHelloConsumer_h_