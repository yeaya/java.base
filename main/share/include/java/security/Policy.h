#ifndef _java_security_Policy_h_
#define _java_security_Policy_h_
//$ class java.security.Policy
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT_POLICY")
#undef DEFAULT_POLICY
#pragma push_macro("UNSUPPORTED_EMPTY_COLLECTION")
#undef UNSUPPORTED_EMPTY_COLLECTION

namespace java {
	namespace security {
		class CodeSource;
		class NoSuchAlgorithmException;
		class Permission;
		class PermissionCollection;
		class Policy$Parameters;
		class Policy$PolicyInfo;
		class ProtectionDomain;
		class Provider;
	}
}
namespace java {
	namespace util {
		class WeakHashMap;
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

class $import Policy : public ::java::lang::Object {
	$class(Policy, 0, ::java::lang::Object)
public:
	Policy();
	void init$();
	void addStaticPerms(::java::security::PermissionCollection* perms, ::java::security::PermissionCollection* statics);
	static void checkPermission($String* type);
	static ::java::security::Policy* getInstance($String* type, ::java::security::Policy$Parameters* params);
	static ::java::security::Policy* getInstance($String* type, ::java::security::Policy$Parameters* params, $String* provider);
	static ::java::security::Policy* getInstance($String* type, ::java::security::Policy$Parameters* params, ::java::security::Provider* provider);
	virtual ::java::security::Policy$Parameters* getParameters();
	virtual ::java::security::PermissionCollection* getPermissions(::java::security::CodeSource* codesource);
	virtual ::java::security::PermissionCollection* getPermissions(::java::security::ProtectionDomain* domain);
	static ::java::security::Policy* getPolicy();
	static ::java::security::Policy* getPolicyNoCheck();
	virtual ::java::security::Provider* getProvider();
	virtual $String* getType();
	static ::java::security::Policy* handleException(::java::security::NoSuchAlgorithmException* nsae);
	virtual bool implies(::java::security::ProtectionDomain* domain, ::java::security::Permission* permission);
	static void initPolicy(::java::security::Policy* p);
	static bool isSet();
	static ::java::security::Policy* loadPolicyProvider();
	virtual void refresh();
	static void setPolicy(::java::security::Policy* p);
	static ::java::security::PermissionCollection* UNSUPPORTED_EMPTY_COLLECTION;
	static $volatile(::java::security::Policy$PolicyInfo*) policyInfo;
	static ::sun::security::util::Debug* debug;
	static $String* DEFAULT_POLICY;
	::java::util::WeakHashMap* pdMapping = nullptr;
};

	} // security
} // java

#pragma pop_macro("DEFAULT_POLICY")
#pragma pop_macro("UNSUPPORTED_EMPTY_COLLECTION")

#endif // _java_security_Policy_h_