#ifndef _sun_security_ssl_X509Authentication$X509Possession_h_
#define _sun_security_ssl_X509Authentication$X509Possession_h_
//$ class sun.security.ssl.X509Authentication$X509Possession
//$ extends sun.security.ssl.SSLPossession

#include <java/lang/Array.h>
#include <sun/security/ssl/SSLPossession.h>

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
	namespace security {
		namespace spec {
			class ECParameterSpec;
			class NamedParameterSpec;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class X509Authentication$X509Possession : public ::sun::security::ssl::SSLPossession {
	$class(X509Authentication$X509Possession, $NO_CLASS_INIT, ::sun::security::ssl::SSLPossession)
public:
	X509Authentication$X509Possession();
	void init$(::java::security::PrivateKey* popPrivateKey, $Array<::java::security::cert::X509Certificate>* popCerts);
	::java::security::spec::ECParameterSpec* getECParameterSpec();
	::java::security::spec::NamedParameterSpec* getXECParameterSpec();
	$Array<::java::security::cert::X509Certificate>* popCerts = nullptr;
	::java::security::PrivateKey* popPrivateKey = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_X509Authentication$X509Possession_h_