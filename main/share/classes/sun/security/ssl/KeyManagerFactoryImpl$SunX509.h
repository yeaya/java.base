#ifndef _sun_security_ssl_KeyManagerFactoryImpl$SunX509_h_
#define _sun_security_ssl_KeyManagerFactoryImpl$SunX509_h_
//$ class sun.security.ssl.KeyManagerFactoryImpl$SunX509
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

class KeyManagerFactoryImpl$SunX509 : public ::sun::security::ssl::KeyManagerFactoryImpl {
	$class(KeyManagerFactoryImpl$SunX509, $NO_CLASS_INIT, ::sun::security::ssl::KeyManagerFactoryImpl)
public:
	KeyManagerFactoryImpl$SunX509();
	void init$();
	virtual void engineInit(::java::security::KeyStore* ks, $chars* password) override;
	virtual void engineInit(::javax::net::ssl::ManagerFactoryParameters* spec) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_KeyManagerFactoryImpl$SunX509_h_