#ifndef _ParameterAnnotations$MyPolicy_h_
#define _ParameterAnnotations$MyPolicy_h_
//$ class ParameterAnnotations$MyPolicy
//$ extends java.security.Policy

#include <java/security/Policy.h>

namespace java {
	namespace security {
		class Permission;
		class ProtectionDomain;
	}
}

class $export ParameterAnnotations$MyPolicy : public ::java::security::Policy {
	$class(ParameterAnnotations$MyPolicy, $NO_CLASS_INIT, ::java::security::Policy)
public:
	ParameterAnnotations$MyPolicy();
	void init$(::java::security::Policy* defaultPolicy);
	virtual bool implies(::java::security::ProtectionDomain* pd, ::java::security::Permission* p) override;
	::java::security::Policy* defaultPolicy = nullptr;
};

#endif // _ParameterAnnotations$MyPolicy_h_