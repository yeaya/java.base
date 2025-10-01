#ifndef _sun_security_ssl_CertificateMessage$T12CertificateProducer_h_
#define _sun_security_ssl_CertificateMessage$T12CertificateProducer_h_
//$ class sun.security.ssl.CertificateMessage$T12CertificateProducer
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
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class CertificateMessage$T12CertificateProducer : public ::sun::security::ssl::HandshakeProducer {
	$class(CertificateMessage$T12CertificateProducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	CertificateMessage$T12CertificateProducer();
	void init$();
	$bytes* onProduceCertificate(::sun::security::ssl::ServerHandshakeContext* shc, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message);
	$bytes* onProduceCertificate(::sun::security::ssl::ClientHandshakeContext* chc, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message);
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateMessage$T12CertificateProducer_h_