#ifndef _sun_security_ssl_HelloCookieManager$T13HelloCookieManager_h_
#define _sun_security_ssl_HelloCookieManager$T13HelloCookieManager_h_
//$ class sun.security.ssl.HelloCookieManager$T13HelloCookieManager
//$ extends sun.security.ssl.HelloCookieManager

#include <java/lang/Array.h>
#include <sun/security/ssl/HelloCookieManager.h>

namespace java {
	namespace security {
		class SecureRandom;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class ReentrantLock;
			}
		}
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

class HelloCookieManager$T13HelloCookieManager : public ::sun::security::ssl::HelloCookieManager {
	$class(HelloCookieManager$T13HelloCookieManager, $NO_CLASS_INIT, ::sun::security::ssl::HelloCookieManager)
public:
	HelloCookieManager$T13HelloCookieManager();
	void init$(::java::security::SecureRandom* secureRandom);
	virtual $bytes* createCookie(::sun::security::ssl::ServerHandshakeContext* context, ::sun::security::ssl::ClientHello$ClientHelloMessage* clientHello) override;
	virtual bool isCookieValid(::sun::security::ssl::ServerHandshakeContext* context, ::sun::security::ssl::ClientHello$ClientHelloMessage* clientHello, $bytes* cookie) override;
	::java::security::SecureRandom* secureRandom = nullptr;
	int32_t cookieVersion = 0;
	$bytes* cookieSecret = nullptr;
	$bytes* legacySecret = nullptr;
	::java::util::concurrent::locks::ReentrantLock* t13ManagerLock = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_HelloCookieManager$T13HelloCookieManager_h_