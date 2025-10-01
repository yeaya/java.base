#ifndef _sun_security_ssl_CertStatusExtension$CHCertStatusReqProducer_h_
#define _sun_security_ssl_CertStatusExtension$CHCertStatusReqProducer_h_
//$ class sun.security.ssl.CertStatusExtension$CHCertStatusReqProducer
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

class CertStatusExtension$CHCertStatusReqProducer : public ::sun::security::ssl::HandshakeProducer {
	$class(CertStatusExtension$CHCertStatusReqProducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	CertStatusExtension$CHCertStatusReqProducer();
	void init$();
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertStatusExtension$CHCertStatusReqProducer_h_