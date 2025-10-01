#ifndef _javax_security_auth_Subject$1_h_
#define _javax_security_auth_Subject$1_h_
//$ class javax.security.auth.Subject$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace security {
		class AccessControlContext;
	}
}

namespace javax {
	namespace security {
		namespace auth {

class Subject$1 : public ::java::security::PrivilegedAction {
	$class(Subject$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Subject$1();
	void init$(::java::security::AccessControlContext* val$acc);
	virtual $Object* run() override;
	::java::security::AccessControlContext* val$acc = nullptr;
};

		} // auth
	} // security
} // javax

#endif // _javax_security_auth_Subject$1_h_