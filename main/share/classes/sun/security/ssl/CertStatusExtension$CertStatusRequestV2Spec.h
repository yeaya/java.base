#ifndef _sun_security_ssl_CertStatusExtension$CertStatusRequestV2Spec_h_
#define _sun_security_ssl_CertStatusExtension$CertStatusRequestV2Spec_h_
//$ class sun.security.ssl.CertStatusExtension$CertStatusRequestV2Spec
//$ extends sun.security.ssl.SSLExtension$SSLExtensionSpec

#include <java/lang/Array.h>
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

class CertStatusExtension$CertStatusRequestV2Spec : public ::sun::security::ssl::SSLExtension$SSLExtensionSpec {
	$class(CertStatusExtension$CertStatusRequestV2Spec, 0, ::sun::security::ssl::SSLExtension$SSLExtensionSpec)
public:
	CertStatusExtension$CertStatusRequestV2Spec();
	void init$($Array<::sun::security::ssl::CertStatusExtension$CertStatusRequest>* certStatusRequests);
	void init$(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* message);
	virtual $String* toString() override;
	static ::sun::security::ssl::CertStatusExtension$CertStatusRequestV2Spec* DEFAULT;
	$Array<::sun::security::ssl::CertStatusExtension$CertStatusRequest>* certStatusRequests = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("DEFAULT")

#endif // _sun_security_ssl_CertStatusExtension$CertStatusRequestV2Spec_h_