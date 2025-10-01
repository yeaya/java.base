#ifndef _sun_security_ssl_RSAClientKeyExchange$RSAClientKeyExchangeMessage_h_
#define _sun_security_ssl_RSAClientKeyExchange$RSAClientKeyExchangeMessage_h_
//$ class sun.security.ssl.RSAClientKeyExchange$RSAClientKeyExchangeMessage
//$ extends sun.security.ssl.SSLHandshake$HandshakeMessage

#include <java/lang/Array.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace security {
		class PublicKey;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
			class HandshakeOutStream;
			class RSAKeyExchange$RSAPremasterSecret;
			class SSLHandshake;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class RSAClientKeyExchange$RSAClientKeyExchangeMessage : public ::sun::security::ssl::SSLHandshake$HandshakeMessage {
	$class(RSAClientKeyExchange$RSAClientKeyExchangeMessage, $NO_CLASS_INIT, ::sun::security::ssl::SSLHandshake$HandshakeMessage)
public:
	RSAClientKeyExchange$RSAClientKeyExchangeMessage();
	void init$(::sun::security::ssl::HandshakeContext* context, ::sun::security::ssl::RSAKeyExchange$RSAPremasterSecret* premaster, ::java::security::PublicKey* publicKey);
	void init$(::sun::security::ssl::HandshakeContext* context, ::java::nio::ByteBuffer* m);
	virtual ::sun::security::ssl::SSLHandshake* handshakeType() override;
	virtual int32_t messageLength() override;
	virtual void send(::sun::security::ssl::HandshakeOutStream* hos) override;
	virtual $String* toString() override;
	int32_t protocolVersion = 0;
	bool useTLS10PlusSpec = false;
	$bytes* encrypted = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_RSAClientKeyExchange$RSAClientKeyExchangeMessage_h_