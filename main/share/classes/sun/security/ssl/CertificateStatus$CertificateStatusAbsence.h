#ifndef _sun_security_ssl_CertificateStatus$CertificateStatusAbsence_h_
#define _sun_security_ssl_CertificateStatus$CertificateStatusAbsence_h_
//$ class sun.security.ssl.CertificateStatus$CertificateStatusAbsence
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

class CertificateStatus$CertificateStatusAbsence : public ::sun::security::ssl::HandshakeAbsence {
	$class(CertificateStatus$CertificateStatusAbsence, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeAbsence)
public:
	CertificateStatus$CertificateStatusAbsence();
	void init$();
	virtual void absent(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateStatus$CertificateStatusAbsence_h_