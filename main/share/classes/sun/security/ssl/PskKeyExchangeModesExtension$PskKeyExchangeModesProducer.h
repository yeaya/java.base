#ifndef _sun_security_ssl_PskKeyExchangeModesExtension$PskKeyExchangeModesProducer_h_
#define _sun_security_ssl_PskKeyExchangeModesExtension$PskKeyExchangeModesProducer_h_
//$ class sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesProducer
//$ extends sun.security.ssl.HandshakeProducer

#include <java/lang/Array.h>
#include <sun/security/ssl/HandshakeProducer.h>

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

class PskKeyExchangeModesExtension$PskKeyExchangeModesProducer : public ::sun::security::ssl::HandshakeProducer {
	$class(PskKeyExchangeModesExtension$PskKeyExchangeModesProducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	PskKeyExchangeModesExtension$PskKeyExchangeModesProducer();
	void init$();
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_PskKeyExchangeModesExtension$PskKeyExchangeModesProducer_h_