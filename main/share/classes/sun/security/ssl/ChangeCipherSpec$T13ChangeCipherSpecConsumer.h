#ifndef _sun_security_ssl_ChangeCipherSpec$T13ChangeCipherSpecConsumer_h_
#define _sun_security_ssl_ChangeCipherSpec$T13ChangeCipherSpecConsumer_h_
//$ class sun.security.ssl.ChangeCipherSpec$T13ChangeCipherSpecConsumer
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

class ChangeCipherSpec$T13ChangeCipherSpecConsumer : public ::sun::security::ssl::SSLConsumer {
	$class(ChangeCipherSpec$T13ChangeCipherSpecConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLConsumer)
public:
	ChangeCipherSpec$T13ChangeCipherSpecConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ChangeCipherSpec$T13ChangeCipherSpecConsumer_h_