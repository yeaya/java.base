#ifndef _sun_security_ssl_SupportedVersionsExtension$CHSupportedVersionsSpec_h_
#define _sun_security_ssl_SupportedVersionsExtension$CHSupportedVersionsSpec_h_
//$ class sun.security.ssl.SupportedVersionsExtension$CHSupportedVersionsSpec
//$ extends sun.security.ssl.SSLExtension$SSLExtensionSpec

#include <java/lang/Array.h>
#include <sun/security/ssl/SSLExtension$SSLExtensionSpec.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SupportedVersionsExtension$CHSupportedVersionsSpec : public ::sun::security::ssl::SSLExtension$SSLExtensionSpec {
	$class(SupportedVersionsExtension$CHSupportedVersionsSpec, $NO_CLASS_INIT, ::sun::security::ssl::SSLExtension$SSLExtensionSpec)
public:
	SupportedVersionsExtension$CHSupportedVersionsSpec();
	void init$($ints* requestedProtocols);
	void init$(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* m);
	virtual $String* toString() override;
	$ints* requestedProtocols = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SupportedVersionsExtension$CHSupportedVersionsSpec_h_