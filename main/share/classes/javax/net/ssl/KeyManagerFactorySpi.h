#ifndef _javax_net_ssl_KeyManagerFactorySpi_h_
#define _javax_net_ssl_KeyManagerFactorySpi_h_
//$ class javax.net.ssl.KeyManagerFactorySpi
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class KeyStore;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class KeyManager;
			class ManagerFactoryParameters;
		}
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class $export KeyManagerFactorySpi : public ::java::lang::Object {
	$class(KeyManagerFactorySpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	KeyManagerFactorySpi();
	void init$();
	virtual $Array<::javax::net::ssl::KeyManager>* engineGetKeyManagers() {return nullptr;}
	virtual void engineInit(::java::security::KeyStore* ks, $chars* password) {}
	virtual void engineInit(::javax::net::ssl::ManagerFactoryParameters* spec) {}
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_KeyManagerFactorySpi_h_