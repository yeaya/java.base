#ifndef _sun_security_ssl_TrustManagerFactoryImpl_h_
#define _sun_security_ssl_TrustManagerFactoryImpl_h_
//$ class sun.security.ssl.TrustManagerFactoryImpl
//$ extends javax.net.ssl.TrustManagerFactorySpi

#include <java/lang/Array.h>
#include <javax/net/ssl/TrustManagerFactorySpi.h>

namespace java {
	namespace io {
		class File;
		class FileInputStream;
	}
}
namespace java {
	namespace security {
		class KeyStore;
	}
}
namespace java {
	namespace util {
		class Collection;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class ManagerFactoryParameters;
			class TrustManager;
			class X509TrustManager;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class TrustManagerFactoryImpl : public ::javax::net::ssl::TrustManagerFactorySpi {
	$class(TrustManagerFactoryImpl, $NO_CLASS_INIT, ::javax::net::ssl::TrustManagerFactorySpi)
public:
	TrustManagerFactoryImpl();
	void init$();
	virtual $Array<::javax::net::ssl::TrustManager>* engineGetTrustManagers() override;
	virtual void engineInit(::java::security::KeyStore* ks) override;
	virtual void engineInit(::javax::net::ssl::ManagerFactoryParameters* spec) override;
	static ::java::io::FileInputStream* getFileInputStream(::java::io::File* file);
	virtual ::javax::net::ssl::X509TrustManager* getInstance(::java::util::Collection* trustedCerts) {return nullptr;}
	virtual ::javax::net::ssl::X509TrustManager* getInstance(::javax::net::ssl::ManagerFactoryParameters* spec) {return nullptr;}
	::javax::net::ssl::X509TrustManager* trustManager = nullptr;
	bool isInitialized = false;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_TrustManagerFactoryImpl_h_