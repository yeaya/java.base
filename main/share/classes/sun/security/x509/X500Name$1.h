#ifndef _sun_security_x509_X500Name$1_h_
#define _sun_security_x509_X500Name$1_h_
//$ class sun.security.x509.X500Name$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace sun {
	namespace security {
		namespace x509 {

class X500Name$1 : public ::java::security::PrivilegedExceptionAction {
	$class(X500Name$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	X500Name$1();
	void init$();
	virtual $Object* run() override;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_X500Name$1_h_