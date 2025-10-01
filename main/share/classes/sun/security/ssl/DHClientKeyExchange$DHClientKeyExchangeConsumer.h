#ifndef _sun_security_ssl_DHClientKeyExchange$DHClientKeyExchangeConsumer_h_
#define _sun_security_ssl_DHClientKeyExchange$DHClientKeyExchangeConsumer_h_
//$ class sun.security.ssl.DHClientKeyExchange$DHClientKeyExchangeConsumer
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

class DHClientKeyExchange$DHClientKeyExchangeConsumer : public ::sun::security::ssl::SSLConsumer {
	$class(DHClientKeyExchange$DHClientKeyExchangeConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLConsumer)
public:
	DHClientKeyExchange$DHClientKeyExchangeConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_DHClientKeyExchange$DHClientKeyExchangeConsumer_h_