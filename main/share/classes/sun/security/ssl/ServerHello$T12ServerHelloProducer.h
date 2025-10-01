#ifndef _sun_security_ssl_ServerHello$T12ServerHelloProducer_h_
#define _sun_security_ssl_ServerHello$T12ServerHelloProducer_h_
//$ class sun.security.ssl.ServerHello$T12ServerHelloProducer
//$ extends sun.security.ssl.HandshakeProducer

#include <java/lang/Array.h>
#include <sun/security/ssl/HandshakeProducer.h>

namespace sun {
	namespace security {
		namespace ssl {
			class ClientHello$ClientHelloMessage;
			class ConnectionContext;
			class SSLHandshake$HandshakeMessage;
			class ServerHandshakeContext;
			class ServerHello$T12ServerHelloProducer$KeyExchangeProperties;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class ServerHello$T12ServerHelloProducer : public ::sun::security::ssl::HandshakeProducer {
	$class(ServerHello$T12ServerHelloProducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	ServerHello$T12ServerHelloProducer();
	void init$();
	static ::sun::security::ssl::ServerHello$T12ServerHelloProducer$KeyExchangeProperties* chooseCipherSuite(::sun::security::ssl::ServerHandshakeContext* shc, ::sun::security::ssl::ClientHello$ClientHelloMessage* clientHello);
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ServerHello$T12ServerHelloProducer_h_