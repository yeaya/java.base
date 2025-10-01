#ifndef _java_security_Policy$PolicyDelegate_h_
#define _java_security_Policy$PolicyDelegate_h_
//$ class java.security.Policy$PolicyDelegate
//$ extends java.security.Policy

#include <java/security/Policy.h>

namespace java {
	namespace security {
		class CodeSource;
		class Permission;
		class PermissionCollection;
		class Policy$Parameters;
		class PolicySpi;
		class ProtectionDomain;
		class Provider;
	}
}

namespace java {
	namespace security {

class Policy$PolicyDelegate : public ::java::security::Policy {
	$class(Policy$PolicyDelegate, $NO_CLASS_INIT, ::java::security::Policy)
public:
	Policy$PolicyDelegate();
	void init$(::java::security::PolicySpi* spi, ::java::security::Provider* p, $String* type, ::java::security::Policy$Parameters* params);
	virtual ::java::security::Policy$Parameters* getParameters() override;
	virtual ::java::security::PermissionCollection* getPermissions(::java::security::CodeSource* codesource) override;
	virtual ::java::security::PermissionCollection* getPermissions(::java::security::ProtectionDomain* domain) override;
	virtual ::java::security::Provider* getProvider() override;
	virtual $String* getType() override;
	virtual bool implies(::java::security::ProtectionDomain* domain, ::java::security::Permission* perm) override;
	virtual void refresh() override;
	::java::security::PolicySpi* spi = nullptr;
	::java::security::Provider* p = nullptr;
	$String* type = nullptr;
	::java::security::Policy$Parameters* params = nullptr;
};

	} // security
} // java

#endif // _java_security_Policy$PolicyDelegate_h_