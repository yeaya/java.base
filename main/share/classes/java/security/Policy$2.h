#ifndef _java_security_Policy$2_h_
#define _java_security_Policy$2_h_
//$ class java.security.Policy$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace security {

class Policy$2 : public ::java::security::PrivilegedAction {
	$class(Policy$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Policy$2();
	void init$($String* val$policyProvider);
	virtual $Object* run() override;
	$String* val$policyProvider = nullptr;
};

	} // security
} // java

#endif // _java_security_Policy$2_h_