#ifndef _sun_security_ssl_CookieExtension_h_
#define _sun_security_ssl_CookieExtension_h_
//$ class sun.security.ssl.CookieExtension
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace ssl {
			class CookieExtension$CookieStringizer;
			class HandshakeConsumer;
			class HandshakeProducer;
			class SSLExtension$ExtensionConsumer;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class CookieExtension : public ::java::lang::Object {
	$class(CookieExtension, 0, ::java::lang::Object)
public:
	CookieExtension();
	void init$();
	static ::sun::security::ssl::HandshakeProducer* chNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* chOnLoadConsumer;
	static ::sun::security::ssl::HandshakeConsumer* chOnTradeConsumer;
	static ::sun::security::ssl::HandshakeProducer* hrrNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* hrrOnLoadConsumer;
	static ::sun::security::ssl::HandshakeProducer* hrrNetworkReproducer;
	static ::sun::security::ssl::CookieExtension$CookieStringizer* cookieStringizer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CookieExtension_h_