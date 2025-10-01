#ifndef _sun_security_ssl_CookieExtension$CHCookieConsumer_h_
#define _sun_security_ssl_CookieExtension$CHCookieConsumer_h_
//$ class sun.security.ssl.CookieExtension$CHCookieConsumer
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

class CookieExtension$CHCookieConsumer : public ::sun::security::ssl::SSLExtension$ExtensionConsumer {
	$class(CookieExtension$CHCookieConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLExtension$ExtensionConsumer)
public:
	CookieExtension$CHCookieConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message, ::java::nio::ByteBuffer* buffer) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CookieExtension$CHCookieConsumer_h_