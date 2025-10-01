#ifndef _sun_security_ssl_SignatureAlgorithmsExtension$CRSignatureSchemesAbsence_h_
#define _sun_security_ssl_SignatureAlgorithmsExtension$CRSignatureSchemesAbsence_h_
//$ class sun.security.ssl.SignatureAlgorithmsExtension$CRSignatureSchemesAbsence
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

class SignatureAlgorithmsExtension$CRSignatureSchemesAbsence : public ::sun::security::ssl::HandshakeAbsence {
	$class(SignatureAlgorithmsExtension$CRSignatureSchemesAbsence, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeAbsence)
public:
	SignatureAlgorithmsExtension$CRSignatureSchemesAbsence();
	void init$();
	virtual void absent(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SignatureAlgorithmsExtension$CRSignatureSchemesAbsence_h_