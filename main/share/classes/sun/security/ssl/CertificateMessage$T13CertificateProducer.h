#ifndef _sun_security_ssl_CertificateMessage$T13CertificateProducer_h_
#define _sun_security_ssl_CertificateMessage$T13CertificateProducer_h_
//$ class sun.security.ssl.CertificateMessage$T13CertificateProducer
//$ extends sun.security.ssl.HandshakeProducer

#include <java/lang/Array.h>
#include <sun/security/ssl/HandshakeProducer.h>

namespace sun {
	namespace security {
		namespace ssl {
			class ClientHandshakeContext;
			class ClientHello$ClientHelloMessage;
			class ConnectionContext;
			class HandshakeContext;
			class SSLHandshake$HandshakeMessage;
			class SSLPossession;
			class ServerHandshakeContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class CertificateMessage$T13CertificateProducer : public ::sun::security::ssl::HandshakeProducer {
	$class(CertificateMessage$T13CertificateProducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	CertificateMessage$T13CertificateProducer();
	void init$();
	static ::sun::security::ssl::SSLPossession* choosePossession(::sun::security::ssl::HandshakeContext* hc, ::sun::security::ssl::ClientHello$ClientHelloMessage* clientHello);
	$bytes* onProduceCertificate(::sun::security::ssl::ServerHandshakeContext* shc, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message);
	$bytes* onProduceCertificate(::sun::security::ssl::ClientHandshakeContext* chc, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message);
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateMessage$T13CertificateProducer_h_