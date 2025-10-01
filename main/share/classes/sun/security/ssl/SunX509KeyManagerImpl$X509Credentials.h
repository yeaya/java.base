#ifndef _sun_security_ssl_SunX509KeyManagerImpl$X509Credentials_h_
#define _sun_security_ssl_SunX509KeyManagerImpl$X509Credentials_h_
//$ class sun.security.ssl.SunX509KeyManagerImpl$X509Credentials
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class PrivateKey;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SunX509KeyManagerImpl$X509Credentials : public ::java::lang::Object {
	$class(SunX509KeyManagerImpl$X509Credentials, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SunX509KeyManagerImpl$X509Credentials();
	void init$(::java::security::PrivateKey* privateKey, $Array<::java::security::cert::X509Certificate>* certificates);
	virtual ::java::util::Set* getIssuerX500Principals();
	::java::security::PrivateKey* privateKey = nullptr;
	$Array<::java::security::cert::X509Certificate>* certificates = nullptr;
	::java::util::Set* issuerX500Principals = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SunX509KeyManagerImpl$X509Credentials_h_