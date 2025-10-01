#ifndef _sun_security_ssl_ClientHello$ClientHelloMessage_h_
#define _sun_security_ssl_ClientHello$ClientHelloMessage_h_
//$ class sun.security.ssl.ClientHello$ClientHelloMessage
//$ extends sun.security.ssl.SSLHandshake$HandshakeMessage

#include <java/lang/Array.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>

#pragma push_macro("NULL_COMPRESSION")
#undef NULL_COMPRESSION

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace security {
		class SecureRandom;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
			class HandshakeOutStream;
			class RandomCookie;
			class SSLExtension;
			class SSLExtensions;
			class SSLHandshake;
			class SessionId;
			class TransportContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class ClientHello$ClientHelloMessage : public ::sun::security::ssl::SSLHandshake$HandshakeMessage {
	$class(ClientHello$ClientHelloMessage, 0, ::sun::security::ssl::SSLHandshake$HandshakeMessage)
public:
	ClientHello$ClientHelloMessage();
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext, int32_t clientVersion, ::sun::security::ssl::SessionId* sessionId, ::java::util::List* cipherSuites, ::java::security::SecureRandom* generator);
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext, ::java::nio::ByteBuffer* m, $Array<::sun::security::ssl::SSLExtension>* supportedExtensions);
	static $ints* getCipherSuiteIds(::java::util::List* cipherSuites);
	::java::util::List* getCipherSuiteNames();
	static ::java::util::List* getCipherSuites($ints* ids);
	$bytes* getEncodedCipherSuites();
	$bytes* getHeaderBytes();
	$bytes* getHelloCookieBytes();
	virtual ::sun::security::ssl::SSLHandshake* handshakeType() override;
	virtual int32_t messageLength() override;
	static void readPartial(::sun::security::ssl::TransportContext* tc, ::java::nio::ByteBuffer* m);
	virtual void send(::sun::security::ssl::HandshakeOutStream* hos) override;
	void sendCore(::sun::security::ssl::HandshakeOutStream* hos);
	void setHelloCookie($bytes* cookie);
	virtual $String* toString() override;
	bool isDTLS = false;
	int32_t clientVersion = 0;
	::sun::security::ssl::RandomCookie* clientRandom = nullptr;
	::sun::security::ssl::SessionId* sessionId = nullptr;
	$bytes* cookie = nullptr;
	$ints* cipherSuiteIds = nullptr;
	::java::util::List* cipherSuites = nullptr;
	$bytes* compressionMethod = nullptr;
	::sun::security::ssl::SSLExtensions* extensions = nullptr;
	static $bytes* NULL_COMPRESSION;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("NULL_COMPRESSION")

#endif // _sun_security_ssl_ClientHello$ClientHelloMessage_h_