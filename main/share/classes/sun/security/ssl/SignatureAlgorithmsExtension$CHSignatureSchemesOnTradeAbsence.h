#ifndef _sun_security_ssl_SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence_h_
#define _sun_security_ssl_SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence_h_
//$ class sun.security.ssl.SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence
//$ extends sun.security.ssl.HandshakeAbsence

#include <sun/security/ssl/HandshakeAbsence.h>

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

class SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence : public ::sun::security::ssl::HandshakeAbsence {
	$class(SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeAbsence)
public:
	SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence();
	void init$();
	virtual void absent(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence_h_