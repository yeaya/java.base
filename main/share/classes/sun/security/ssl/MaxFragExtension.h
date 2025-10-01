#ifndef _sun_security_ssl_MaxFragExtension_h_
#define _sun_security_ssl_MaxFragExtension_h_
//$ class sun.security.ssl.MaxFragExtension
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeConsumer;
			class HandshakeProducer;
			class SSLExtension$ExtensionConsumer;
			class SSLStringizer;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class MaxFragExtension : public ::java::lang::Object {
	$class(MaxFragExtension, 0, ::java::lang::Object)
public:
	MaxFragExtension();
	void init$();
	static ::sun::security::ssl::HandshakeProducer* chNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* chOnLoadConsumer;
	static ::sun::security::ssl::HandshakeProducer* shNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* shOnLoadConsumer;
	static ::sun::security::ssl::HandshakeConsumer* shOnTradeConsumer;
	static ::sun::security::ssl::HandshakeProducer* eeNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* eeOnLoadConsumer;
	static ::sun::security::ssl::HandshakeConsumer* eeOnTradeConsumer;
	static ::sun::security::ssl::SSLStringizer* maxFragLenStringizer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_MaxFragExtension_h_