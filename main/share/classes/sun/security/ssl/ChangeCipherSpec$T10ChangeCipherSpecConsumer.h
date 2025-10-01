#ifndef _sun_security_ssl_ChangeCipherSpec$T10ChangeCipherSpecConsumer_h_
#define _sun_security_ssl_ChangeCipherSpec$T10ChangeCipherSpecConsumer_h_
//$ class sun.security.ssl.ChangeCipherSpec$T10ChangeCipherSpecConsumer
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

class ChangeCipherSpec$T10ChangeCipherSpecConsumer : public ::sun::security::ssl::SSLConsumer {
	$class(ChangeCipherSpec$T10ChangeCipherSpecConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLConsumer)
public:
	ChangeCipherSpec$T10ChangeCipherSpecConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ChangeCipherSpec$T10ChangeCipherSpecConsumer_h_