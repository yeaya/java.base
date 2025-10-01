#ifndef _javax_net_ssl_TrustManagerFactorySpi_h_
#define _javax_net_ssl_TrustManagerFactorySpi_h_
//$ class javax.net.ssl.TrustManagerFactorySpi
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
			class ManagerFactoryParameters;
			class TrustManager;
		}
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class $export TrustManagerFactorySpi : public ::java::lang::Object {
	$class(TrustManagerFactorySpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TrustManagerFactorySpi();
	void init$();
	virtual $Array<::javax::net::ssl::TrustManager>* engineGetTrustManagers() {return nullptr;}
	virtual void engineInit(::java::security::KeyStore* ks) {}
	virtual void engineInit(::javax::net::ssl::ManagerFactoryParameters* spec) {}
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_TrustManagerFactorySpi_h_