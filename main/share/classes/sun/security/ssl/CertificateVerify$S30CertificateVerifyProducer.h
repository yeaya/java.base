#ifndef _sun_security_ssl_CertificateVerify$S30CertificateVerifyProducer_h_
#define _sun_security_ssl_CertificateVerify$S30CertificateVerifyProducer_h_
//$ class sun.security.ssl.CertificateVerify$S30CertificateVerifyProducer
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

class CertificateVerify$S30CertificateVerifyProducer : public ::sun::security::ssl::HandshakeProducer {
	$class(CertificateVerify$S30CertificateVerifyProducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	CertificateVerify$S30CertificateVerifyProducer();
	void init$();
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateVerify$S30CertificateVerifyProducer_h_