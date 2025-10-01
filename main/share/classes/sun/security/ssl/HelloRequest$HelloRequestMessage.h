#ifndef _sun_security_ssl_HelloRequest$HelloRequestMessage_h_
#define _sun_security_ssl_HelloRequest$HelloRequestMessage_h_
//$ class sun.security.ssl.HelloRequest$HelloRequestMessage
//$ extends sun.security.ssl.SSLHandshake$HandshakeMessage

#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
			class HandshakeOutStream;
			class SSLHandshake;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class HelloRequest$HelloRequestMessage : public ::sun::security::ssl::SSLHandshake$HandshakeMessage {
	$class(HelloRequest$HelloRequestMessage, $NO_CLASS_INIT, ::sun::security::ssl::SSLHandshake$HandshakeMessage)
public:
	HelloRequest$HelloRequestMessage();
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext);
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext, ::java::nio::ByteBuffer* m);
	virtual ::sun::security::ssl::SSLHandshake* handshakeType() override;
	virtual int32_t messageLength() override;
	virtual void send(::sun::security::ssl::HandshakeOutStream* s) override;
	virtual $String* toString() override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_HelloRequest$HelloRequestMessage_h_