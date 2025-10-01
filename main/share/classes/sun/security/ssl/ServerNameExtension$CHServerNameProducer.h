#ifndef _sun_security_ssl_ServerNameExtension$CHServerNameProducer_h_
#define _sun_security_ssl_ServerNameExtension$CHServerNameProducer_h_
//$ class sun.security.ssl.ServerNameExtension$CHServerNameProducer
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

class ServerNameExtension$CHServerNameProducer : public ::sun::security::ssl::HandshakeProducer {
	$class(ServerNameExtension$CHServerNameProducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	ServerNameExtension$CHServerNameProducer();
	void init$();
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ServerNameExtension$CHServerNameProducer_h_