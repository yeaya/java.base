#ifndef _javax_security_auth_SubjectDomainCombiner$1_h_
#define _javax_security_auth_SubjectDomainCombiner$1_h_
//$ class javax.security.auth.SubjectDomainCombiner$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace security {
		namespace auth {
			class Subject;
			class SubjectDomainCombiner;
		}
	}
}

namespace javax {
	namespace security {
		namespace auth {

class SubjectDomainCombiner$1 : public ::java::security::PrivilegedAction {
	$class(SubjectDomainCombiner$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SubjectDomainCombiner$1();
	void init$(::javax::security::auth::SubjectDomainCombiner* this$0, ::javax::security::auth::Subject* val$s);
	virtual $Object* run() override;
	::javax::security::auth::SubjectDomainCombiner* this$0 = nullptr;
	::javax::security::auth::Subject* val$s = nullptr;
};

		} // auth
	} // security
} // javax

#endif // _javax_security_auth_SubjectDomainCombiner$1_h_