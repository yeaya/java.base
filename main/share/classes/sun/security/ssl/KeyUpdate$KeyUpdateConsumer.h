#ifndef _sun_security_ssl_KeyUpdate$KeyUpdateConsumer_h_
#define _sun_security_ssl_KeyUpdate$KeyUpdateConsumer_h_
//$ class sun.security.ssl.KeyUpdate$KeyUpdateConsumer
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

class KeyUpdate$KeyUpdateConsumer : public ::sun::security::ssl::SSLConsumer {
	$class(KeyUpdate$KeyUpdateConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLConsumer)
public:
	KeyUpdate$KeyUpdateConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_KeyUpdate$KeyUpdateConsumer_h_