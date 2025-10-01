#ifndef _java_security_AccessControlContext$1_h_
#define _java_security_AccessControlContext$1_h_
//$ class java.security.AccessControlContext$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace security {
		class AccessControlContext;
		class ProtectionDomain;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}

namespace java {
	namespace security {

class AccessControlContext$1 : public ::java::security::PrivilegedAction {
	$class(AccessControlContext$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	AccessControlContext$1();
	void init$(::java::security::AccessControlContext* this$0, ::sun::security::util::Debug* val$db, ::java::security::ProtectionDomain* val$pd);
	virtual $Object* run() override;
	::java::security::AccessControlContext* this$0 = nullptr;
	::java::security::ProtectionDomain* val$pd = nullptr;
	::sun::security::util::Debug* val$db = nullptr;
};

	} // security
} // java

#endif // _java_security_AccessControlContext$1_h_