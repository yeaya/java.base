#ifndef _sun_security_ssl_HelloRequest$HelloRequestConsumer_h_
#define _sun_security_ssl_HelloRequest$HelloRequestConsumer_h_
//$ class sun.security.ssl.HelloRequest$HelloRequestConsumer
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

class HelloRequest$HelloRequestConsumer : public ::sun::security::ssl::SSLConsumer {
	$class(HelloRequest$HelloRequestConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLConsumer)
public:
	HelloRequest$HelloRequestConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_HelloRequest$HelloRequestConsumer_h_