#ifndef _sun_security_ssl_DHKeyExchange_h_
#define _sun_security_ssl_DHKeyExchange_h_
//$ class sun.security.ssl.DHKeyExchange
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

class DHKeyExchange : public ::java::lang::Object {
	$class(DHKeyExchange, 0, ::java::lang::Object)
public:
	DHKeyExchange();
	void init$();
	static ::sun::security::ssl::SSLPossessionGenerator* poGenerator;
	static ::sun::security::ssl::SSLPossessionGenerator* poExportableGenerator;
	static ::sun::security::ssl::SSLKeyAgreementGenerator* kaGenerator;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_DHKeyExchange_h_