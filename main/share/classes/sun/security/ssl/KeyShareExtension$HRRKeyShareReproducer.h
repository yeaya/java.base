#ifndef _sun_security_ssl_KeyShareExtension$HRRKeyShareReproducer_h_
#define _sun_security_ssl_KeyShareExtension$HRRKeyShareReproducer_h_
//$ class sun.security.ssl.KeyShareExtension$HRRKeyShareReproducer
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

class KeyShareExtension$HRRKeyShareReproducer : public ::sun::security::ssl::HandshakeProducer {
	$class(KeyShareExtension$HRRKeyShareReproducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	KeyShareExtension$HRRKeyShareReproducer();
	void init$();
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_KeyShareExtension$HRRKeyShareReproducer_h_