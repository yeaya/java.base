#ifndef _sun_security_ssl_SupportedVersionsExtension_h_
#define _sun_security_ssl_SupportedVersionsExtension_h_
//$ class sun.security.ssl.SupportedVersionsExtension
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeProducer;
			class SSLExtension$ExtensionConsumer;
			class SSLStringizer;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SupportedVersionsExtension : public ::java::lang::Object {
	$class(SupportedVersionsExtension, 0, ::java::lang::Object)
public:
	SupportedVersionsExtension();
	void init$();
	static ::sun::security::ssl::HandshakeProducer* chNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* chOnLoadConsumer;
	static ::sun::security::ssl::SSLStringizer* chStringizer;
	static ::sun::security::ssl::HandshakeProducer* shNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* shOnLoadConsumer;
	static ::sun::security::ssl::SSLStringizer* shStringizer;
	static ::sun::security::ssl::HandshakeProducer* hrrNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* hrrOnLoadConsumer;
	static ::sun::security::ssl::HandshakeProducer* hrrReproducer;
	static ::sun::security::ssl::SSLStringizer* hrrStringizer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SupportedVersionsExtension_h_