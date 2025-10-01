#ifndef _sun_security_ssl_PreSharedKeyExtension$PartialClientHelloMessage_h_
#define _sun_security_ssl_PreSharedKeyExtension$PartialClientHelloMessage_h_
//$ class sun.security.ssl.PreSharedKeyExtension$PartialClientHelloMessage
//$ extends sun.security.ssl.SSLHandshake$HandshakeMessage

#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>

namespace sun {
	namespace security {
		namespace ssl {
			class ClientHello$ClientHelloMessage;
			class HandshakeContext;
			class HandshakeOutStream;
			class PreSharedKeyExtension$CHPreSharedKeySpec;
			class SSLHandshake;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class PreSharedKeyExtension$PartialClientHelloMessage : public ::sun::security::ssl::SSLHandshake$HandshakeMessage {
	$class(PreSharedKeyExtension$PartialClientHelloMessage, $NO_CLASS_INIT, ::sun::security::ssl::SSLHandshake$HandshakeMessage)
public:
	PreSharedKeyExtension$PartialClientHelloMessage();
	void init$(::sun::security::ssl::HandshakeContext* ctx, ::sun::security::ssl::ClientHello$ClientHelloMessage* msg, ::sun::security::ssl::PreSharedKeyExtension$CHPreSharedKeySpec* psk);
	virtual ::sun::security::ssl::SSLHandshake* handshakeType() override;
	virtual int32_t messageLength() override;
	int32_t pskTotalLength();
	virtual void send(::sun::security::ssl::HandshakeOutStream* hos) override;
	::sun::security::ssl::ClientHello$ClientHelloMessage* msg = nullptr;
	::sun::security::ssl::PreSharedKeyExtension$CHPreSharedKeySpec* psk = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_PreSharedKeyExtension$PartialClientHelloMessage_h_