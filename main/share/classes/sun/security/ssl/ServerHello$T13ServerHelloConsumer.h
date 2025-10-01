#ifndef _sun_security_ssl_ServerHello$T13ServerHelloConsumer_h_
#define _sun_security_ssl_ServerHello$T13ServerHelloConsumer_h_
//$ class sun.security.ssl.ServerHello$T13ServerHelloConsumer
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

class ServerHello$T13ServerHelloConsumer : public ::sun::security::ssl::HandshakeConsumer {
	$class(ServerHello$T13ServerHelloConsumer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeConsumer)
public:
	ServerHello$T13ServerHelloConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ServerHello$T13ServerHelloConsumer_h_