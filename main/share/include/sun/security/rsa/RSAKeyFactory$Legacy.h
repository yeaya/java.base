#ifndef _sun_security_rsa_RSAKeyFactory$Legacy_h_
#define _sun_security_rsa_RSAKeyFactory$Legacy_h_
//$ class sun.security.rsa.RSAKeyFactory$Legacy
//$ extends sun.security.rsa.RSAKeyFactory

#include <sun/security/rsa/RSAKeyFactory.h>

namespace sun {
	namespace security {
		namespace rsa {

class $import RSAKeyFactory$Legacy : public ::sun::security::rsa::RSAKeyFactory {
	$class(RSAKeyFactory$Legacy, $NO_CLASS_INIT, ::sun::security::rsa::RSAKeyFactory)
public:
	RSAKeyFactory$Legacy();
	void init$();
};

		} // rsa
	} // security
} // sun

#endif // _sun_security_rsa_RSAKeyFactory$Legacy_h_