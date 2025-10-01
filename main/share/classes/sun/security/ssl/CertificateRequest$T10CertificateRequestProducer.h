#ifndef _sun_security_ssl_CertificateRequest$T10CertificateRequestProducer_h_
#define _sun_security_ssl_CertificateRequest$T10CertificateRequestProducer_h_
//$ class sun.security.ssl.CertificateRequest$T10CertificateRequestProducer
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

class CertificateRequest$T10CertificateRequestProducer : public ::sun::security::ssl::HandshakeProducer {
	$class(CertificateRequest$T10CertificateRequestProducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	CertificateRequest$T10CertificateRequestProducer();
	void init$();
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateRequest$T10CertificateRequestProducer_h_