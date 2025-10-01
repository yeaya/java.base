#ifndef _sun_security_ssl_CertStatusExtension$CertStatusRequestSpec_h_
#define _sun_security_ssl_CertStatusExtension$CertStatusRequestSpec_h_
//$ class sun.security.ssl.CertStatusExtension$CertStatusRequestSpec
//$ extends sun.security.ssl.SSLExtension$SSLExtensionSpec

#include <sun/security/ssl/SSLExtension$SSLExtensionSpec.h>

#pragma push_macro("DEFAULT")
#undef DEFAULT

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class CertStatusExtension$CertStatusRequest;
			class HandshakeContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class CertStatusExtension$CertStatusRequestSpec : public ::sun::security::ssl::SSLExtension$SSLExtensionSpec {
	$class(CertStatusExtension$CertStatusRequestSpec, 0, ::sun::security::ssl::SSLExtension$SSLExtensionSpec)
public:
	CertStatusExtension$CertStatusRequestSpec();
	void init$(::sun::security::ssl::CertStatusExtension$CertStatusRequest* statusRequest);
	void init$(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* buffer);
	virtual $String* toString() override;
	static ::sun::security::ssl::CertStatusExtension$CertStatusRequestSpec* DEFAULT;
	::sun::security::ssl::CertStatusExtension$CertStatusRequest* statusRequest = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("DEFAULT")

#endif // _sun_security_ssl_CertStatusExtension$CertStatusRequestSpec_h_