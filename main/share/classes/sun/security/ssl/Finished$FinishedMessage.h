#ifndef _sun_security_ssl_Finished$FinishedMessage_h_
#define _sun_security_ssl_Finished$FinishedMessage_h_
//$ class sun.security.ssl.Finished$FinishedMessage
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

class Finished$FinishedMessage : public ::sun::security::ssl::SSLHandshake$HandshakeMessage {
	$class(Finished$FinishedMessage, $NO_CLASS_INIT, ::sun::security::ssl::SSLHandshake$HandshakeMessage)
public:
	Finished$FinishedMessage();
	void init$(::sun::security::ssl::HandshakeContext* context);
	void init$(::sun::security::ssl::HandshakeContext* context, ::java::nio::ByteBuffer* m);
	virtual ::sun::security::ssl::SSLHandshake* handshakeType() override;
	virtual int32_t messageLength() override;
	virtual void send(::sun::security::ssl::HandshakeOutStream* hos) override;
	virtual $String* toString() override;
	$bytes* verifyData = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_Finished$FinishedMessage_h_