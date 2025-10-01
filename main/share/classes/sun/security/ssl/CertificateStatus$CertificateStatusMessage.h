#ifndef _sun_security_ssl_CertificateStatus$CertificateStatusMessage_h_
#define _sun_security_ssl_CertificateStatus$CertificateStatusMessage_h_
//$ class sun.security.ssl.CertificateStatus$CertificateStatusMessage
//$ extends sun.security.ssl.SSLHandshake$HandshakeMessage

#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>

namespace java {
	namespace nio {
		class ByteBuffer;
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
			class CertStatusExtension$CertStatusRequestType;
			class HandshakeContext;
			class HandshakeOutStream;
			class SSLHandshake;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class CertificateStatus$CertificateStatusMessage : public ::sun::security::ssl::SSLHandshake$HandshakeMessage {
	$class(CertificateStatus$CertificateStatusMessage, $NO_CLASS_INIT, ::sun::security::ssl::SSLHandshake$HandshakeMessage)
public:
	CertificateStatus$CertificateStatusMessage();
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext);
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext, ::java::nio::ByteBuffer* m);
	virtual ::sun::security::ssl::SSLHandshake* handshakeType() override;
	static int32_t messageLength(::sun::security::ssl::CertStatusExtension$CertStatusRequestType* statusType, int32_t encodedResponsesLen);
	virtual int32_t messageLength() override;
	virtual void send(::sun::security::ssl::HandshakeOutStream* s) override;
	virtual $String* toString() override;
	::sun::security::ssl::CertStatusExtension$CertStatusRequestType* statusType = nullptr;
	int32_t encodedResponsesLen = 0;
	int32_t messageLength$ = 0;
	::java::util::List* encodedResponses = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateStatus$CertificateStatusMessage_h_