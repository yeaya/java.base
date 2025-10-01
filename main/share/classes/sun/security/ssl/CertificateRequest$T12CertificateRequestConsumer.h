#ifndef _sun_security_ssl_CertificateRequest$T12CertificateRequestConsumer_h_
#define _sun_security_ssl_CertificateRequest$T12CertificateRequestConsumer_h_
//$ class sun.security.ssl.CertificateRequest$T12CertificateRequestConsumer
//$ extends sun.security.ssl.SSLConsumer

#include <sun/security/ssl/SSLConsumer.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class ConnectionContext;
			class HandshakeContext;
			class SSLPossession;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class CertificateRequest$T12CertificateRequestConsumer : public ::sun::security::ssl::SSLConsumer {
	$class(CertificateRequest$T12CertificateRequestConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLConsumer)
public:
	CertificateRequest$T12CertificateRequestConsumer();
	void init$();
	static ::sun::security::ssl::SSLPossession* choosePossession(::sun::security::ssl::HandshakeContext* hc);
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateRequest$T12CertificateRequestConsumer_h_