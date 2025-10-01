#ifndef _sun_security_ssl_SignatureAlgorithmsExtension_h_
#define _sun_security_ssl_SignatureAlgorithmsExtension_h_
//$ class sun.security.ssl.SignatureAlgorithmsExtension
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeAbsence;
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

class SignatureAlgorithmsExtension : public ::java::lang::Object {
	$class(SignatureAlgorithmsExtension, 0, ::java::lang::Object)
public:
	SignatureAlgorithmsExtension();
	void init$();
	static ::sun::security::ssl::HandshakeProducer* chNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* chOnLoadConsumer;
	static ::sun::security::ssl::HandshakeAbsence* chOnLoadAbsence;
	static ::sun::security::ssl::HandshakeConsumer* chOnTradeConsumer;
	static ::sun::security::ssl::HandshakeAbsence* chOnTradeAbsence;
	static ::sun::security::ssl::HandshakeProducer* crNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* crOnLoadConsumer;
	static ::sun::security::ssl::HandshakeAbsence* crOnLoadAbsence;
	static ::sun::security::ssl::HandshakeConsumer* crOnTradeConsumer;
	static ::sun::security::ssl::SSLStringizer* ssStringizer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SignatureAlgorithmsExtension_h_