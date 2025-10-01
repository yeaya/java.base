#ifndef _sun_security_ssl_ECDHKeyExchange_h_
#define _sun_security_ssl_ECDHKeyExchange_h_
//$ class sun.security.ssl.ECDHKeyExchange
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

class ECDHKeyExchange : public ::java::lang::Object {
	$class(ECDHKeyExchange, 0, ::java::lang::Object)
public:
	ECDHKeyExchange();
	void init$();
	static ::sun::security::ssl::SSLPossessionGenerator* poGenerator;
	static ::sun::security::ssl::SSLKeyAgreementGenerator* ecdhKAGenerator;
	static ::sun::security::ssl::SSLKeyAgreementGenerator* ecdheKAGenerator;
	static ::sun::security::ssl::SSLKeyAgreementGenerator* ecdheXdhKAGenerator;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ECDHKeyExchange_h_