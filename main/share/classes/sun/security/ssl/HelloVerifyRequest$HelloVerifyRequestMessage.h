#ifndef _sun_security_ssl_HelloVerifyRequest$HelloVerifyRequestMessage_h_
#define _sun_security_ssl_HelloVerifyRequest$HelloVerifyRequestMessage_h_
//$ class sun.security.ssl.HelloVerifyRequest$HelloVerifyRequestMessage
//$ extends sun.security.ssl.SSLHandshake$HandshakeMessage

#include <java/lang/Array.h>
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

class HelloVerifyRequest$HelloVerifyRequestMessage : public ::sun::security::ssl::SSLHandshake$HandshakeMessage {
	$class(HelloVerifyRequest$HelloVerifyRequestMessage, $NO_CLASS_INIT, ::sun::security::ssl::SSLHandshake$HandshakeMessage)
public:
	HelloVerifyRequest$HelloVerifyRequestMessage();
	void init$(::sun::security::ssl::HandshakeContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message);
	void init$(::sun::security::ssl::HandshakeContext* context, ::java::nio::ByteBuffer* m);
	virtual ::sun::security::ssl::SSLHandshake* handshakeType() override;
	virtual int32_t messageLength() override;
	virtual void send(::sun::security::ssl::HandshakeOutStream* hos) override;
	virtual $String* toString() override;
	int32_t serverVersion = 0;
	$bytes* cookie = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_HelloVerifyRequest$HelloVerifyRequestMessage_h_