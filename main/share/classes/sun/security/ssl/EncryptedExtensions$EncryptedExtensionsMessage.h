#ifndef _sun_security_ssl_EncryptedExtensions$EncryptedExtensionsMessage_h_
#define _sun_security_ssl_EncryptedExtensions$EncryptedExtensionsMessage_h_
//$ class sun.security.ssl.EncryptedExtensions$EncryptedExtensionsMessage
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
			class SSLExtensions;
			class SSLHandshake;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class EncryptedExtensions$EncryptedExtensionsMessage : public ::sun::security::ssl::SSLHandshake$HandshakeMessage {
	$class(EncryptedExtensions$EncryptedExtensionsMessage, $NO_CLASS_INIT, ::sun::security::ssl::SSLHandshake$HandshakeMessage)
public:
	EncryptedExtensions$EncryptedExtensionsMessage();
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext);
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext, ::java::nio::ByteBuffer* m);
	virtual ::sun::security::ssl::SSLHandshake* handshakeType() override;
	virtual int32_t messageLength() override;
	virtual void send(::sun::security::ssl::HandshakeOutStream* hos) override;
	virtual $String* toString() override;
	::sun::security::ssl::SSLExtensions* extensions = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_EncryptedExtensions$EncryptedExtensionsMessage_h_