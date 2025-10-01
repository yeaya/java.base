#ifndef _sun_security_ssl_ECPointFormatsExtension_h_
#define _sun_security_ssl_ECPointFormatsExtension_h_
//$ class sun.security.ssl.ECPointFormatsExtension
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

class ECPointFormatsExtension : public ::java::lang::Object {
	$class(ECPointFormatsExtension, 0, ::java::lang::Object)
public:
	ECPointFormatsExtension();
	void init$();
	static ::sun::security::ssl::HandshakeProducer* chNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* chOnLoadConsumer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* shOnLoadConsumer;
	static ::sun::security::ssl::SSLStringizer* epfStringizer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ECPointFormatsExtension_h_