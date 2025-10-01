#ifndef _sun_security_ssl_CertificateRequest$T12CertificateRequestMessage_h_
#define _sun_security_ssl_CertificateRequest$T12CertificateRequestMessage_h_
//$ class sun.security.ssl.CertificateRequest$T12CertificateRequestMessage
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
namespace javax {
	namespace security {
		namespace auth {
			namespace x500 {
				class X500Principal;
			}
		}
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class CipherSuite$KeyExchange;
			class HandshakeContext;
			class HandshakeOutStream;
			class SSLHandshake;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class CertificateRequest$T12CertificateRequestMessage : public ::sun::security::ssl::SSLHandshake$HandshakeMessage {
	$class(CertificateRequest$T12CertificateRequestMessage, $NO_CLASS_INIT, ::sun::security::ssl::SSLHandshake$HandshakeMessage)
public:
	CertificateRequest$T12CertificateRequestMessage();
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext, $Array<::java::security::cert::X509Certificate>* trustedCerts, ::sun::security::ssl::CipherSuite$KeyExchange* keyExchange, ::java::util::List* signatureSchemes);
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext, ::java::nio::ByteBuffer* m);
	$Array<::javax::security::auth::x500::X500Principal>* getAuthorities();
	$StringArray* getKeyTypes();
	virtual ::sun::security::ssl::SSLHandshake* handshakeType() override;
	virtual int32_t messageLength() override;
	virtual void send(::sun::security::ssl::HandshakeOutStream* hos) override;
	virtual $String* toString() override;
	$bytes* types = nullptr;
	$ints* algorithmIds = nullptr;
	::java::util::List* authorities = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateRequest$T12CertificateRequestMessage_h_