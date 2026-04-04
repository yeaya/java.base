#include <ParameterAnnotations$MyPolicy.h>
#include <ParameterAnnotations.h>
#include <java/security/Permission.h>
#include <java/security/Policy.h>
#include <java/security/ProtectionDomain.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Permission = ::java::security::Permission;
using $Policy = ::java::security::Policy;
using $ProtectionDomain = ::java::security::ProtectionDomain;

void ParameterAnnotations$MyPolicy::init$($Policy* defaultPolicy) {
	$Policy::init$();
	$set(this, defaultPolicy, defaultPolicy);
}

bool ParameterAnnotations$MyPolicy::implies($ProtectionDomain* pd, $Permission* p) {
	bool var$0 = $$nc($nc(p)->getName())->equals("setSecurityManager"_s);
	return var$0 || $nc(this->defaultPolicy)->implies(pd, p);
}

ParameterAnnotations$MyPolicy::ParameterAnnotations$MyPolicy() {
}

$Class* ParameterAnnotations$MyPolicy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaultPolicy", "Ljava/security/Policy;", nullptr, $FINAL, $field(ParameterAnnotations$MyPolicy, defaultPolicy)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/Policy;)V", nullptr, 0, $method(ParameterAnnotations$MyPolicy, init$, void, $Policy*)},
		{"implies", "(Ljava/security/ProtectionDomain;Ljava/security/Permission;)Z", nullptr, $PUBLIC, $virtualMethod(ParameterAnnotations$MyPolicy, implies, bool, $ProtectionDomain*, $Permission*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ParameterAnnotations$MyPolicy", "ParameterAnnotations", "MyPolicy", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ParameterAnnotations$MyPolicy",
		"java.security.Policy",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ParameterAnnotations"
	};
	$loadClass(ParameterAnnotations$MyPolicy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParameterAnnotations$MyPolicy);
	});
	return class$;
}

$Class* ParameterAnnotations$MyPolicy::class$ = nullptr;