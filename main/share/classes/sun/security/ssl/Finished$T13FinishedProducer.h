#ifndef _sun_security_ssl_Finished$T13FinishedProducer_h_
#define _sun_security_ssl_Finished$T13FinishedProducer_h_
//$ class sun.security.ssl.Finished$T13FinishedProducer
//$ extends sun.security.ssl.HandshakeProducer

#include <java/lang/Array.h>
#include <sun/security/ssl/HandshakeProducer.h>

namespace sun {
	namespace security {
		namespace ssl {
			class ClientHandshakeContext;
			class ConnectionContext;
			class SSLHandshake$HandshakeMessage;
			class ServerHandshakeContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class Finished$T13FinishedProducer : public ::sun::security::ssl::HandshakeProducer {
	$class(Finished$T13FinishedProducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	Finished$T13FinishedProducer();
	void init$();
	$bytes* onProduceFinished(::sun::security::ssl::ClientHandshakeContext* chc, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message);
	$bytes* onProduceFinished(::sun::security::ssl::ServerHandshakeContext* shc, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message);
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_Finished$T13FinishedProducer_h_