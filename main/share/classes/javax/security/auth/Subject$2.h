#ifndef _javax_security_auth_Subject$2_h_
#define _javax_security_auth_Subject$2_h_
//$ class javax.security.auth.Subject$2
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
			class Subject;
		}
	}
}

namespace javax {
	namespace security {
		namespace auth {

class Subject$2 : public ::java::security::PrivilegedAction {
	$class(Subject$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Subject$2();
	void init$(::javax::security::auth::Subject* val$subject, ::java::security::AccessControlContext* val$acc);
	virtual $Object* run() override;
	::java::security::AccessControlContext* val$acc = nullptr;
	::javax::security::auth::Subject* val$subject = nullptr;
};

		} // auth
	} // security
} // javax

#endif // _javax_security_auth_Subject$2_h_