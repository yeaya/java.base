#ifndef _sun_security_ssl_ServerHello$T13ServerHelloProducer_h_
#define _sun_security_ssl_ServerHello$T13ServerHelloProducer_h_
//$ class sun.security.ssl.ServerHello$T13ServerHelloProducer
//$ extends sun.security.ssl.HandshakeProducer

#include <java/lang/Array.h>
#include <sun/security/ssl/HandshakeProducer.h>

namespace sun {
	namespace security {
		namespace ssl {
			class CipherSuite;
			class ClientHello$ClientHelloMessage;
			class ConnectionContext;
			class SSLHandshake$HandshakeMessage;
			class ServerHandshakeContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class ServerHello$T13ServerHelloProducer : public ::sun::security::ssl::HandshakeProducer {
	$class(ServerHello$T13ServerHelloProducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	ServerHello$T13ServerHelloProducer();
	void init$();
	static ::sun::security::ssl::CipherSuite* chooseCipherSuite(::sun::security::ssl::ServerHandshakeContext* shc, ::sun::security::ssl::ClientHello$ClientHelloMessage* clientHello);
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ServerHello$T13ServerHelloProducer_h_