#ifndef _sun_security_ssl_AlpnExtension$CHAlpnAbsence_h_
#define _sun_security_ssl_AlpnExtension$CHAlpnAbsence_h_
//$ class sun.security.ssl.AlpnExtension$CHAlpnAbsence
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

class AlpnExtension$CHAlpnAbsence : public ::sun::security::ssl::HandshakeAbsence {
	$class(AlpnExtension$CHAlpnAbsence, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeAbsence)
public:
	AlpnExtension$CHAlpnAbsence();
	void init$();
	virtual void absent(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_AlpnExtension$CHAlpnAbsence_h_