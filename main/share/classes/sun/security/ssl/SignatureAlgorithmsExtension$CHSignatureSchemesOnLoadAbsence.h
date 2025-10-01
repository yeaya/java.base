#ifndef _sun_security_ssl_SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence_h_
#define _sun_security_ssl_SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence_h_
//$ class sun.security.ssl.SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence
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

class SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence : public ::sun::security::ssl::HandshakeAbsence {
	$class(SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeAbsence)
public:
	SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence();
	void init$();
	virtual void absent(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence_h_