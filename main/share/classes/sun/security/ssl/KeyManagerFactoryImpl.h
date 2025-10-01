#ifndef _sun_security_ssl_KeyManagerFactoryImpl_h_
#define _sun_security_ssl_KeyManagerFactoryImpl_h_
//$ class sun.security.ssl.KeyManagerFactoryImpl
//$ extends javax.net.ssl.KeyManagerFactorySpi

#include <java/lang/Array.h>
#include <javax/net/ssl/KeyManagerFactorySpi.h>

namespace javax {
	namespace net {
		namespace ssl {
			class KeyManager;
			class X509ExtendedKeyManager;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class KeyManagerFactoryImpl : public ::javax::net::ssl::KeyManagerFactorySpi {
	$class(KeyManagerFactoryImpl, $NO_CLASS_INIT, ::javax::net::ssl::KeyManagerFactorySpi)
public:
	KeyManagerFactoryImpl();
	void init$();
	virtual $Array<::javax::net::ssl::KeyManager>* engineGetKeyManagers() override;
	::javax::net::ssl::X509ExtendedKeyManager* keyManager = nullptr;
	bool isInitialized = false;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_KeyManagerFactoryImpl_h_