#ifndef _sun_security_ssl_DHClientKeyExchange$DHClientKeyExchangeMessage_h_
#define _sun_security_ssl_DHClientKeyExchange$DHClientKeyExchangeMessage_h_
//$ class sun.security.ssl.DHClientKeyExchange$DHClientKeyExchangeMessage
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

class DHClientKeyExchange$DHClientKeyExchangeMessage : public ::sun::security::ssl::SSLHandshake$HandshakeMessage {
	$class(DHClientKeyExchange$DHClientKeyExchangeMessage, $NO_CLASS_INIT, ::sun::security::ssl::SSLHandshake$HandshakeMessage)
public:
	DHClientKeyExchange$DHClientKeyExchangeMessage();
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext);
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext, ::java::nio::ByteBuffer* m);
	virtual ::sun::security::ssl::SSLHandshake* handshakeType() override;
	virtual int32_t messageLength() override;
	virtual void send(::sun::security::ssl::HandshakeOutStream* hos) override;
	virtual $String* toString() override;
	$bytes* y = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_DHClientKeyExchange$DHClientKeyExchangeMessage_h_