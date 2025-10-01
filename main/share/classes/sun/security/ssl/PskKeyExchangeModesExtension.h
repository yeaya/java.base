#ifndef _sun_security_ssl_PskKeyExchangeModesExtension_h_
#define _sun_security_ssl_PskKeyExchangeModesExtension_h_
//$ class sun.security.ssl.PskKeyExchangeModesExtension
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

class PskKeyExchangeModesExtension : public ::java::lang::Object {
	$class(PskKeyExchangeModesExtension, 0, ::java::lang::Object)
public:
	PskKeyExchangeModesExtension();
	void init$();
	static ::sun::security::ssl::HandshakeProducer* chNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* chOnLoadConsumer;
	static ::sun::security::ssl::HandshakeAbsence* chOnLoadAbsence;
	static ::sun::security::ssl::HandshakeAbsence* chOnTradeAbsence;
	static ::sun::security::ssl::SSLStringizer* pkemStringizer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_PskKeyExchangeModesExtension_h_