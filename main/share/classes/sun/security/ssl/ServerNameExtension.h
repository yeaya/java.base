#ifndef _sun_security_ssl_ServerNameExtension_h_
#define _sun_security_ssl_ServerNameExtension_h_
//$ class sun.security.ssl.ServerNameExtension
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

class ServerNameExtension : public ::java::lang::Object {
	$class(ServerNameExtension, 0, ::java::lang::Object)
public:
	ServerNameExtension();
	void init$();
	static ::sun::security::ssl::HandshakeProducer* chNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* chOnLoadConsumer;
	static ::sun::security::ssl::SSLStringizer* chStringizer;
	static ::sun::security::ssl::HandshakeProducer* shNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* shOnLoadConsumer;
	static ::sun::security::ssl::SSLStringizer* shStringizer;
	static ::sun::security::ssl::HandshakeProducer* eeNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* eeOnLoadConsumer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ServerNameExtension_h_