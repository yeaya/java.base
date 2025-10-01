#ifndef _sun_security_ssl_SSLContextImpl$CustomizedDTLSContext_h_
#define _sun_security_ssl_SSLContextImpl$CustomizedDTLSContext_h_
//$ class sun.security.ssl.SSLContextImpl$CustomizedDTLSContext
//$ extends sun.security.ssl.SSLContextImpl$AbstractDTLSContext

#include <sun/security/ssl/SSLContextImpl$AbstractDTLSContext.h>

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

class SSLContextImpl$CustomizedDTLSContext : public ::sun::security::ssl::SSLContextImpl$AbstractDTLSContext {
	$class(SSLContextImpl$CustomizedDTLSContext, 0, ::sun::security::ssl::SSLContextImpl$AbstractDTLSContext)
public:
	SSLContextImpl$CustomizedDTLSContext();
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

#endif // _sun_security_ssl_SSLContextImpl$CustomizedDTLSContext_h_