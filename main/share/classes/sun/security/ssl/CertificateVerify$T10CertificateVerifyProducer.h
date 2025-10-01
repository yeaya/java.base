#ifndef _sun_security_ssl_CertificateVerify$T10CertificateVerifyProducer_h_
#define _sun_security_ssl_CertificateVerify$T10CertificateVerifyProducer_h_
//$ class sun.security.ssl.CertificateVerify$T10CertificateVerifyProducer
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

class CertificateVerify$T10CertificateVerifyProducer : public ::sun::security::ssl::HandshakeProducer {
	$class(CertificateVerify$T10CertificateVerifyProducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	CertificateVerify$T10CertificateVerifyProducer();
	void init$();
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateVerify$T10CertificateVerifyProducer_h_