#ifndef _sun_security_ssl_TrustManagerFactoryImpl$PKIXFactory_h_
#define _sun_security_ssl_TrustManagerFactoryImpl$PKIXFactory_h_
//$ class sun.security.ssl.TrustManagerFactoryImpl$PKIXFactory
//$ extends sun.security.ssl.TrustManagerFactoryImpl

#include <sun/security/ssl/TrustManagerFactoryImpl.h>

namespace java {
	namespace util {
		class Collection;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class ManagerFactoryParameters;
			class X509TrustManager;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class TrustManagerFactoryImpl$PKIXFactory : public ::sun::security::ssl::TrustManagerFactoryImpl {
	$class(TrustManagerFactoryImpl$PKIXFactory, $NO_CLASS_INIT, ::sun::security::ssl::TrustManagerFactoryImpl)
public:
	TrustManagerFactoryImpl$PKIXFactory();
	void init$();
	virtual ::javax::net::ssl::X509TrustManager* getInstance(::java::util::Collection* trustedCerts) override;
	virtual ::javax::net::ssl::X509TrustManager* getInstance(::javax::net::ssl::ManagerFactoryParameters* spec) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_TrustManagerFactoryImpl$PKIXFactory_h_