#ifndef _sun_security_ssl_AlpnExtension_h_
#define _sun_security_ssl_AlpnExtension_h_
//$ class sun.security.ssl.AlpnExtension
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}
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

class AlpnExtension : public ::java::lang::Object {
	$class(AlpnExtension, 0, ::java::lang::Object)
public:
	AlpnExtension();
	void init$();
	static $String* lambda$static$0();
	static ::sun::security::ssl::HandshakeProducer* chNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* chOnLoadConsumer;
	static ::sun::security::ssl::HandshakeAbsence* chOnLoadAbsence;
	static ::sun::security::ssl::HandshakeProducer* shNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* shOnLoadConsumer;
	static ::sun::security::ssl::HandshakeAbsence* shOnLoadAbsence;
	static ::sun::security::ssl::HandshakeProducer* eeNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* eeOnLoadConsumer;
	static ::sun::security::ssl::HandshakeAbsence* eeOnLoadAbsence;
	static ::sun::security::ssl::SSLStringizer* alpnStringizer;
	static ::java::nio::charset::Charset* alpnCharset;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_AlpnExtension_h_