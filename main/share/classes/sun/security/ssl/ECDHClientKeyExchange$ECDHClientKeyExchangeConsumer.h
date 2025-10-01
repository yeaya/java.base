#ifndef _sun_security_ssl_ECDHClientKeyExchange$ECDHClientKeyExchangeConsumer_h_
#define _sun_security_ssl_ECDHClientKeyExchange$ECDHClientKeyExchangeConsumer_h_
//$ class sun.security.ssl.ECDHClientKeyExchange$ECDHClientKeyExchangeConsumer
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

class ECDHClientKeyExchange$ECDHClientKeyExchangeConsumer : public ::sun::security::ssl::SSLConsumer {
	$class(ECDHClientKeyExchange$ECDHClientKeyExchangeConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLConsumer)
public:
	ECDHClientKeyExchange$ECDHClientKeyExchangeConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* message) override;
	static void lambda$consume$0(::sun::security::ssl::ServerHandshakeContext* shc, ::sun::security::ssl::NamedGroup* ng, $String* s);
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ECDHClientKeyExchange$ECDHClientKeyExchangeConsumer_h_