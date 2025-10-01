#ifndef _sun_security_ssl_HelloCookieManager_h_
#define _sun_security_ssl_HelloCookieManager_h_
//$ class sun.security.ssl.HelloCookieManager
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace security {
		namespace ssl {
			class ClientHello$ClientHelloMessage;
			class ServerHandshakeContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class HelloCookieManager : public ::java::lang::Object {
	$class(HelloCookieManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HelloCookieManager();
	void init$();
	virtual $bytes* createCookie(::sun::security::ssl::ServerHandshakeContext* context, ::sun::security::ssl::ClientHello$ClientHelloMessage* clientHello) {return nullptr;}
	virtual bool isCookieValid(::sun::security::ssl::ServerHandshakeContext* context, ::sun::security::ssl::ClientHello$ClientHelloMessage* clientHello, $bytes* cookie) {return false;}
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_HelloCookieManager_h_