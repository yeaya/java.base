#ifndef _sun_security_ssl_ServerHelloDone$ServerHelloDoneMessage_h_
#define _sun_security_ssl_ServerHelloDone$ServerHelloDoneMessage_h_
//$ class sun.security.ssl.ServerHelloDone$ServerHelloDoneMessage
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
			class SSLHandshake;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class ServerHelloDone$ServerHelloDoneMessage : public ::sun::security::ssl::SSLHandshake$HandshakeMessage {
	$class(ServerHelloDone$ServerHelloDoneMessage, $NO_CLASS_INIT, ::sun::security::ssl::SSLHandshake$HandshakeMessage)
public:
	ServerHelloDone$ServerHelloDoneMessage();
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext);
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext, ::java::nio::ByteBuffer* m);
	virtual ::sun::security::ssl::SSLHandshake* handshakeType() override;
	virtual int32_t messageLength() override;
	virtual void send(::sun::security::ssl::HandshakeOutStream* s) override;
	virtual $String* toString() override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ServerHelloDone$ServerHelloDoneMessage_h_