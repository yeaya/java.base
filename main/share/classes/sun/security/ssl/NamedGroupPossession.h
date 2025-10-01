#ifndef _sun_security_ssl_NamedGroupPossession_h_
#define _sun_security_ssl_NamedGroupPossession_h_
//$ interface sun.security.ssl.NamedGroupPossession
//$ extends sun.security.ssl.SSLPossession

#include <sun/security/ssl/SSLPossession.h>

namespace java {
	namespace security {
		class PrivateKey;
		class PublicKey;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class NamedGroup;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class NamedGroupPossession : public ::sun::security::ssl::SSLPossession {
	$interface(NamedGroupPossession, $NO_CLASS_INIT, ::sun::security::ssl::SSLPossession)
public:
	virtual ::sun::security::ssl::NamedGroup* getNamedGroup() {return nullptr;}
	virtual ::java::security::PrivateKey* getPrivateKey() {return nullptr;}
	virtual ::java::security::PublicKey* getPublicKey() {return nullptr;}
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_NamedGroupPossession_h_