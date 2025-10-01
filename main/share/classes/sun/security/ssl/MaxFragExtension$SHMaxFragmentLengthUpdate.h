#ifndef _sun_security_ssl_MaxFragExtension$SHMaxFragmentLengthUpdate_h_
#define _sun_security_ssl_MaxFragExtension$SHMaxFragmentLengthUpdate_h_
//$ class sun.security.ssl.MaxFragExtension$SHMaxFragmentLengthUpdate
//$ extends sun.security.ssl.HandshakeConsumer

#include <sun/security/ssl/HandshakeConsumer.h>

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

class MaxFragExtension$SHMaxFragmentLengthUpdate : public ::sun::security::ssl::HandshakeConsumer {
	$class(MaxFragExtension$SHMaxFragmentLengthUpdate, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeConsumer)
public:
	MaxFragExtension$SHMaxFragmentLengthUpdate();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_MaxFragExtension$SHMaxFragmentLengthUpdate_h_