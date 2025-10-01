#ifndef _sun_security_ssl_SupportedVersionsExtension$SHSupportedVersionsSpec_h_
#define _sun_security_ssl_SupportedVersionsExtension$SHSupportedVersionsSpec_h_
//$ class sun.security.ssl.SupportedVersionsExtension$SHSupportedVersionsSpec
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
			class HandshakeContext;
			class ProtocolVersion;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SupportedVersionsExtension$SHSupportedVersionsSpec : public ::sun::security::ssl::SSLExtension$SSLExtensionSpec {
	$class(SupportedVersionsExtension$SHSupportedVersionsSpec, $NO_CLASS_INIT, ::sun::security::ssl::SSLExtension$SSLExtensionSpec)
public:
	SupportedVersionsExtension$SHSupportedVersionsSpec();
	void init$(::sun::security::ssl::ProtocolVersion* selectedVersion);
	void init$(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* m);
	virtual $String* toString() override;
	int32_t selectedVersion = 0;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SupportedVersionsExtension$SHSupportedVersionsSpec_h_