#ifndef _sun_security_ssl_CertificateMessage$T13CertificateMessage_h_
#define _sun_security_ssl_CertificateMessage$T13CertificateMessage_h_
//$ class sun.security.ssl.CertificateMessage$T13CertificateMessage
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
		namespace cert {
			class X509Certificate;
		}
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
			class SSLHandshake;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class CertificateMessage$T13CertificateMessage : public ::sun::security::ssl::SSLHandshake$HandshakeMessage {
	$class(CertificateMessage$T13CertificateMessage, $NO_CLASS_INIT, ::sun::security::ssl::SSLHandshake$HandshakeMessage)
public:
	CertificateMessage$T13CertificateMessage();
	void init$(::sun::security::ssl::HandshakeContext* context, $bytes* requestContext, $Array<::java::security::cert::X509Certificate>* certificates);
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext, $bytes* requestContext, ::java::util::List* certificates);
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext, ::java::nio::ByteBuffer* m);
	virtual ::sun::security::ssl::SSLHandshake* handshakeType() override;
	virtual int32_t messageLength() override;
	virtual void send(::sun::security::ssl::HandshakeOutStream* hos) override;
	virtual $String* toString() override;
	$bytes* requestContext = nullptr;
	::java::util::List* certEntries = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateMessage$T13CertificateMessage_h_