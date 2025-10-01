#ifndef _sun_security_ssl_SessionTicketExtension$T12SHSessionTicketConsumer_h_
#define _sun_security_ssl_SessionTicketExtension$T12SHSessionTicketConsumer_h_
//$ class sun.security.ssl.SessionTicketExtension$T12SHSessionTicketConsumer
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

class SessionTicketExtension$T12SHSessionTicketConsumer : public ::sun::security::ssl::SSLExtension$ExtensionConsumer {
	$class(SessionTicketExtension$T12SHSessionTicketConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLExtension$ExtensionConsumer)
public:
	SessionTicketExtension$T12SHSessionTicketConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message, ::java::nio::ByteBuffer* buffer) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SessionTicketExtension$T12SHSessionTicketConsumer_h_