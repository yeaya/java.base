#ifndef _sun_security_rsa_RSAKeyFactory$PSS_h_
#define _sun_security_rsa_RSAKeyFactory$PSS_h_
//$ class sun.security.rsa.RSAKeyFactory$PSS
//$ extends sun.security.rsa.RSAKeyFactory

#include <sun/security/rsa/RSAKeyFactory.h>

namespace sun {
	namespace security {
		namespace rsa {

class $export RSAKeyFactory$PSS : public ::sun::security::rsa::RSAKeyFactory {
	$class(RSAKeyFactory$PSS, $NO_CLASS_INIT, ::sun::security::rsa::RSAKeyFactory)
public:
	RSAKeyFactory$PSS();
	void init$();
};

		} // rsa
	} // security
} // sun

#endif // _sun_security_rsa_RSAKeyFactory$PSS_h_