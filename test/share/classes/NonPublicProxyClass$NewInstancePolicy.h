#ifndef _NonPublicProxyClass$NewInstancePolicy_h_
#define _NonPublicProxyClass$NewInstancePolicy_h_
//$ class NonPublicProxyClass$NewInstancePolicy
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

class $export NonPublicProxyClass$NewInstancePolicy : public ::java::security::Policy {
	$class(NonPublicProxyClass$NewInstancePolicy, $NO_CLASS_INIT, ::java::security::Policy)
public:
	NonPublicProxyClass$NewInstancePolicy();
	void init$(bool grant);
	virtual ::java::security::PermissionCollection* getPermissions(::java::security::ProtectionDomain* domain) override;
	virtual ::java::security::PermissionCollection* getPermissions(::java::security::CodeSource* codesource) override;
	virtual bool implies(::java::security::ProtectionDomain* domain, ::java::security::Permission* perm) override;
	virtual $String* toString() override;
	::java::security::PermissionCollection* permissions = nullptr;
	bool grant = false;
};

#endif // _NonPublicProxyClass$NewInstancePolicy_h_