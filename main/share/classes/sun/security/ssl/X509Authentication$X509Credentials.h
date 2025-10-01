#ifndef _sun_security_ssl_X509Authentication$X509Credentials_h_
#define _sun_security_ssl_X509Authentication$X509Credentials_h_
//$ class sun.security.ssl.X509Authentication$X509Credentials
//$ extends sun.security.ssl.SSLCredentials

#include <java/lang/Array.h>
#include <sun/security/ssl/SSLCredentials.h>

namespace java {
	namespace security {
		class PublicKey;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class X509Authentication$X509Credentials : public ::sun::security::ssl::SSLCredentials {
	$class(X509Authentication$X509Credentials, $NO_CLASS_INIT, ::sun::security::ssl::SSLCredentials)
public:
	X509Authentication$X509Credentials();
	void init$(::java::security::PublicKey* popPublicKey, $Array<::java::security::cert::X509Certificate>* popCerts);
	$Array<::java::security::cert::X509Certificate>* popCerts = nullptr;
	::java::security::PublicKey* popPublicKey = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_X509Authentication$X509Credentials_h_