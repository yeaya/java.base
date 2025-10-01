#ifndef _sun_security_ssl_MaxFragExtension$EEMaxFragmentLengthConsumer_h_
#define _sun_security_ssl_MaxFragExtension$EEMaxFragmentLengthConsumer_h_
//$ class sun.security.ssl.MaxFragExtension$EEMaxFragmentLengthConsumer
//$ extends sun.security.ssl.SSLExtension$ExtensionConsumer

#include <sun/security/ssl/SSLExtension$ExtensionConsumer.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
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

class MaxFragExtension$EEMaxFragmentLengthConsumer : public ::sun::security::ssl::SSLExtension$ExtensionConsumer {
	$class(MaxFragExtension$EEMaxFragmentLengthConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLExtension$ExtensionConsumer)
public:
	MaxFragExtension$EEMaxFragmentLengthConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message, ::java::nio::ByteBuffer* buffer) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_MaxFragExtension$EEMaxFragmentLengthConsumer_h_