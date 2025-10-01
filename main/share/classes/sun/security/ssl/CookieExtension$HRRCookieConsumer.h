#ifndef _sun_security_ssl_CookieExtension$HRRCookieConsumer_h_
#define _sun_security_ssl_CookieExtension$HRRCookieConsumer_h_
//$ class sun.security.ssl.CookieExtension$HRRCookieConsumer
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

class CookieExtension$HRRCookieConsumer : public ::sun::security::ssl::SSLExtension$ExtensionConsumer {
	$class(CookieExtension$HRRCookieConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLExtension$ExtensionConsumer)
public:
	CookieExtension$HRRCookieConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message, ::java::nio::ByteBuffer* buffer) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CookieExtension$HRRCookieConsumer_h_