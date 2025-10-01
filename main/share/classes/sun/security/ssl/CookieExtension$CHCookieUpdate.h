#ifndef _sun_security_ssl_CookieExtension$CHCookieUpdate_h_
#define _sun_security_ssl_CookieExtension$CHCookieUpdate_h_
//$ class sun.security.ssl.CookieExtension$CHCookieUpdate
//$ extends sun.security.ssl.HandshakeConsumer

#include <sun/security/ssl/HandshakeConsumer.h>

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

class CookieExtension$CHCookieUpdate : public ::sun::security::ssl::HandshakeConsumer {
	$class(CookieExtension$CHCookieUpdate, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeConsumer)
public:
	CookieExtension$CHCookieUpdate();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CookieExtension$CHCookieUpdate_h_