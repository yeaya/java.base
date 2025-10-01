#ifndef _javax_net_ssl_SSLSessionContext_h_
#define _javax_net_ssl_SSLSessionContext_h_
//$ interface javax.net.ssl.SSLSessionContext
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Enumeration;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SSLSession;
		}
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class $import SSLSessionContext : public ::java::lang::Object {
	$interface(SSLSessionContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::Enumeration* getIds() {return nullptr;}
	virtual ::javax::net::ssl::SSLSession* getSession($bytes* sessionId) {return nullptr;}
	virtual int32_t getSessionCacheSize() {return 0;}
	virtual int32_t getSessionTimeout() {return 0;}
	virtual void setSessionCacheSize(int32_t size) {}
	virtual void setSessionTimeout(int32_t seconds) {}
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_SSLSessionContext_h_