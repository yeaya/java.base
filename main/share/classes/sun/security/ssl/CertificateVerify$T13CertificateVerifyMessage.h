#ifndef _sun_security_ssl_CertificateVerify$T13CertificateVerifyMessage_h_
#define _sun_security_ssl_CertificateVerify$T13CertificateVerifyMessage_h_
//$ class sun.security.ssl.CertificateVerify$T13CertificateVerifyMessage
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
			class SignatureScheme;
			class X509Authentication$X509Possession;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class CertificateVerify$T13CertificateVerifyMessage : public ::sun::security::ssl::SSLHandshake$HandshakeMessage {
	$class(CertificateVerify$T13CertificateVerifyMessage, 0, ::sun::security::ssl::SSLHandshake$HandshakeMessage)
public:
	CertificateVerify$T13CertificateVerifyMessage();
	void init$(::sun::security::ssl::HandshakeContext* context, ::sun::security::ssl::X509Authentication$X509Possession* x509Possession);
	void init$(::sun::security::ssl::HandshakeContext* context, ::java::nio::ByteBuffer* m);
	virtual ::sun::security::ssl::SSLHandshake* handshakeType() override;
	virtual int32_t messageLength() override;
	virtual void send(::sun::security::ssl::HandshakeOutStream* hos) override;
	virtual $String* toString() override;
	static $bytes* serverSignHead;
	static $bytes* clientSignHead;
	::sun::security::ssl::SignatureScheme* signatureScheme = nullptr;
	$bytes* signature = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateVerify$T13CertificateVerifyMessage_h_