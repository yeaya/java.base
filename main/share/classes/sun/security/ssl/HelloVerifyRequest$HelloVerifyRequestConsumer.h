#ifndef _sun_security_ssl_HelloVerifyRequest$HelloVerifyRequestConsumer_h_
#define _sun_security_ssl_HelloVerifyRequest$HelloVerifyRequestConsumer_h_
//$ class sun.security.ssl.HelloVerifyRequest$HelloVerifyRequestConsumer
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

class HelloVerifyRequest$HelloVerifyRequestConsumer : public ::sun::security::ssl::SSLConsumer {
	$class(HelloVerifyRequest$HelloVerifyRequestConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLConsumer)
public:
	HelloVerifyRequest$HelloVerifyRequestConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_HelloVerifyRequest$HelloVerifyRequestConsumer_h_