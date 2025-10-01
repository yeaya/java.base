#ifndef _sun_security_ssl_HandshakeProducer_h_
#define _sun_security_ssl_HandshakeProducer_h_
//$ interface sun.security.ssl.HandshakeProducer
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class HandshakeProducer : public ::java::lang::Object {
	$interface(HandshakeProducer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) {return nullptr;}
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_HandshakeProducer_h_