#ifndef _sun_security_ssl_CookieExtension$CookieStringizer_h_
#define _sun_security_ssl_CookieExtension$CookieStringizer_h_
//$ class sun.security.ssl.CookieExtension$CookieStringizer
//$ extends sun.security.ssl.SSLStringizer

#include <sun/security/ssl/SSLStringizer.h>

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

class CookieExtension$CookieStringizer : public ::sun::security::ssl::SSLStringizer {
	$class(CookieExtension$CookieStringizer, $NO_CLASS_INIT, ::sun::security::ssl::SSLStringizer)
public:
	CookieExtension$CookieStringizer();
	void init$();
	using ::sun::security::ssl::SSLStringizer::toString;
	virtual $String* toString(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* buffer) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CookieExtension$CookieStringizer_h_