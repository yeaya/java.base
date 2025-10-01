#ifndef _sun_security_ssl_ServerHello$ServerHelloConsumer_h_
#define _sun_security_ssl_ServerHello$ServerHelloConsumer_h_
//$ class sun.security.ssl.ServerHello$ServerHelloConsumer
//$ extends sun.security.ssl.SSLConsumer

#include <sun/security/ssl/SSLConsumer.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class ClientHandshakeContext;
			class ConnectionContext;
			class ServerHello$ServerHelloMessage;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class ServerHello$ServerHelloConsumer : public ::sun::security::ssl::SSLConsumer {
	$class(ServerHello$ServerHelloConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLConsumer)
public:
	ServerHello$ServerHelloConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* message) override;
	void onHelloRetryRequest(::sun::security::ssl::ClientHandshakeContext* chc, ::sun::security::ssl::ServerHello$ServerHelloMessage* helloRetryRequest);
	void onServerHello(::sun::security::ssl::ClientHandshakeContext* chc, ::sun::security::ssl::ServerHello$ServerHelloMessage* serverHello);
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ServerHello$ServerHelloConsumer_h_