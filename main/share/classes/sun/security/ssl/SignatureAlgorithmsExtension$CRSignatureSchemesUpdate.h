#ifndef _sun_security_ssl_SignatureAlgorithmsExtension$CRSignatureSchemesUpdate_h_
#define _sun_security_ssl_SignatureAlgorithmsExtension$CRSignatureSchemesUpdate_h_
//$ class sun.security.ssl.SignatureAlgorithmsExtension$CRSignatureSchemesUpdate
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

class SignatureAlgorithmsExtension$CRSignatureSchemesUpdate : public ::sun::security::ssl::HandshakeConsumer {
	$class(SignatureAlgorithmsExtension$CRSignatureSchemesUpdate, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeConsumer)
public:
	SignatureAlgorithmsExtension$CRSignatureSchemesUpdate();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SignatureAlgorithmsExtension$CRSignatureSchemesUpdate_h_