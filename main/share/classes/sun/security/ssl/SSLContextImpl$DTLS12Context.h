#ifndef _sun_security_ssl_SSLContextImpl$DTLS12Context_h_
#define _sun_security_ssl_SSLContextImpl$DTLS12Context_h_
//$ class sun.security.ssl.SSLContextImpl$DTLS12Context
//$ extends sun.security.ssl.SSLContextImpl$AbstractDTLSContext

#include <sun/security/ssl/SSLContextImpl$AbstractDTLSContext.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLContextImpl$DTLS12Context : public ::sun::security::ssl::SSLContextImpl$AbstractDTLSContext {
	$class(SSLContextImpl$DTLS12Context, 0, ::sun::security::ssl::SSLContextImpl$AbstractDTLSContext)
public:
	SSLContextImpl$DTLS12Context();
	void init$();
	virtual ::java::util::List* getClientDefaultCipherSuites() override;
	virtual ::java::util::List* getClientDefaultProtocolVersions() override;
	static ::java::util::List* clientDefaultProtocols;
	static ::java::util::List* clientDefaultCipherSuites;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLContextImpl$DTLS12Context_h_