#ifndef _sun_security_ssl_CertificateVerify$T13CertificateVerifyProducer_h_
#define _sun_security_ssl_CertificateVerify$T13CertificateVerifyProducer_h_
//$ class sun.security.ssl.CertificateVerify$T13CertificateVerifyProducer
//$ extends sun.security.ssl.HandshakeProducer

#include <java/lang/Array.h>
#include <sun/security/ssl/HandshakeProducer.h>

namespace sun {
	namespace security {
		namespace ssl {
			class ClientHandshakeContext;
			class ConnectionContext;
			class SSLHandshake$HandshakeMessage;
			class ServerHandshakeContext;
			class X509Authentication$X509Possession;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class CertificateVerify$T13CertificateVerifyProducer : public ::sun::security::ssl::HandshakeProducer {
	$class(CertificateVerify$T13CertificateVerifyProducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	CertificateVerify$T13CertificateVerifyProducer();
	void init$();
	$bytes* onProduceCertificateVerify(::sun::security::ssl::ServerHandshakeContext* shc, ::sun::security::ssl::X509Authentication$X509Possession* x509Possession);
	$bytes* onProduceCertificateVerify(::sun::security::ssl::ClientHandshakeContext* chc, ::sun::security::ssl::X509Authentication$X509Possession* x509Possession);
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateVerify$T13CertificateVerifyProducer_h_