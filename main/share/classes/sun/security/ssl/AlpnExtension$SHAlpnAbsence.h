#ifndef _sun_security_ssl_AlpnExtension$SHAlpnAbsence_h_
#define _sun_security_ssl_AlpnExtension$SHAlpnAbsence_h_
//$ class sun.security.ssl.AlpnExtension$SHAlpnAbsence
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

class AlpnExtension$SHAlpnAbsence : public ::sun::security::ssl::HandshakeAbsence {
	$class(AlpnExtension$SHAlpnAbsence, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeAbsence)
public:
	AlpnExtension$SHAlpnAbsence();
	void init$();
	virtual void absent(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_AlpnExtension$SHAlpnAbsence_h_