#ifndef _sun_security_ssl_RSAServerKeyExchange$RSAServerKeyExchangeProducer_h_
#define _sun_security_ssl_RSAServerKeyExchange$RSAServerKeyExchangeProducer_h_
//$ class sun.security.ssl.RSAServerKeyExchange$RSAServerKeyExchangeProducer
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

class RSAServerKeyExchange$RSAServerKeyExchangeProducer : public ::sun::security::ssl::HandshakeProducer {
	$class(RSAServerKeyExchange$RSAServerKeyExchangeProducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	RSAServerKeyExchange$RSAServerKeyExchangeProducer();
	void init$();
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_RSAServerKeyExchange$RSAServerKeyExchangeProducer_h_