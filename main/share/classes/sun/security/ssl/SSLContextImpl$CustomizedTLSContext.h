#ifndef _sun_security_ssl_SSLContextImpl$CustomizedTLSContext_h_
#define _sun_security_ssl_SSLContextImpl$CustomizedTLSContext_h_
//$ class sun.security.ssl.SSLContextImpl$CustomizedTLSContext
//$ extends sun.security.ssl.SSLContextImpl$AbstractTLSContext

#include <sun/security/ssl/SSLContextImpl$AbstractTLSContext.h>

namespace java {
	namespace lang {
		class IllegalArgumentException;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLContextImpl$CustomizedTLSContext : public ::sun::security::ssl::SSLContextImpl$AbstractTLSContext {
	$class(SSLContextImpl$CustomizedTLSContext, 0, ::sun::security::ssl::SSLContextImpl$AbstractTLSContext)
public:
	SSLContextImpl$CustomizedTLSContext();
	void init$();
	static ::java::util::List* customizedProtocols(bool client, ::java::util::List* customized);
	virtual ::java::util::List* getClientDefaultCipherSuites() override;
	virtual ::java::util::List* getClientDefaultProtocolVersions() override;
	virtual ::java::util::List* getServerDefaultCipherSuites() override;
	virtual ::java::util::List* getServerDefaultProtocolVersions() override;
	static ::java::util::List* clientDefaultProtocols;
	static ::java::util::List* serverDefaultProtocols;
	static ::java::util::List* clientDefaultCipherSuites;
	static ::java::util::List* serverDefaultCipherSuites;
	static ::java::lang::IllegalArgumentException* reservedException;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLContextImpl$CustomizedTLSContext_h_