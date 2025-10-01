#ifndef _sun_security_ssl_KeyUpdate$KeyUpdateProducer_h_
#define _sun_security_ssl_KeyUpdate$KeyUpdateProducer_h_
//$ class sun.security.ssl.KeyUpdate$KeyUpdateProducer
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

class KeyUpdate$KeyUpdateProducer : public ::sun::security::ssl::HandshakeProducer {
	$class(KeyUpdate$KeyUpdateProducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	KeyUpdate$KeyUpdateProducer();
	void init$();
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_KeyUpdate$KeyUpdateProducer_h_