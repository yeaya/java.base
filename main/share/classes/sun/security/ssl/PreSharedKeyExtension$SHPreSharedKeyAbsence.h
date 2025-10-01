#ifndef _sun_security_ssl_PreSharedKeyExtension$SHPreSharedKeyAbsence_h_
#define _sun_security_ssl_PreSharedKeyExtension$SHPreSharedKeyAbsence_h_
//$ class sun.security.ssl.PreSharedKeyExtension$SHPreSharedKeyAbsence
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

class PreSharedKeyExtension$SHPreSharedKeyAbsence : public ::sun::security::ssl::HandshakeAbsence {
	$class(PreSharedKeyExtension$SHPreSharedKeyAbsence, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeAbsence)
public:
	PreSharedKeyExtension$SHPreSharedKeyAbsence();
	void init$();
	virtual void absent(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_PreSharedKeyExtension$SHPreSharedKeyAbsence_h_