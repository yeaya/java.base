#ifndef _sun_security_ssl_SSLKeyExchange$SSLKeyExECDHRSA_h_
#define _sun_security_ssl_SSLKeyExchange$SSLKeyExECDHRSA_h_
//$ class sun.security.ssl.SSLKeyExchange$SSLKeyExECDHRSA
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

class SSLKeyExchange$SSLKeyExECDHRSA : public ::java::lang::Object {
	$class(SSLKeyExchange$SSLKeyExECDHRSA, 0, ::java::lang::Object)
public:
	SSLKeyExchange$SSLKeyExECDHRSA();
	void init$();
	static ::sun::security::ssl::SSLKeyExchange* KE;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("KE")

#endif // _sun_security_ssl_SSLKeyExchange$SSLKeyExECDHRSA_h_