#ifndef _sun_security_ssl_KeyManagerFactoryImpl$X509_h_
#define _sun_security_ssl_KeyManagerFactoryImpl$X509_h_
//$ class sun.security.ssl.KeyManagerFactoryImpl$X509
//$ extends sun.security.ssl.KeyManagerFactoryImpl

#include <java/lang/Array.h>
#include <sun/security/ssl/KeyManagerFactoryImpl.h>

namespace java {
	namespace security {
		class KeyStore;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class ManagerFactoryParameters;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class KeyManagerFactoryImpl$X509 : public ::sun::security::ssl::KeyManagerFactoryImpl {
	$class(KeyManagerFactoryImpl$X509, $NO_CLASS_INIT, ::sun::security::ssl::KeyManagerFactoryImpl)
public:
	KeyManagerFactoryImpl$X509();
	void init$();
	virtual void engineInit(::java::security::KeyStore* ks, $chars* password) override;
	virtual void engineInit(::javax::net::ssl::ManagerFactoryParameters* params) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_KeyManagerFactoryImpl$X509_h_