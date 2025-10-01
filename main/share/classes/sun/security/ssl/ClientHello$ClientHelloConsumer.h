#ifndef _sun_security_ssl_ClientHello$ClientHelloConsumer_h_
#define _sun_security_ssl_ClientHello$ClientHelloConsumer_h_
//$ class sun.security.ssl.ClientHello$ClientHelloConsumer
//$ extends sun.security.ssl.SSLConsumer

#include <java/lang/Array.h>
#include <sun/security/ssl/SSLConsumer.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class ClientHello$ClientHelloMessage;
			class ConnectionContext;
			class ProtocolVersion;
			class ServerHandshakeContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class ClientHello$ClientHelloConsumer : public ::sun::security::ssl::SSLConsumer {
	$class(ClientHello$ClientHelloConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLConsumer)
public:
	ClientHello$ClientHelloConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* message) override;
	::sun::security::ssl::ProtocolVersion* negotiateProtocol(::sun::security::ssl::ServerHandshakeContext* context, int32_t clientHelloVersion);
	::sun::security::ssl::ProtocolVersion* negotiateProtocol(::sun::security::ssl::ServerHandshakeContext* context, $ints* clientSupportedVersions);
	void onClientHello(::sun::security::ssl::ServerHandshakeContext* context, ::sun::security::ssl::ClientHello$ClientHelloMessage* clientHello);
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ClientHello$ClientHelloConsumer_h_