#ifndef _sun_security_ssl_CertSignAlgsExtension$CHCertSignatureSchemesUpdate_h_
#define _sun_security_ssl_CertSignAlgsExtension$CHCertSignatureSchemesUpdate_h_
//$ class sun.security.ssl.CertSignAlgsExtension$CHCertSignatureSchemesUpdate
//$ extends sun.security.ssl.HandshakeConsumer

#include <sun/security/ssl/HandshakeConsumer.h>

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

class CertSignAlgsExtension$CHCertSignatureSchemesUpdate : public ::sun::security::ssl::HandshakeConsumer {
	$class(CertSignAlgsExtension$CHCertSignatureSchemesUpdate, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeConsumer)
public:
	CertSignAlgsExtension$CHCertSignatureSchemesUpdate();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertSignAlgsExtension$CHCertSignatureSchemesUpdate_h_