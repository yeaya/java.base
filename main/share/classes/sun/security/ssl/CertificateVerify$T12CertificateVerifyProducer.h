#ifndef _sun_security_ssl_CertificateVerify$T12CertificateVerifyProducer_h_
#define _sun_security_ssl_CertificateVerify$T12CertificateVerifyProducer_h_
//$ class sun.security.ssl.CertificateVerify$T12CertificateVerifyProducer
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

class CertificateVerify$T12CertificateVerifyProducer : public ::sun::security::ssl::HandshakeProducer {
	$class(CertificateVerify$T12CertificateVerifyProducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	CertificateVerify$T12CertificateVerifyProducer();
	void init$();
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateVerify$T12CertificateVerifyProducer_h_