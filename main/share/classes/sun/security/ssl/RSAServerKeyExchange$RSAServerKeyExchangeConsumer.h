#ifndef _sun_security_ssl_RSAServerKeyExchange$RSAServerKeyExchangeConsumer_h_
#define _sun_security_ssl_RSAServerKeyExchange$RSAServerKeyExchangeConsumer_h_
//$ class sun.security.ssl.RSAServerKeyExchange$RSAServerKeyExchangeConsumer
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

class RSAServerKeyExchange$RSAServerKeyExchangeConsumer : public ::sun::security::ssl::SSLConsumer {
	$class(RSAServerKeyExchange$RSAServerKeyExchangeConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLConsumer)
public:
	RSAServerKeyExchange$RSAServerKeyExchangeConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_RSAServerKeyExchange$RSAServerKeyExchangeConsumer_h_