#ifndef _javax_net_ssl_TrustManagerFactory_h_
#define _javax_net_ssl_TrustManagerFactory_h_
//$ class javax.net.ssl.TrustManagerFactory
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
			class ManagerFactoryParameters;
			class TrustManager;
			class TrustManagerFactorySpi;
		}
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class $import TrustManagerFactory : public ::java::lang::Object {
	$class(TrustManagerFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TrustManagerFactory();
	void init$(::javax::net::ssl::TrustManagerFactorySpi* factorySpi, ::java::security::Provider* provider, $String* algorithm);
	$String* getAlgorithm();
	static $String* getDefaultAlgorithm();
	static ::javax::net::ssl::TrustManagerFactory* getInstance($String* algorithm);
	static ::javax::net::ssl::TrustManagerFactory* getInstance($String* algorithm, $String* provider);
	static ::javax::net::ssl::TrustManagerFactory* getInstance($String* algorithm, ::java::security::Provider* provider);
	::java::security::Provider* getProvider();
	$Array<::javax::net::ssl::TrustManager>* getTrustManagers();
	void init(::java::security::KeyStore* ks);
	void init(::javax::net::ssl::ManagerFactoryParameters* spec);
	::java::security::Provider* provider = nullptr;
	::javax::net::ssl::TrustManagerFactorySpi* factorySpi = nullptr;
	$String* algorithm = nullptr;
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_TrustManagerFactory_h_