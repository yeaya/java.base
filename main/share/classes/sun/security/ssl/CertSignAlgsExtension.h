#ifndef _sun_security_ssl_CertSignAlgsExtension_h_
#define _sun_security_ssl_CertSignAlgsExtension_h_
//$ class sun.security.ssl.CertSignAlgsExtension
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

class CertSignAlgsExtension : public ::java::lang::Object {
	$class(CertSignAlgsExtension, 0, ::java::lang::Object)
public:
	CertSignAlgsExtension();
	void init$();
	static ::sun::security::ssl::HandshakeProducer* chNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* chOnLoadConsumer;
	static ::sun::security::ssl::HandshakeConsumer* chOnTradeConsumer;
	static ::sun::security::ssl::HandshakeProducer* crNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* crOnLoadConsumer;
	static ::sun::security::ssl::HandshakeConsumer* crOnTradeConsumer;
	static ::sun::security::ssl::SSLStringizer* ssStringizer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertSignAlgsExtension_h_