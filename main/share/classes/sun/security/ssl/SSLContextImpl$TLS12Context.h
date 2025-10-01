#ifndef _sun_security_ssl_SSLContextImpl$TLS12Context_h_
#define _sun_security_ssl_SSLContextImpl$TLS12Context_h_
//$ class sun.security.ssl.SSLContextImpl$TLS12Context
//$ extends sun.security.ssl.SSLContextImpl$AbstractTLSContext

#include <sun/security/ssl/SSLContextImpl$AbstractTLSContext.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLContextImpl$TLS12Context : public ::sun::security::ssl::SSLContextImpl$AbstractTLSContext {
	$class(SSLContextImpl$TLS12Context, 0, ::sun::security::ssl::SSLContextImpl$AbstractTLSContext)
public:
	SSLContextImpl$TLS12Context();
	void init$();
	virtual ::java::util::List* getClientDefaultCipherSuites() override;
	virtual ::java::util::List* getClientDefaultProtocolVersions() override;
	static ::java::util::List* clientDefaultProtocols;
	static ::java::util::List* clientDefaultCipherSuites;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLContextImpl$TLS12Context_h_