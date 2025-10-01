#ifndef _SecurityManagerClinit$SimplePolicy_h_
#define _SecurityManagerClinit$SimplePolicy_h_
//$ class SecurityManagerClinit$SimplePolicy
//$ extends java.security.Policy

#include <java/lang/Array.h>
#include <java/security/Policy.h>

#pragma push_macro("DEFAULT_POLICY")
#undef DEFAULT_POLICY

namespace java {
	namespace security {
		class Permission;
		class Permissions;
		class ProtectionDomain;
	}
}

class SecurityManagerClinit$SimplePolicy : public ::java::security::Policy {
	$class(SecurityManagerClinit$SimplePolicy, 0, ::java::security::Policy)
public:
	SecurityManagerClinit$SimplePolicy();
	void init$($Array<::java::security::Permission>* permissions);
	virtual bool implies(::java::security::ProtectionDomain* pd, ::java::security::Permission* p) override;
	static ::java::security::Policy* DEFAULT_POLICY;
	::java::security::Permissions* perms = nullptr;
};

#pragma pop_macro("DEFAULT_POLICY")

#endif // _SecurityManagerClinit$SimplePolicy_h_