#ifndef _sun_security_ssl_SSLKeyExchange$SSLKeyExECDHEECDSA_h_
#define _sun_security_ssl_SSLKeyExchange$SSLKeyExECDHEECDSA_h_
//$ class sun.security.ssl.SSLKeyExchange$SSLKeyExECDHEECDSA
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

class SSLKeyExchange$SSLKeyExECDHEECDSA : public ::java::lang::Object {
	$class(SSLKeyExchange$SSLKeyExECDHEECDSA, 0, ::java::lang::Object)
public:
	SSLKeyExchange$SSLKeyExECDHEECDSA();
	void init$();
	static ::sun::security::ssl::SSLKeyExchange* KE;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("KE")

#endif // _sun_security_ssl_SSLKeyExchange$SSLKeyExECDHEECDSA_h_