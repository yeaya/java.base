#ifndef _sun_security_ssl_SSLContextImpl$TLS10Context_h_
#define _sun_security_ssl_SSLContextImpl$TLS10Context_h_
//$ class sun.security.ssl.SSLContextImpl$TLS10Context
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

class SSLContextImpl$TLS10Context : public ::sun::security::ssl::SSLContextImpl$AbstractTLSContext {
	$class(SSLContextImpl$TLS10Context, 0, ::sun::security::ssl::SSLContextImpl$AbstractTLSContext)
public:
	SSLContextImpl$TLS10Context();
	void init$();
	virtual ::java::util::List* getClientDefaultCipherSuites() override;
	virtual ::java::util::List* getClientDefaultProtocolVersions() override;
	static ::java::util::List* clientDefaultProtocols;
	static ::java::util::List* clientDefaultCipherSuites;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLContextImpl$TLS10Context_h_