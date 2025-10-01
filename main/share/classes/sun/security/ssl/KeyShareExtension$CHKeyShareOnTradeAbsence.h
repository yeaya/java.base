#ifndef _sun_security_ssl_KeyShareExtension$CHKeyShareOnTradeAbsence_h_
#define _sun_security_ssl_KeyShareExtension$CHKeyShareOnTradeAbsence_h_
//$ class sun.security.ssl.KeyShareExtension$CHKeyShareOnTradeAbsence
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

class KeyShareExtension$CHKeyShareOnTradeAbsence : public ::sun::security::ssl::HandshakeAbsence {
	$class(KeyShareExtension$CHKeyShareOnTradeAbsence, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeAbsence)
public:
	KeyShareExtension$CHKeyShareOnTradeAbsence();
	void init$();
	virtual void absent(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_KeyShareExtension$CHKeyShareOnTradeAbsence_h_