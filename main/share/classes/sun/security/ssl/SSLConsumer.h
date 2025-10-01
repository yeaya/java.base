#ifndef _sun_security_ssl_SSLConsumer_h_
#define _sun_security_ssl_SSLConsumer_h_
//$ interface sun.security.ssl.SSLConsumer
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class SSLConsumer : public ::java::lang::Object {
	$interface(SSLConsumer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* message) {}
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLConsumer_h_