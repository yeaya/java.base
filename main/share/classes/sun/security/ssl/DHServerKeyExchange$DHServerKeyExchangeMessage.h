#ifndef _sun_security_ssl_DHServerKeyExchange$DHServerKeyExchangeMessage_h_
#define _sun_security_ssl_DHServerKeyExchange$DHServerKeyExchangeMessage_h_
//$ class sun.security.ssl.DHServerKeyExchange$DHServerKeyExchangeMessage
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
		class Key;
		class Signature;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
			class HandshakeOutStream;
			class SSLHandshake;
			class SignatureScheme;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class DHServerKeyExchange$DHServerKeyExchangeMessage : public ::sun::security::ssl::SSLHandshake$HandshakeMessage {
	$class(DHServerKeyExchange$DHServerKeyExchangeMessage, $NO_CLASS_INIT, ::sun::security::ssl::SSLHandshake$HandshakeMessage)
public:
	DHServerKeyExchange$DHServerKeyExchangeMessage();
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext);
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext, ::java::nio::ByteBuffer* m);
	static ::java::security::Signature* getSignature($String* keyAlgorithm, ::java::security::Key* key);
	virtual ::sun::security::ssl::SSLHandshake* handshakeType() override;
	virtual int32_t messageLength() override;
	virtual void send(::sun::security::ssl::HandshakeOutStream* hos) override;
	virtual $String* toString() override;
	void updateSignature(::java::security::Signature* sig, $bytes* clntNonce, $bytes* svrNonce);
	$bytes* p = nullptr;
	$bytes* g = nullptr;
	$bytes* y = nullptr;
	bool useExplicitSigAlgorithm = false;
	::sun::security::ssl::SignatureScheme* signatureScheme = nullptr;
	$bytes* paramsSignature = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_DHServerKeyExchange$DHServerKeyExchangeMessage_h_