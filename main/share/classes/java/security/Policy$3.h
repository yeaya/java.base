#ifndef _java_security_Policy$3_h_
#define _java_security_Policy$3_h_
//$ class java.security.Policy$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace security {
		class Policy;
	}
}

namespace java {
	namespace security {

class Policy$3 : public ::java::security::PrivilegedAction {
	$class(Policy$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Policy$3();
	void init$(::java::security::Policy* val$p);
	virtual $Object* run() override;
	::java::security::Policy* val$p = nullptr;
};

	} // security
} // java

#endif // _java_security_Policy$3_h_