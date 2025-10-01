#ifndef _sun_security_ssl_ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer_h_
#define _sun_security_ssl_ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer_h_
//$ class sun.security.ssl.ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer
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
			class ConnectionContext;
			class NamedGroup;
			class ServerHandshakeContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer : public ::sun::security::ssl::SSLConsumer {
	$class(ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLConsumer)
public:
	ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* message) override;
	static void lambda$consume$0(::sun::security::ssl::ServerHandshakeContext* shc, ::sun::security::ssl::NamedGroup* ng, $String* s);
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ECDHClientKeyExchange$ECDHEClientKeyExchangeConsumer_h_