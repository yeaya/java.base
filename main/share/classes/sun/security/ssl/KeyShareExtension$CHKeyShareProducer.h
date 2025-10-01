#ifndef _sun_security_ssl_KeyShareExtension$CHKeyShareProducer_h_
#define _sun_security_ssl_KeyShareExtension$CHKeyShareProducer_h_
//$ class sun.security.ssl.KeyShareExtension$CHKeyShareProducer
//$ extends sun.security.ssl.HandshakeProducer

#include <java/lang/Array.h>
#include <sun/security/ssl/HandshakeProducer.h>

namespace sun {
	namespace security {
		namespace ssl {
			class ClientHandshakeContext;
			class ConnectionContext;
			class NamedGroup;
			class SSLHandshake$HandshakeMessage;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class KeyShareExtension$CHKeyShareProducer : public ::sun::security::ssl::HandshakeProducer {
	$class(KeyShareExtension$CHKeyShareProducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	KeyShareExtension$CHKeyShareProducer();
	void init$();
	static $bytes* getShare(::sun::security::ssl::ClientHandshakeContext* chc, ::sun::security::ssl::NamedGroup* ng);
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_KeyShareExtension$CHKeyShareProducer_h_