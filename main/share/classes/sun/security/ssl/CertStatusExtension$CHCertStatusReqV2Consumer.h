#ifndef _sun_security_ssl_CertStatusExtension$CHCertStatusReqV2Consumer_h_
#define _sun_security_ssl_CertStatusExtension$CHCertStatusReqV2Consumer_h_
//$ class sun.security.ssl.CertStatusExtension$CHCertStatusReqV2Consumer
//$ extends sun.security.ssl.SSLExtension$ExtensionConsumer

#include <sun/security/ssl/SSLExtension$ExtensionConsumer.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class ConnectionContext;
			class SSLHandshake$HandshakeMessage;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class CertStatusExtension$CHCertStatusReqV2Consumer : public ::sun::security::ssl::SSLExtension$ExtensionConsumer {
	$class(CertStatusExtension$CHCertStatusReqV2Consumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLExtension$ExtensionConsumer)
public:
	CertStatusExtension$CHCertStatusReqV2Consumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message, ::java::nio::ByteBuffer* buffer) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertStatusExtension$CHCertStatusReqV2Consumer_h_