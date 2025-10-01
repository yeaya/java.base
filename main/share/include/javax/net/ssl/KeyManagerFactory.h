#ifndef _javax_net_ssl_KeyManagerFactory_h_
#define _javax_net_ssl_KeyManagerFactory_h_
//$ class javax.net.ssl.KeyManagerFactory
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class KeyStore;
		class Provider;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class KeyManager;
			class KeyManagerFactorySpi;
			class ManagerFactoryParameters;
		}
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class $import KeyManagerFactory : public ::java::lang::Object {
	$class(KeyManagerFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	KeyManagerFactory();
	void init$(::javax::net::ssl::KeyManagerFactorySpi* factorySpi, ::java::security::Provider* provider, $String* algorithm);
	$String* getAlgorithm();
	static $String* getDefaultAlgorithm();
	static ::javax::net::ssl::KeyManagerFactory* getInstance($String* algorithm);
	static ::javax::net::ssl::KeyManagerFactory* getInstance($String* algorithm, $String* provider);
	static ::javax::net::ssl::KeyManagerFactory* getInstance($String* algorithm, ::java::security::Provider* provider);
	$Array<::javax::net::ssl::KeyManager>* getKeyManagers();
	::java::security::Provider* getProvider();
	void init(::java::security::KeyStore* ks, $chars* password);
	void init(::javax::net::ssl::ManagerFactoryParameters* spec);
	::java::security::Provider* provider = nullptr;
	::javax::net::ssl::KeyManagerFactorySpi* factorySpi = nullptr;
	$String* algorithm = nullptr;
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_KeyManagerFactory_h_