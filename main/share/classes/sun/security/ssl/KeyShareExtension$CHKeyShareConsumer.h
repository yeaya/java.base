#ifndef _sun_security_ssl_KeyShareExtension$CHKeyShareConsumer_h_
#define _sun_security_ssl_KeyShareExtension$CHKeyShareConsumer_h_
//$ class sun.security.ssl.KeyShareExtension$CHKeyShareConsumer
//$ extends sun.security.ssl.SSLExtension$ExtensionConsumer

#include <sun/security/ssl/SSLExtension$ExtensionConsumer.h>

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

class KeyShareExtension$CHKeyShareConsumer : public ::sun::security::ssl::SSLExtension$ExtensionConsumer {
	$class(KeyShareExtension$CHKeyShareConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLExtension$ExtensionConsumer)
public:
	KeyShareExtension$CHKeyShareConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message, ::java::nio::ByteBuffer* buffer) override;
	static void lambda$consume$0($String* s);
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_KeyShareExtension$CHKeyShareConsumer_h_