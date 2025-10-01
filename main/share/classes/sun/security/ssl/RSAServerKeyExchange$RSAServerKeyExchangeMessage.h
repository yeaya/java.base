#ifndef _sun_security_ssl_RSAServerKeyExchange$RSAServerKeyExchangeMessage_h_
#define _sun_security_ssl_RSAServerKeyExchange$RSAServerKeyExchangeMessage_h_
//$ class sun.security.ssl.RSAServerKeyExchange$RSAServerKeyExchangeMessage
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
		class Signature;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
			class HandshakeOutStream;
			class RSAKeyExchange$EphemeralRSAPossession;
			class SSLHandshake;
			class X509Authentication$X509Possession;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class RSAServerKeyExchange$RSAServerKeyExchangeMessage : public ::sun::security::ssl::SSLHandshake$HandshakeMessage {
	$class(RSAServerKeyExchange$RSAServerKeyExchangeMessage, $NO_CLASS_INIT, ::sun::security::ssl::SSLHandshake$HandshakeMessage)
public:
	RSAServerKeyExchange$RSAServerKeyExchangeMessage();
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext, ::sun::security::ssl::X509Authentication$X509Possession* x509Possession, ::sun::security::ssl::RSAKeyExchange$EphemeralRSAPossession* rsaPossession);
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext, ::java::nio::ByteBuffer* m);
	virtual ::sun::security::ssl::SSLHandshake* handshakeType() override;
	virtual int32_t messageLength() override;
	virtual void send(::sun::security::ssl::HandshakeOutStream* hos) override;
	virtual $String* toString() override;
	void updateSignature(::java::security::Signature* signature, $bytes* clntNonce, $bytes* svrNonce);
	$bytes* modulus = nullptr;
	$bytes* exponent = nullptr;
	$bytes* paramsSignature = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_RSAServerKeyExchange$RSAServerKeyExchangeMessage_h_