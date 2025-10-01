#ifndef _sun_security_ssl_MaxFragExtension$CHMaxFragmentLengthProducer_h_
#define _sun_security_ssl_MaxFragExtension$CHMaxFragmentLengthProducer_h_
//$ class sun.security.ssl.MaxFragExtension$CHMaxFragmentLengthProducer
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

class MaxFragExtension$CHMaxFragmentLengthProducer : public ::sun::security::ssl::HandshakeProducer {
	$class(MaxFragExtension$CHMaxFragmentLengthProducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	MaxFragExtension$CHMaxFragmentLengthProducer();
	void init$();
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_MaxFragExtension$CHMaxFragmentLengthProducer_h_