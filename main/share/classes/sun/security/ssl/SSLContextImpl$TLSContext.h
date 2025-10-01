#ifndef _sun_security_ssl_SSLContextImpl$TLSContext_h_
#define _sun_security_ssl_SSLContextImpl$TLSContext_h_
//$ class sun.security.ssl.SSLContextImpl$TLSContext
//$ extends sun.security.ssl.SSLContextImpl$CustomizedTLSContext

#include <sun/security/ssl/SSLContextImpl$CustomizedTLSContext.h>

namespace sun {
	namespace security {
		namespace ssl {

class SSLContextImpl$TLSContext : public ::sun::security::ssl::SSLContextImpl$CustomizedTLSContext {
	$class(SSLContextImpl$TLSContext, $NO_CLASS_INIT, ::sun::security::ssl::SSLContextImpl$CustomizedTLSContext)
public:
	SSLContextImpl$TLSContext();
	void init$();
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLContextImpl$TLSContext_h_