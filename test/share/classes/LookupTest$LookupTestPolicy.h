#ifndef _LookupTest$LookupTestPolicy_h_
#define _LookupTest$LookupTestPolicy_h_
//$ class LookupTest$LookupTestPolicy
//$ extends java.security.Policy

#include <java/security/Policy.h>

namespace java {
	namespace security {
		class CodeSource;
		class Permission;
		class PermissionCollection;
		class ProtectionDomain;
	}
}

class $export LookupTest$LookupTestPolicy : public ::java::security::Policy {
	$class(LookupTest$LookupTestPolicy, $NO_CLASS_INIT, ::java::security::Policy)
public:
	LookupTest$LookupTestPolicy();
	void init$();
	virtual ::java::security::PermissionCollection* getPermissions(::java::security::ProtectionDomain* domain) override;
	virtual ::java::security::PermissionCollection* getPermissions(::java::security::CodeSource* codesource) override;
	virtual bool implies(::java::security::ProtectionDomain* domain, ::java::security::Permission* perm) override;
	::java::security::PermissionCollection* perms = nullptr;
};

#endif // _LookupTest$LookupTestPolicy_h_