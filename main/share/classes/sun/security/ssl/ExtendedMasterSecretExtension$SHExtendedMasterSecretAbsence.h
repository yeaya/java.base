#ifndef _sun_security_ssl_ExtendedMasterSecretExtension$SHExtendedMasterSecretAbsence_h_
#define _sun_security_ssl_ExtendedMasterSecretExtension$SHExtendedMasterSecretAbsence_h_
//$ class sun.security.ssl.ExtendedMasterSecretExtension$SHExtendedMasterSecretAbsence
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

class ExtendedMasterSecretExtension$SHExtendedMasterSecretAbsence : public ::sun::security::ssl::HandshakeAbsence {
	$class(ExtendedMasterSecretExtension$SHExtendedMasterSecretAbsence, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeAbsence)
public:
	ExtendedMasterSecretExtension$SHExtendedMasterSecretAbsence();
	void init$();
	virtual void absent(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ExtendedMasterSecretExtension$SHExtendedMasterSecretAbsence_h_