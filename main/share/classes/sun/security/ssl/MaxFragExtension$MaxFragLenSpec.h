#ifndef _sun_security_ssl_MaxFragExtension$MaxFragLenSpec_h_
#define _sun_security_ssl_MaxFragExtension$MaxFragLenSpec_h_
//$ class sun.security.ssl.MaxFragExtension$MaxFragLenSpec
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
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class MaxFragExtension$MaxFragLenSpec : public ::sun::security::ssl::SSLExtension$SSLExtensionSpec {
	$class(MaxFragExtension$MaxFragLenSpec, $NO_CLASS_INIT, ::sun::security::ssl::SSLExtension$SSLExtensionSpec)
public:
	MaxFragExtension$MaxFragLenSpec();
	void init$(int8_t id);
	void init$(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* buffer);
	virtual $String* toString() override;
	int8_t id = 0;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_MaxFragExtension$MaxFragLenSpec_h_