#ifndef _sun_security_ssl_SSLContextImpl$AbstractTLSContext_h_
#define _sun_security_ssl_SSLContextImpl$AbstractTLSContext_h_
//$ class sun.security.ssl.SSLContextImpl$AbstractTLSContext
//$ extends sun.security.ssl.SSLContextImpl

#include <sun/security/ssl/SSLContextImpl.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SSLEngine;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLContextImpl$AbstractTLSContext : public ::sun::security::ssl::SSLContextImpl {
	$class(SSLContextImpl$AbstractTLSContext, 0, ::sun::security::ssl::SSLContextImpl)
public:
	SSLContextImpl$AbstractTLSContext();
	void init$();
	virtual ::javax::net::ssl::SSLEngine* createSSLEngineImpl() override;
	virtual ::javax::net::ssl::SSLEngine* createSSLEngineImpl($String* host, int32_t port) override;
	virtual ::java::util::List* getServerDefaultCipherSuites() override;
	virtual ::java::util::List* getServerDefaultProtocolVersions() override;
	virtual ::java::util::List* getSupportedCipherSuites() override;
	virtual ::java::util::List* getSupportedProtocolVersions() override;
	virtual bool isDTLS() override;
	static ::java::util::List* supportedProtocols;
	static ::java::util::List* serverDefaultProtocols;
	static ::java::util::List* supportedCipherSuites;
	static ::java::util::List* serverDefaultCipherSuites;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLContextImpl$AbstractTLSContext_h_