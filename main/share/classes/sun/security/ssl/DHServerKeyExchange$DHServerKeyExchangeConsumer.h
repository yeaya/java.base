#ifndef _sun_security_ssl_DHServerKeyExchange$DHServerKeyExchangeConsumer_h_
#define _sun_security_ssl_DHServerKeyExchange$DHServerKeyExchangeConsumer_h_
//$ class sun.security.ssl.DHServerKeyExchange$DHServerKeyExchangeConsumer
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

class DHServerKeyExchange$DHServerKeyExchangeConsumer : public ::sun::security::ssl::SSLConsumer {
	$class(DHServerKeyExchange$DHServerKeyExchangeConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLConsumer)
public:
	DHServerKeyExchange$DHServerKeyExchangeConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_DHServerKeyExchange$DHServerKeyExchangeConsumer_h_