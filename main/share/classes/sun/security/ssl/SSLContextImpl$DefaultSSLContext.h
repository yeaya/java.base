#ifndef _sun_security_ssl_SSLContextImpl$DefaultSSLContext_h_
#define _sun_security_ssl_SSLContextImpl$DefaultSSLContext_h_
//$ class sun.security.ssl.SSLContextImpl$DefaultSSLContext
//$ extends sun.security.ssl.SSLContextImpl$CustomizedTLSContext

#include <java/lang/Array.h>
#include <sun/security/ssl/SSLContextImpl$CustomizedTLSContext.h>

namespace java {
	namespace security {
		class SecureRandom;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class KeyManager;
			class TrustManager;
		}
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class SSLContextImpl;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLContextImpl$DefaultSSLContext : public ::sun::security::ssl::SSLContextImpl$CustomizedTLSContext {
	$class(SSLContextImpl$DefaultSSLContext, $NO_CLASS_INIT, ::sun::security::ssl::SSLContextImpl$CustomizedTLSContext)
public:
	SSLContextImpl$DefaultSSLContext();
	void init$();
	virtual void engineInit($Array<::javax::net::ssl::KeyManager>* km, $Array<::javax::net::ssl::TrustManager>* tm, ::java::security::SecureRandom* sr) override;
	static ::sun::security::ssl::SSLContextImpl* getDefaultImpl();
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLContextImpl$DefaultSSLContext_h_