#ifndef _javax_security_auth_Subject$SecureSet$3_h_
#define _javax_security_auth_Subject$SecureSet$3_h_
//$ class javax.security.auth.Subject$SecureSet$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace util {
		class Iterator;
	}
}
namespace javax {
	namespace security {
		namespace auth {
			class Subject$SecureSet;
		}
	}
}

namespace javax {
	namespace security {
		namespace auth {

class Subject$SecureSet$3 : public ::java::security::PrivilegedAction {
	$class(Subject$SecureSet$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Subject$SecureSet$3();
	void init$(::javax::security::auth::Subject$SecureSet* this$0, ::java::util::Iterator* val$e);
	virtual $Object* run() override;
	::javax::security::auth::Subject$SecureSet* this$0 = nullptr;
	::java::util::Iterator* val$e = nullptr;
};

		} // auth
	} // security
} // javax

#endif // _javax_security_auth_Subject$SecureSet$3_h_