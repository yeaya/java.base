#ifndef _GetCallerClassTest$1_h_
#define _GetCallerClassTest$1_h_
//$ class GetCallerClassTest$1
//$ extends java.security.Policy

#include <java/security/Policy.h>

namespace java {
	namespace security {
		class Permission;
		class PermissionCollection;
		class ProtectionDomain;
	}
}

class GetCallerClassTest$1 : public ::java::security::Policy {
	$class(GetCallerClassTest$1, $NO_CLASS_INIT, ::java::security::Policy)
public:
	GetCallerClassTest$1();
	void init$(::java::security::PermissionCollection* val$perms);
	virtual bool implies(::java::security::ProtectionDomain* domain, ::java::security::Permission* p) override;
	::java::security::PermissionCollection* val$perms = nullptr;
};

#endif // _GetCallerClassTest$1_h_