#ifndef _sun_security_ssl_ServerHello$T13HelloRetryRequestProducer_h_
#define _sun_security_ssl_ServerHello$T13HelloRetryRequestProducer_h_
//$ class sun.security.ssl.ServerHello$T13HelloRetryRequestProducer
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

class ServerHello$T13HelloRetryRequestProducer : public ::sun::security::ssl::HandshakeProducer {
	$class(ServerHello$T13HelloRetryRequestProducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	ServerHello$T13HelloRetryRequestProducer();
	void init$();
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ServerHello$T13HelloRetryRequestProducer_h_