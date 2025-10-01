#ifndef _sun_security_ssl_CertificateRequest$T13CertificateRequestMessage_h_
#define _sun_security_ssl_CertificateRequest$T13CertificateRequestMessage_h_
//$ class sun.security.ssl.CertificateRequest$T13CertificateRequestMessage
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
			class SSLExtensions;
			class SSLHandshake;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class CertificateRequest$T13CertificateRequestMessage : public ::sun::security::ssl::SSLHandshake$HandshakeMessage {
	$class(CertificateRequest$T13CertificateRequestMessage, $NO_CLASS_INIT, ::sun::security::ssl::SSLHandshake$HandshakeMessage)
public:
	CertificateRequest$T13CertificateRequestMessage();
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext);
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext, ::java::nio::ByteBuffer* m);
	virtual ::sun::security::ssl::SSLHandshake* handshakeType() override;
	virtual int32_t messageLength() override;
	virtual void send(::sun::security::ssl::HandshakeOutStream* hos) override;
	virtual $String* toString() override;
	$bytes* requestContext = nullptr;
	::sun::security::ssl::SSLExtensions* extensions = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateRequest$T13CertificateRequestMessage_h_