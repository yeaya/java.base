#ifndef _sun_security_ssl_SSLContextImpl$DTLSContext_h_
#define _sun_security_ssl_SSLContextImpl$DTLSContext_h_
//$ class sun.security.ssl.SSLContextImpl$DTLSContext
//$ extends sun.security.ssl.SSLContextImpl$CustomizedDTLSContext

#include <sun/security/ssl/SSLContextImpl$CustomizedDTLSContext.h>

namespace sun {
	namespace security {
		namespace ssl {

class SSLContextImpl$DTLSContext : public ::sun::security::ssl::SSLContextImpl$CustomizedDTLSContext {
	$class(SSLContextImpl$DTLSContext, $NO_CLASS_INIT, ::sun::security::ssl::SSLContextImpl$CustomizedDTLSContext)
public:
	SSLContextImpl$DTLSContext();
	void init$();
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLContextImpl$DTLSContext_h_