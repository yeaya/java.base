#ifndef _sun_security_ssl_SSLKeyExchange$SSLKeyExRSAExport_h_
#define _sun_security_ssl_SSLKeyExchange$SSLKeyExRSAExport_h_
//$ class sun.security.ssl.SSLKeyExchange$SSLKeyExRSAExport
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

class SSLKeyExchange$SSLKeyExRSAExport : public ::java::lang::Object {
	$class(SSLKeyExchange$SSLKeyExRSAExport, 0, ::java::lang::Object)
public:
	SSLKeyExchange$SSLKeyExRSAExport();
	void init$();
	static ::sun::security::ssl::SSLKeyExchange* KE;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("KE")

#endif // _sun_security_ssl_SSLKeyExchange$SSLKeyExRSAExport_h_