#ifndef _sun_security_ssl_KeyUpdate$KeyUpdateMessage_h_
#define _sun_security_ssl_KeyUpdate$KeyUpdateMessage_h_
//$ class sun.security.ssl.KeyUpdate$KeyUpdateMessage
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
			class HandshakeOutStream;
			class KeyUpdate$KeyUpdateRequest;
			class PostHandshakeContext;
			class SSLHandshake;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class KeyUpdate$KeyUpdateMessage : public ::sun::security::ssl::SSLHandshake$HandshakeMessage {
	$class(KeyUpdate$KeyUpdateMessage, $NO_CLASS_INIT, ::sun::security::ssl::SSLHandshake$HandshakeMessage)
public:
	KeyUpdate$KeyUpdateMessage();
	void init$(::sun::security::ssl::PostHandshakeContext* context, ::sun::security::ssl::KeyUpdate$KeyUpdateRequest* status);
	void init$(::sun::security::ssl::PostHandshakeContext* context, ::java::nio::ByteBuffer* m);
	virtual ::sun::security::ssl::SSLHandshake* handshakeType() override;
	virtual int32_t messageLength() override;
	virtual void send(::sun::security::ssl::HandshakeOutStream* s) override;
	virtual $String* toString() override;
	::sun::security::ssl::KeyUpdate$KeyUpdateRequest* status = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_KeyUpdate$KeyUpdateMessage_h_