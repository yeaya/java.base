#ifndef _sun_security_ssl_RenegoInfoExtension$SHRenegotiationInfoAbsence_h_
#define _sun_security_ssl_RenegoInfoExtension$SHRenegotiationInfoAbsence_h_
//$ class sun.security.ssl.RenegoInfoExtension$SHRenegotiationInfoAbsence
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

class RenegoInfoExtension$SHRenegotiationInfoAbsence : public ::sun::security::ssl::HandshakeAbsence {
	$class(RenegoInfoExtension$SHRenegotiationInfoAbsence, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeAbsence)
public:
	RenegoInfoExtension$SHRenegotiationInfoAbsence();
	void init$();
	virtual void absent(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_RenegoInfoExtension$SHRenegotiationInfoAbsence_h_