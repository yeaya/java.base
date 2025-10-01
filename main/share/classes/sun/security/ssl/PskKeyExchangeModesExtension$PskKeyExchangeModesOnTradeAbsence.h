#ifndef _sun_security_ssl_PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence_h_
#define _sun_security_ssl_PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence_h_
//$ class sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence
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

class PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence : public ::sun::security::ssl::HandshakeAbsence {
	$class(PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeAbsence)
public:
	PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence();
	void init$();
	virtual void absent(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence_h_