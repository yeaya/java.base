#ifndef _sun_security_ssl_KeyShareExtension$SHKeyShareConsumer_h_
#define _sun_security_ssl_KeyShareExtension$SHKeyShareConsumer_h_
//$ class sun.security.ssl.KeyShareExtension$SHKeyShareConsumer
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
			class ClientHandshakeContext;
			class ConnectionContext;
			class SSLHandshake$HandshakeMessage;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class KeyShareExtension$SHKeyShareConsumer : public ::sun::security::ssl::SSLExtension$ExtensionConsumer {
	$class(KeyShareExtension$SHKeyShareConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLExtension$ExtensionConsumer)
public:
	KeyShareExtension$SHKeyShareConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message, ::java::nio::ByteBuffer* buffer) override;
	static void lambda$consume$0(::sun::security::ssl::ClientHandshakeContext* chc, $String* s);
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_KeyShareExtension$SHKeyShareConsumer_h_