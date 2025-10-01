#ifndef _sun_security_ssl_CertificateVerify$S30CertificateVerifyMessage_h_
#define _sun_security_ssl_CertificateVerify$S30CertificateVerifyMessage_h_
//$ class sun.security.ssl.CertificateVerify$S30CertificateVerifyMessage
//$ extends sun.security.ssl.SSLHandshake$HandshakeMessage

#include <java/lang/Array.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>

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
			class HandshakeContext;
			class HandshakeOutStream;
			class SSLHandshake;
			class X509Authentication$X509Possession;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class CertificateVerify$S30CertificateVerifyMessage : public ::sun::security::ssl::SSLHandshake$HandshakeMessage {
	$class(CertificateVerify$S30CertificateVerifyMessage, $NO_CLASS_INIT, ::sun::security::ssl::SSLHandshake$HandshakeMessage)
public:
	CertificateVerify$S30CertificateVerifyMessage();
	void init$(::sun::security::ssl::HandshakeContext* context, ::sun::security::ssl::X509Authentication$X509Possession* x509Possession);
	void init$(::sun::security::ssl::HandshakeContext* context, ::java::nio::ByteBuffer* m);
	static ::java::security::Signature* getSignature($String* algorithm, ::java::security::Key* key);
	virtual ::sun::security::ssl::SSLHandshake* handshakeType() override;
	virtual int32_t messageLength() override;
	virtual void send(::sun::security::ssl::HandshakeOutStream* hos) override;
	virtual $String* toString() override;
	$bytes* signature = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateVerify$S30CertificateVerifyMessage_h_