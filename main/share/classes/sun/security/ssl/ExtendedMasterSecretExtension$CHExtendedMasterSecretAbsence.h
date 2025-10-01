#ifndef _sun_security_ssl_ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence_h_
#define _sun_security_ssl_ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence_h_
//$ class sun.security.ssl.ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence
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

class ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence : public ::sun::security::ssl::HandshakeAbsence {
	$class(ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeAbsence)
public:
	ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence();
	void init$();
	virtual void absent(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence_h_