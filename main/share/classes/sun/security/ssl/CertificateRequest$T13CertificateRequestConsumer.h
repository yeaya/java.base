#ifndef _sun_security_ssl_CertificateRequest$T13CertificateRequestConsumer_h_
#define _sun_security_ssl_CertificateRequest$T13CertificateRequestConsumer_h_
//$ class sun.security.ssl.CertificateRequest$T13CertificateRequestConsumer
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

class CertificateRequest$T13CertificateRequestConsumer : public ::sun::security::ssl::SSLConsumer {
	$class(CertificateRequest$T13CertificateRequestConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLConsumer)
public:
	CertificateRequest$T13CertificateRequestConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateRequest$T13CertificateRequestConsumer_h_