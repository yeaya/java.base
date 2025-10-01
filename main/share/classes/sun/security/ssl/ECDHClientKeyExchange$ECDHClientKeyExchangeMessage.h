#ifndef _sun_security_ssl_ECDHClientKeyExchange$ECDHClientKeyExchangeMessage_h_
#define _sun_security_ssl_ECDHClientKeyExchange$ECDHClientKeyExchangeMessage_h_
//$ class sun.security.ssl.ECDHClientKeyExchange$ECDHClientKeyExchangeMessage
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

class ECDHClientKeyExchange$ECDHClientKeyExchangeMessage : public ::sun::security::ssl::SSLHandshake$HandshakeMessage {
	$class(ECDHClientKeyExchange$ECDHClientKeyExchangeMessage, $NO_CLASS_INIT, ::sun::security::ssl::SSLHandshake$HandshakeMessage)
public:
	ECDHClientKeyExchange$ECDHClientKeyExchangeMessage();
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext, $bytes* encodedPublicKey);
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext, ::java::nio::ByteBuffer* m);
	virtual ::sun::security::ssl::SSLHandshake* handshakeType() override;
	virtual int32_t messageLength() override;
	virtual void send(::sun::security::ssl::HandshakeOutStream* hos) override;
	virtual $String* toString() override;
	$bytes* encodedPoint = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ECDHClientKeyExchange$ECDHClientKeyExchangeMessage_h_