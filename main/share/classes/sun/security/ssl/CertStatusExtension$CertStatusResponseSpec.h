#ifndef _sun_security_ssl_CertStatusExtension$CertStatusResponseSpec_h_
#define _sun_security_ssl_CertStatusExtension$CertStatusResponseSpec_h_
//$ class sun.security.ssl.CertStatusExtension$CertStatusResponseSpec
//$ extends sun.security.ssl.SSLExtension$SSLExtensionSpec

#include <sun/security/ssl/SSLExtension$SSLExtensionSpec.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class CertStatusExtension$CertStatusResponse;
			class HandshakeContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class CertStatusExtension$CertStatusResponseSpec : public ::sun::security::ssl::SSLExtension$SSLExtensionSpec {
	$class(CertStatusExtension$CertStatusResponseSpec, $NO_CLASS_INIT, ::sun::security::ssl::SSLExtension$SSLExtensionSpec)
public:
	CertStatusExtension$CertStatusResponseSpec();
	void init$(::sun::security::ssl::CertStatusExtension$CertStatusResponse* resp);
	void init$(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* buffer);
	virtual $String* toString() override;
	::sun::security::ssl::CertStatusExtension$CertStatusResponse* statusResponse = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertStatusExtension$CertStatusResponseSpec_h_