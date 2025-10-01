#ifndef _sun_security_ssl_SSLContextImpl$DefaultSSLContextHolder_h_
#define _sun_security_ssl_SSLContextImpl$DefaultSSLContextHolder_h_
//$ class sun.security.ssl.SSLContextImpl$DefaultSSLContextHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Exception;
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

class SSLContextImpl$DefaultSSLContextHolder : public ::java::lang::Object {
	$class(SSLContextImpl$DefaultSSLContextHolder, 0, ::java::lang::Object)
public:
	SSLContextImpl$DefaultSSLContextHolder();
	void init$();
	static ::sun::security::ssl::SSLContextImpl* sslContext;
	static ::java::lang::Exception* reservedException;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLContextImpl$DefaultSSLContextHolder_h_