#ifndef _sun_security_ssl_PreSharedKeyExtension$SHPreSharedKeySpec_h_
#define _sun_security_ssl_PreSharedKeyExtension$SHPreSharedKeySpec_h_
//$ class sun.security.ssl.PreSharedKeyExtension$SHPreSharedKeySpec
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

class PreSharedKeyExtension$SHPreSharedKeySpec : public ::sun::security::ssl::SSLExtension$SSLExtensionSpec {
	$class(PreSharedKeyExtension$SHPreSharedKeySpec, $NO_CLASS_INIT, ::sun::security::ssl::SSLExtension$SSLExtensionSpec)
public:
	PreSharedKeyExtension$SHPreSharedKeySpec();
	void init$(int32_t selectedIdentity);
	void init$(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* m);
	$bytes* getEncoded();
	virtual $String* toString() override;
	int32_t selectedIdentity = 0;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_PreSharedKeyExtension$SHPreSharedKeySpec_h_