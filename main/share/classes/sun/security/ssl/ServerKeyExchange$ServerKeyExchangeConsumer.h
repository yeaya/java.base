#ifndef _sun_security_ssl_ServerKeyExchange$ServerKeyExchangeConsumer_h_
#define _sun_security_ssl_ServerKeyExchange$ServerKeyExchangeConsumer_h_
//$ class sun.security.ssl.ServerKeyExchange$ServerKeyExchangeConsumer
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

class ServerKeyExchange$ServerKeyExchangeConsumer : public ::sun::security::ssl::SSLConsumer {
	$class(ServerKeyExchange$ServerKeyExchangeConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLConsumer)
public:
	ServerKeyExchange$ServerKeyExchangeConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ServerKeyExchange$ServerKeyExchangeConsumer_h_