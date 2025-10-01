#ifndef _sun_security_pkcs12_PKCS12KeyStore$1_h_
#define _sun_security_pkcs12_PKCS12KeyStore$1_h_
//$ class sun.security.pkcs12.PKCS12KeyStore$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace security {
		namespace pkcs12 {

class PKCS12KeyStore$1 : public ::java::security::PrivilegedAction {
	$class(PKCS12KeyStore$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	PKCS12KeyStore$1();
	void init$();
	virtual $Object* run() override;
};

		} // pkcs12
	} // security
} // sun

#endif // _sun_security_pkcs12_PKCS12KeyStore$1_h_