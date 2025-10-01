#ifndef _sun_security_ssl_SSLKeyExchange$SSLKeyExECDHERSAOrPSS_h_
#define _sun_security_ssl_SSLKeyExchange$SSLKeyExECDHERSAOrPSS_h_
//$ class sun.security.ssl.SSLKeyExchange$SSLKeyExECDHERSAOrPSS
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

class SSLKeyExchange$SSLKeyExECDHERSAOrPSS : public ::java::lang::Object {
	$class(SSLKeyExchange$SSLKeyExECDHERSAOrPSS, 0, ::java::lang::Object)
public:
	SSLKeyExchange$SSLKeyExECDHERSAOrPSS();
	void init$();
	static ::sun::security::ssl::SSLKeyExchange* KE;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("KE")

#endif // _sun_security_ssl_SSLKeyExchange$SSLKeyExECDHERSAOrPSS_h_