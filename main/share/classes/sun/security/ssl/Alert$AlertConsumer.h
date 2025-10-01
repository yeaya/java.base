#ifndef _sun_security_ssl_Alert$AlertConsumer_h_
#define _sun_security_ssl_Alert$AlertConsumer_h_
//$ class sun.security.ssl.Alert$AlertConsumer
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

class Alert$AlertConsumer : public ::sun::security::ssl::SSLConsumer {
	$class(Alert$AlertConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLConsumer)
public:
	Alert$AlertConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* m) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_Alert$AlertConsumer_h_