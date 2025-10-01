#ifndef _sun_security_ssl_ServerNameExtension$CHServerNameConsumer_h_
#define _sun_security_ssl_ServerNameExtension$CHServerNameConsumer_h_
//$ class sun.security.ssl.ServerNameExtension$CHServerNameConsumer
//$ extends sun.security.ssl.SSLExtension$ExtensionConsumer

#include <sun/security/ssl/SSLExtension$ExtensionConsumer.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		class Collection;
		class List;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SNIServerName;
		}
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

class ServerNameExtension$CHServerNameConsumer : public ::sun::security::ssl::SSLExtension$ExtensionConsumer {
	$class(ServerNameExtension$CHServerNameConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLExtension$ExtensionConsumer)
public:
	ServerNameExtension$CHServerNameConsumer();
	void init$();
	static ::javax::net::ssl::SNIServerName* chooseSni(::java::util::Collection* matchers, ::java::util::List* sniNames);
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message, ::java::nio::ByteBuffer* buffer) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ServerNameExtension$CHServerNameConsumer_h_