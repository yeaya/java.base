#ifndef _sun_security_ssl_SupportedVersionsExtension$SHSupportedVersionsConsumer_h_
#define _sun_security_ssl_SupportedVersionsExtension$SHSupportedVersionsConsumer_h_
//$ class sun.security.ssl.SupportedVersionsExtension$SHSupportedVersionsConsumer
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

class SupportedVersionsExtension$SHSupportedVersionsConsumer : public ::sun::security::ssl::SSLExtension$ExtensionConsumer {
	$class(SupportedVersionsExtension$SHSupportedVersionsConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLExtension$ExtensionConsumer)
public:
	SupportedVersionsExtension$SHSupportedVersionsConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message, ::java::nio::ByteBuffer* buffer) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SupportedVersionsExtension$SHSupportedVersionsConsumer_h_