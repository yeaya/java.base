#ifndef _sun_security_ssl_XDHKeyExchange_h_
#define _sun_security_ssl_XDHKeyExchange_h_
//$ class sun.security.ssl.XDHKeyExchange
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace ssl {
			class SSLKeyAgreementGenerator;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class XDHKeyExchange : public ::java::lang::Object {
	$class(XDHKeyExchange, 0, ::java::lang::Object)
public:
	XDHKeyExchange();
	void init$();
	static ::sun::security::ssl::SSLKeyAgreementGenerator* xdheKAGenerator;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_XDHKeyExchange_h_