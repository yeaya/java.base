#ifndef _sun_security_ssl_PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence_h_
#define _sun_security_ssl_PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence_h_
//$ class sun.security.ssl.PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence
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

class PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence : public ::sun::security::ssl::HandshakeAbsence {
	$class(PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeAbsence)
public:
	PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence();
	void init$();
	virtual void absent(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence_h_