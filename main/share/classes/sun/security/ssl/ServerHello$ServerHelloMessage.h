#ifndef _sun_security_ssl_ServerHello$ServerHelloMessage_h_
#define _sun_security_ssl_ServerHello$ServerHelloMessage_h_
//$ class sun.security.ssl.ServerHello$ServerHelloMessage
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
			class CipherSuite;
			class ClientHello$ClientHelloMessage;
			class HandshakeContext;
			class HandshakeOutStream;
			class ProtocolVersion;
			class RandomCookie;
			class SSLExtensions;
			class SSLHandshake;
			class SessionId;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class ServerHello$ServerHelloMessage : public ::sun::security::ssl::SSLHandshake$HandshakeMessage {
	$class(ServerHello$ServerHelloMessage, $NO_CLASS_INIT, ::sun::security::ssl::SSLHandshake$HandshakeMessage)
public:
	ServerHello$ServerHelloMessage();
	void init$(::sun::security::ssl::HandshakeContext* context, ::sun::security::ssl::ProtocolVersion* serverVersion, ::sun::security::ssl::SessionId* sessionId, ::sun::security::ssl::CipherSuite* cipherSuite, ::sun::security::ssl::RandomCookie* serverRandom, ::sun::security::ssl::ClientHello$ClientHelloMessage* clientHello);
	void init$(::sun::security::ssl::HandshakeContext* context, ::java::nio::ByteBuffer* m);
	virtual ::sun::security::ssl::SSLHandshake* handshakeType() override;
	virtual int32_t messageLength() override;
	virtual void send(::sun::security::ssl::HandshakeOutStream* hos) override;
	virtual $String* toString() override;
	::sun::security::ssl::ProtocolVersion* serverVersion = nullptr;
	::sun::security::ssl::RandomCookie* serverRandom = nullptr;
	::sun::security::ssl::SessionId* sessionId = nullptr;
	::sun::security::ssl::CipherSuite* cipherSuite = nullptr;
	int8_t compressionMethod = 0;
	::sun::security::ssl::SSLExtensions* extensions = nullptr;
	::sun::security::ssl::ClientHello$ClientHelloMessage* clientHello = nullptr;
	::java::nio::ByteBuffer* handshakeRecord = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ServerHello$ServerHelloMessage_h_