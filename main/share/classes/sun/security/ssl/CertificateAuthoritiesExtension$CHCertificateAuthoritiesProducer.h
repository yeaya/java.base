#ifndef _sun_security_ssl_CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer_h_
#define _sun_security_ssl_CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer_h_
//$ class sun.security.ssl.CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer
//$ extends sun.security.ssl.HandshakeProducer

#include <java/lang/Array.h>
#include <sun/security/ssl/HandshakeProducer.h>

namespace sun {
	namespace security {
		namespace ssl {
			class ConnectionContext;
			class SSLHandshake$HandshakeMessage;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer : public ::sun::security::ssl::HandshakeProducer {
	$class(CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer();
	void init$();
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer_h_