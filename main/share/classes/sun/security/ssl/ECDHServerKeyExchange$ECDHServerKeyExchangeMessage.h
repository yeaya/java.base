#ifndef _sun_security_ssl_ECDHServerKeyExchange$ECDHServerKeyExchangeMessage_h_
#define _sun_security_ssl_ECDHServerKeyExchange$ECDHServerKeyExchangeMessage_h_
//$ class sun.security.ssl.ECDHServerKeyExchange$ECDHServerKeyExchangeMessage
//$ extends sun.security.ssl.SSLHandshake$HandshakeMessage

#include <java/lang/Array.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>

#pragma push_macro("CURVE_NAMED_CURVE")
#undef CURVE_NAMED_CURVE

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
			class ClientHandshakeContext;
			class HandshakeContext;
			class HandshakeOutStream;
			class NamedGroup;
			class SSLCredentials;
			class SSLHandshake;
			class SignatureScheme;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class ECDHServerKeyExchange$ECDHServerKeyExchangeMessage : public ::sun::security::ssl::SSLHandshake$HandshakeMessage {
	$class(ECDHServerKeyExchange$ECDHServerKeyExchangeMessage, $NO_CLASS_INIT, ::sun::security::ssl::SSLHandshake$HandshakeMessage)
public:
	ECDHServerKeyExchange$ECDHServerKeyExchangeMessage();
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext);
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext, ::java::nio::ByteBuffer* m);
	static ::java::security::Signature* getSignature($String* keyAlgorithm, ::java::security::Key* key);
	virtual ::sun::security::ssl::SSLHandshake* handshakeType() override;
	void lambda$new$0(::sun::security::ssl::ClientHandshakeContext* chc, $String* s);
	virtual int32_t messageLength() override;
	virtual void send(::sun::security::ssl::HandshakeOutStream* hos) override;
	virtual $String* toString() override;
	static void updateSignature(::java::security::Signature* sig, $bytes* clntNonce, $bytes* svrNonce, int32_t namedGroupId, $bytes* publicPoint);
	static const int8_t CURVE_NAMED_CURVE = (int8_t)3;
	::sun::security::ssl::NamedGroup* namedGroup = nullptr;
	$bytes* publicPoint = nullptr;
	$bytes* paramsSignature = nullptr;
	bool useExplicitSigAlgorithm = false;
	::sun::security::ssl::SignatureScheme* signatureScheme = nullptr;
	::sun::security::ssl::SSLCredentials* sslCredentials = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("CURVE_NAMED_CURVE")

#endif // _sun_security_ssl_ECDHServerKeyExchange$ECDHServerKeyExchangeMessage_h_