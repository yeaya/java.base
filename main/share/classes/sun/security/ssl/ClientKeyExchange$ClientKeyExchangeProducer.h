#ifndef _sun_security_ssl_ClientKeyExchange$ClientKeyExchangeProducer_h_
#define _sun_security_ssl_ClientKeyExchange$ClientKeyExchangeProducer_h_
//$ class sun.security.ssl.ClientKeyExchange$ClientKeyExchangeProducer
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

class ClientKeyExchange$ClientKeyExchangeProducer : public ::sun::security::ssl::HandshakeProducer {
	$class(ClientKeyExchange$ClientKeyExchangeProducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	ClientKeyExchange$ClientKeyExchangeProducer();
	void init$();
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ClientKeyExchange$ClientKeyExchangeProducer_h_