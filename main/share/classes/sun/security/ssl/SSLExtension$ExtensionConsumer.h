#ifndef _sun_security_ssl_SSLExtension$ExtensionConsumer_h_
#define _sun_security_ssl_SSLExtension$ExtensionConsumer_h_
//$ interface sun.security.ssl.SSLExtension$ExtensionConsumer
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
			class SSLHandshake$HandshakeMessage;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLExtension$ExtensionConsumer : public ::java::lang::Object {
	$interface(SSLExtension$ExtensionConsumer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message, ::java::nio::ByteBuffer* buffer) {}
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLExtension$ExtensionConsumer_h_