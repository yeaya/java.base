#ifndef _sun_security_ssl_HelloCookieManager$D13HelloCookieManager_h_
#define _sun_security_ssl_HelloCookieManager$D13HelloCookieManager_h_
//$ class sun.security.ssl.HelloCookieManager$D13HelloCookieManager
//$ extends sun.security.ssl.HelloCookieManager

#include <java/lang/Array.h>
#include <sun/security/ssl/HelloCookieManager.h>

namespace java {
	namespace security {
		class SecureRandom;
	}
}
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

class HelloCookieManager$D13HelloCookieManager : public ::sun::security::ssl::HelloCookieManager {
	$class(HelloCookieManager$D13HelloCookieManager, $NO_CLASS_INIT, ::sun::security::ssl::HelloCookieManager)
public:
	HelloCookieManager$D13HelloCookieManager();
	void init$(::java::security::SecureRandom* secureRandom);
	virtual $bytes* createCookie(::sun::security::ssl::ServerHandshakeContext* context, ::sun::security::ssl::ClientHello$ClientHelloMessage* clientHello) override;
	virtual bool isCookieValid(::sun::security::ssl::ServerHandshakeContext* context, ::sun::security::ssl::ClientHello$ClientHelloMessage* clientHello, $bytes* cookie) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_HelloCookieManager$D13HelloCookieManager_h_