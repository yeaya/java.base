#ifndef _sun_security_ssl_CertificateAuthoritiesExtension_h_
#define _sun_security_ssl_CertificateAuthoritiesExtension_h_
//$ class sun.security.ssl.CertificateAuthoritiesExtension
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

class CertificateAuthoritiesExtension : public ::java::lang::Object {
	$class(CertificateAuthoritiesExtension, 0, ::java::lang::Object)
public:
	CertificateAuthoritiesExtension();
	void init$();
	static ::sun::security::ssl::HandshakeProducer* chNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* chOnLoadConsumer;
	static ::sun::security::ssl::HandshakeProducer* crNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* crOnLoadConsumer;
	static ::sun::security::ssl::SSLStringizer* ssStringizer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateAuthoritiesExtension_h_