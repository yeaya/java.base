#ifndef _sun_security_ssl_KeyShareExtension_h_
#define _sun_security_ssl_KeyShareExtension_h_
//$ class sun.security.ssl.KeyShareExtension
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeAbsence;
			class HandshakeProducer;
			class SSLExtension$ExtensionConsumer;
			class SSLStringizer;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class KeyShareExtension : public ::java::lang::Object {
	$class(KeyShareExtension, 0, ::java::lang::Object)
public:
	KeyShareExtension();
	void init$();
	static ::sun::security::ssl::HandshakeProducer* chNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* chOnLoadConsumer;
	static ::sun::security::ssl::HandshakeAbsence* chOnTradAbsence;
	static ::sun::security::ssl::SSLStringizer* chStringizer;
	static ::sun::security::ssl::HandshakeProducer* shNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* shOnLoadConsumer;
	static ::sun::security::ssl::HandshakeAbsence* shOnLoadAbsence;
	static ::sun::security::ssl::SSLStringizer* shStringizer;
	static ::sun::security::ssl::HandshakeProducer* hrrNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* hrrOnLoadConsumer;
	static ::sun::security::ssl::HandshakeProducer* hrrNetworkReproducer;
	static ::sun::security::ssl::SSLStringizer* hrrStringizer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_KeyShareExtension_h_