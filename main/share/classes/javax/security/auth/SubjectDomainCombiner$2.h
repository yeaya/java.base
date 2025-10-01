#ifndef _javax_security_auth_SubjectDomainCombiner$2_h_
#define _javax_security_auth_SubjectDomainCombiner$2_h_
//$ class javax.security.auth.SubjectDomainCombiner$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace security {
		class ProtectionDomain;
	}
}

namespace javax {
	namespace security {
		namespace auth {

class SubjectDomainCombiner$2 : public ::java::security::PrivilegedAction {
	$class(SubjectDomainCombiner$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SubjectDomainCombiner$2();
	void init$(::java::security::ProtectionDomain* val$pd);
	virtual $Object* run() override;
	::java::security::ProtectionDomain* val$pd = nullptr;
};

		} // auth
	} // security
} // javax

#endif // _javax_security_auth_SubjectDomainCombiner$2_h_