#ifndef _sun_security_ssl_ServerKeyExchange$ServerKeyExchangeProducer_h_
#define _sun_security_ssl_ServerKeyExchange$ServerKeyExchangeProducer_h_
//$ class sun.security.ssl.ServerKeyExchange$ServerKeyExchangeProducer
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

class ServerKeyExchange$ServerKeyExchangeProducer : public ::sun::security::ssl::HandshakeProducer {
	$class(ServerKeyExchange$ServerKeyExchangeProducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	ServerKeyExchange$ServerKeyExchangeProducer();
	void init$();
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ServerKeyExchange$ServerKeyExchangeProducer_h_