#ifndef _sun_security_ssl_ECPointFormatsExtension$ECPointFormatsSpec_h_
#define _sun_security_ssl_ECPointFormatsExtension$ECPointFormatsSpec_h_
//$ class sun.security.ssl.ECPointFormatsExtension$ECPointFormatsSpec
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
			class HandshakeContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class ECPointFormatsExtension$ECPointFormatsSpec : public ::sun::security::ssl::SSLExtension$SSLExtensionSpec {
	$class(ECPointFormatsExtension$ECPointFormatsSpec, 0, ::sun::security::ssl::SSLExtension$SSLExtensionSpec)
public:
	ECPointFormatsExtension$ECPointFormatsSpec();
	void init$($bytes* formats);
	void init$(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* m);
	bool hasUncompressedFormat();
	virtual $String* toString() override;
	static ::sun::security::ssl::ECPointFormatsExtension$ECPointFormatsSpec* DEFAULT;
	$bytes* formats = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("DEFAULT")

#endif // _sun_security_ssl_ECPointFormatsExtension$ECPointFormatsSpec_h_