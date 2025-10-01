#ifndef _java_security_IdentityScope$1_h_
#define _java_security_IdentityScope$1_h_
//$ class java.security.IdentityScope$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace security {

class IdentityScope$1 : public ::java::security::PrivilegedAction {
	$class(IdentityScope$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	IdentityScope$1();
	void init$();
	virtual $Object* run() override;
};

	} // security
} // java

#endif // _java_security_IdentityScope$1_h_