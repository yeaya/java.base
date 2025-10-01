#ifndef _sun_security_ssl_CertificateVerify$S30CertificateVerifyConsumer_h_
#define _sun_security_ssl_CertificateVerify$S30CertificateVerifyConsumer_h_
//$ class sun.security.ssl.CertificateVerify$S30CertificateVerifyConsumer
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
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class CertificateVerify$S30CertificateVerifyConsumer : public ::sun::security::ssl::SSLConsumer {
	$class(CertificateVerify$S30CertificateVerifyConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLConsumer)
public:
	CertificateVerify$S30CertificateVerifyConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateVerify$S30CertificateVerifyConsumer_h_