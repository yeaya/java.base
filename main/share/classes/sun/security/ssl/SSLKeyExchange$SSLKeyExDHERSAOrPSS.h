#ifndef _sun_security_ssl_SSLKeyExchange$SSLKeyExDHERSAOrPSS_h_
#define _sun_security_ssl_SSLKeyExchange$SSLKeyExDHERSAOrPSS_h_
//$ class sun.security.ssl.SSLKeyExchange$SSLKeyExDHERSAOrPSS
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("KE")
#undef KE

namespace sun {
	namespace security {
		namespace ssl {
			class SSLKeyExchange;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLKeyExchange$SSLKeyExDHERSAOrPSS : public ::java::lang::Object {
	$class(SSLKeyExchange$SSLKeyExDHERSAOrPSS, 0, ::java::lang::Object)
public:
	SSLKeyExchange$SSLKeyExDHERSAOrPSS();
	void init$();
	static ::sun::security::ssl::SSLKeyExchange* KE;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("KE")

#endif // _sun_security_ssl_SSLKeyExchange$SSLKeyExDHERSAOrPSS_h_