#ifndef _sun_security_ssl_RSAKeyExchange_h_
#define _sun_security_ssl_RSAKeyExchange_h_
//$ class sun.security.ssl.RSAKeyExchange
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace ssl {
			class SSLKeyAgreementGenerator;
			class SSLPossessionGenerator;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class RSAKeyExchange : public ::java::lang::Object {
	$class(RSAKeyExchange, 0, ::java::lang::Object)
public:
	RSAKeyExchange();
	void init$();
	static ::sun::security::ssl::SSLPossessionGenerator* poGenerator;
	static ::sun::security::ssl::SSLKeyAgreementGenerator* kaGenerator;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_RSAKeyExchange_h_