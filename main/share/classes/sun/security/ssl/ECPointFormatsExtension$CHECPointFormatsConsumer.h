#ifndef _sun_security_ssl_ECPointFormatsExtension$CHECPointFormatsConsumer_h_
#define _sun_security_ssl_ECPointFormatsExtension$CHECPointFormatsConsumer_h_
//$ class sun.security.ssl.ECPointFormatsExtension$CHECPointFormatsConsumer
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

class ECPointFormatsExtension$CHECPointFormatsConsumer : public ::sun::security::ssl::SSLExtension$ExtensionConsumer {
	$class(ECPointFormatsExtension$CHECPointFormatsConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLExtension$ExtensionConsumer)
public:
	ECPointFormatsExtension$CHECPointFormatsConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message, ::java::nio::ByteBuffer* buffer) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ECPointFormatsExtension$CHECPointFormatsConsumer_h_