#ifndef _sun_security_ssl_ClientKeyExchange$ClientKeyExchangeConsumer_h_
#define _sun_security_ssl_ClientKeyExchange$ClientKeyExchangeConsumer_h_
//$ class sun.security.ssl.ClientKeyExchange$ClientKeyExchangeConsumer
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
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class ClientKeyExchange$ClientKeyExchangeConsumer : public ::sun::security::ssl::SSLConsumer {
	$class(ClientKeyExchange$ClientKeyExchangeConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLConsumer)
public:
	ClientKeyExchange$ClientKeyExchangeConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ClientKeyExchange$ClientKeyExchangeConsumer_h_