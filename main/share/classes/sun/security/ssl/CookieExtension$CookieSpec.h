#ifndef _sun_security_ssl_CookieExtension$CookieSpec_h_
#define _sun_security_ssl_CookieExtension$CookieSpec_h_
//$ class sun.security.ssl.CookieExtension$CookieSpec
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

class CookieExtension$CookieSpec : public ::sun::security::ssl::SSLExtension$SSLExtensionSpec {
	$class(CookieExtension$CookieSpec, $NO_CLASS_INIT, ::sun::security::ssl::SSLExtension$SSLExtensionSpec)
public:
	CookieExtension$CookieSpec();
	void init$(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* m);
	virtual $String* toString() override;
	$bytes* cookie = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CookieExtension$CookieSpec_h_