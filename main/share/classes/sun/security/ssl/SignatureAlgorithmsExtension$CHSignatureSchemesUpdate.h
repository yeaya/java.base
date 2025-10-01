#ifndef _sun_security_ssl_SignatureAlgorithmsExtension$CHSignatureSchemesUpdate_h_
#define _sun_security_ssl_SignatureAlgorithmsExtension$CHSignatureSchemesUpdate_h_
//$ class sun.security.ssl.SignatureAlgorithmsExtension$CHSignatureSchemesUpdate
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

class SignatureAlgorithmsExtension$CHSignatureSchemesUpdate : public ::sun::security::ssl::HandshakeConsumer {
	$class(SignatureAlgorithmsExtension$CHSignatureSchemesUpdate, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeConsumer)
public:
	SignatureAlgorithmsExtension$CHSignatureSchemesUpdate();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SignatureAlgorithmsExtension$CHSignatureSchemesUpdate_h_