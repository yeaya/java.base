#ifndef _sun_security_ssl_SSLContextImpl$CustomizedSSLProtocols_h_
#define _sun_security_ssl_SSLContextImpl$CustomizedSSLProtocols_h_
//$ class sun.security.ssl.SSLContextImpl$CustomizedSSLProtocols
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("JDK_TLS_SERVER_PROTOCOLS")
#undef JDK_TLS_SERVER_PROTOCOLS
#pragma push_macro("JDK_TLS_CLIENT_PROTOCOLS")
#undef JDK_TLS_CLIENT_PROTOCOLS

namespace java {
	namespace lang {
		class IllegalArgumentException;
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLContextImpl$CustomizedSSLProtocols : public ::java::lang::Object {
	$class(SSLContextImpl$CustomizedSSLProtocols, 0, ::java::lang::Object)
public:
	SSLContextImpl$CustomizedSSLProtocols();
	void init$();
	static void populate($String* propname, ::java::util::ArrayList* arrayList);
	static $String* JDK_TLS_CLIENT_PROTOCOLS;
	static $String* JDK_TLS_SERVER_PROTOCOLS;
	static ::java::lang::IllegalArgumentException* reservedException;
	static ::java::util::ArrayList* customizedClientProtocols;
	static ::java::util::ArrayList* customizedServerProtocols;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("JDK_TLS_SERVER_PROTOCOLS")
#pragma pop_macro("JDK_TLS_CLIENT_PROTOCOLS")

#endif // _sun_security_ssl_SSLContextImpl$CustomizedSSLProtocols_h_