#ifndef _sun_security_ssl_RSAClientKeyExchange$RSAClientKeyExchangeConsumer_h_
#define _sun_security_ssl_RSAClientKeyExchange$RSAClientKeyExchangeConsumer_h_
//$ class sun.security.ssl.RSAClientKeyExchange$RSAClientKeyExchangeConsumer
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

class RSAClientKeyExchange$RSAClientKeyExchangeConsumer : public ::sun::security::ssl::SSLConsumer {
	$class(RSAClientKeyExchange$RSAClientKeyExchangeConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLConsumer)
public:
	RSAClientKeyExchange$RSAClientKeyExchangeConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_RSAClientKeyExchange$RSAClientKeyExchangeConsumer_h_