#ifndef _sun_security_ssl_SSLKeyExchange$SSLKeyExDHERSA_h_
#define _sun_security_ssl_SSLKeyExchange$SSLKeyExDHERSA_h_
//$ class sun.security.ssl.SSLKeyExchange$SSLKeyExDHERSA
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

class SSLKeyExchange$SSLKeyExDHERSA : public ::java::lang::Object {
	$class(SSLKeyExchange$SSLKeyExDHERSA, 0, ::java::lang::Object)
public:
	SSLKeyExchange$SSLKeyExDHERSA();
	void init$();
	static ::sun::security::ssl::SSLKeyExchange* KE;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("KE")

#endif // _sun_security_ssl_SSLKeyExchange$SSLKeyExDHERSA_h_