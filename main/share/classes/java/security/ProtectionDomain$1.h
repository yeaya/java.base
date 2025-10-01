#ifndef _java_security_ProtectionDomain$1_h_
#define _java_security_ProtectionDomain$1_h_
//$ class java.security.ProtectionDomain$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace security {
		class ProtectionDomain;
	}
}

namespace java {
	namespace security {

class ProtectionDomain$1 : public ::java::security::PrivilegedAction {
	$class(ProtectionDomain$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ProtectionDomain$1();
	void init$(::java::security::ProtectionDomain* this$0);
	virtual $Object* run() override;
	::java::security::ProtectionDomain* this$0 = nullptr;
};

	} // security
} // java

#endif // _java_security_ProtectionDomain$1_h_