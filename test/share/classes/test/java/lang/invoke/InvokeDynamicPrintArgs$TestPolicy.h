#ifndef _test_java_lang_invoke_InvokeDynamicPrintArgs$TestPolicy_h_
#define _test_java_lang_invoke_InvokeDynamicPrintArgs$TestPolicy_h_
//$ class test.java.lang.invoke.InvokeDynamicPrintArgs$TestPolicy
//$ extends java.security.Policy

#include <java/security/Policy.h>

#pragma push_macro("DEFAULT_POLICY")
#undef DEFAULT_POLICY

namespace java {
	namespace security {
		class CodeSource;
		class Permission;
		class PermissionCollection;
		class ProtectionDomain;
	}
}

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

class $export InvokeDynamicPrintArgs$TestPolicy : public ::java::security::Policy {
	$class(InvokeDynamicPrintArgs$TestPolicy, 0, ::java::security::Policy)
public:
	InvokeDynamicPrintArgs$TestPolicy();
	void init$();
	virtual ::java::security::PermissionCollection* getPermissions(::java::security::ProtectionDomain* domain) override;
	virtual ::java::security::PermissionCollection* getPermissions(::java::security::CodeSource* codesource) override;
	virtual bool implies(::java::security::ProtectionDomain* domain, ::java::security::Permission* perm) override;
	static ::java::security::Policy* DEFAULT_POLICY;
	::java::security::PermissionCollection* permissions = nullptr;
};

			} // invoke
		} // lang
	} // java
} // test

#pragma pop_macro("DEFAULT_POLICY")

#endif // _test_java_lang_invoke_InvokeDynamicPrintArgs$TestPolicy_h_