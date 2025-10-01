#ifndef _sun_security_ssl_HelloCookieManager$Builder_h_
#define _sun_security_ssl_HelloCookieManager$Builder_h_
//$ class sun.security.ssl.HelloCookieManager$Builder
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
			class HelloCookieManager;
			class HelloCookieManager$D10HelloCookieManager;
			class HelloCookieManager$D13HelloCookieManager;
			class HelloCookieManager$T13HelloCookieManager;
			class ProtocolVersion;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class HelloCookieManager$Builder : public ::java::lang::Object {
	$class(HelloCookieManager$Builder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HelloCookieManager$Builder();
	void init$(::java::security::SecureRandom* secureRandom);
	virtual ::sun::security::ssl::HelloCookieManager* valueOf(::sun::security::ssl::ProtocolVersion* protocolVersion);
	::java::security::SecureRandom* secureRandom = nullptr;
	$volatile(::sun::security::ssl::HelloCookieManager$D10HelloCookieManager*) d10HelloCookieManager = nullptr;
	$volatile(::sun::security::ssl::HelloCookieManager$D13HelloCookieManager*) d13HelloCookieManager = nullptr;
	$volatile(::sun::security::ssl::HelloCookieManager$T13HelloCookieManager*) t13HelloCookieManager = nullptr;
	::java::util::concurrent::locks::ReentrantLock* managerLock = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_HelloCookieManager$Builder_h_