#ifndef _sun_security_ssl_SupportedGroupsExtension$CHSupportedGroupsConsumer_h_
#define _sun_security_ssl_SupportedGroupsExtension$CHSupportedGroupsConsumer_h_
//$ class sun.security.ssl.SupportedGroupsExtension$CHSupportedGroupsConsumer
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

class SupportedGroupsExtension$CHSupportedGroupsConsumer : public ::sun::security::ssl::SSLExtension$ExtensionConsumer {
	$class(SupportedGroupsExtension$CHSupportedGroupsConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLExtension$ExtensionConsumer)
public:
	SupportedGroupsExtension$CHSupportedGroupsConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message, ::java::nio::ByteBuffer* buffer) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SupportedGroupsExtension$CHSupportedGroupsConsumer_h_