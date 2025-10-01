#ifndef _sun_security_ssl_SSLContextImpl$DefaultManagersHolder_h_
#define _sun_security_ssl_SSLContextImpl$DefaultManagersHolder_h_
//$ class sun.security.ssl.SSLContextImpl$DefaultManagersHolder
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("P11KEYSTORE")
#undef P11KEYSTORE

namespace java {
	namespace lang {
		class Exception;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class KeyManager;
			class TrustManager;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLContextImpl$DefaultManagersHolder : public ::java::lang::Object {
	$class(SSLContextImpl$DefaultManagersHolder, 0, ::java::lang::Object)
public:
	SSLContextImpl$DefaultManagersHolder();
	void init$();
	static $Array<::javax::net::ssl::KeyManager>* getKeyManagers();
	static $Array<::javax::net::ssl::TrustManager>* getTrustManagers();
	static $String* NONE;
	static $String* P11KEYSTORE;
	static $Array<::javax::net::ssl::TrustManager>* trustManagers;
	static $Array<::javax::net::ssl::KeyManager>* keyManagers;
	static ::java::lang::Exception* reservedException;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("NONE")
#pragma pop_macro("P11KEYSTORE")

#endif // _sun_security_ssl_SSLContextImpl$DefaultManagersHolder_h_