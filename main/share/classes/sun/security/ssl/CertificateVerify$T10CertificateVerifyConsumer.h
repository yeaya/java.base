#ifndef _sun_security_ssl_CertificateVerify$T10CertificateVerifyConsumer_h_
#define _sun_security_ssl_CertificateVerify$T10CertificateVerifyConsumer_h_
//$ class sun.security.ssl.CertificateVerify$T10CertificateVerifyConsumer
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

class CertificateVerify$T10CertificateVerifyConsumer : public ::sun::security::ssl::SSLConsumer {
	$class(CertificateVerify$T10CertificateVerifyConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLConsumer)
public:
	CertificateVerify$T10CertificateVerifyConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateVerify$T10CertificateVerifyConsumer_h_