#ifndef _sun_security_ssl_ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer_h_
#define _sun_security_ssl_ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer_h_
//$ class sun.security.ssl.ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer
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

class ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer : public ::sun::security::ssl::HandshakeProducer {
	$class(ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer();
	void init$();
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ECDHClientKeyExchange$ECDHEClientKeyExchangeProducer_h_