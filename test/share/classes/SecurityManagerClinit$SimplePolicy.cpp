#include <SecurityManagerClinit$SimplePolicy.h>
#include <SecurityManagerClinit.h>
#include <java/security/Permission.h>
#include <java/security/Permissions.h>
#include <java/security/Policy.h>
#include <java/security/ProtectionDomain.h>
#include <jcpp.h>

#undef DEFAULT_POLICY

using $PermissionArray = $Array<::java::security::Permission>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Permission = ::java::security::Permission;
using $Permissions = ::java::security::Permissions;
using $Policy = ::java::security::Policy;
using $ProtectionDomain = ::java::security::ProtectionDomain;

$Policy* SecurityManagerClinit$SimplePolicy::DEFAULT_POLICY = nullptr;

void SecurityManagerClinit$SimplePolicy::init$($PermissionArray* permissions) {
	$useLocalObjectStack();
	$Policy::init$();
	$set(this, perms, $new($Permissions));
	{
		$var($PermissionArray, arr$, permissions);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Permission, permission, arr$->get(i$));
			this->perms->add(permission);
		}
	}
}

bool SecurityManagerClinit$SimplePolicy::implies($ProtectionDomain* pd, $Permission* p) {
	bool var$0 = $nc(this->perms)->implies(p);
	return var$0 || $nc(SecurityManagerClinit$SimplePolicy::DEFAULT_POLICY)->implies(pd, p);
}

void SecurityManagerClinit$SimplePolicy::clinit$($Class* clazz) {
	$assignStatic(SecurityManagerClinit$SimplePolicy::DEFAULT_POLICY, $Policy::getPolicy());
}

SecurityManagerClinit$SimplePolicy::SecurityManagerClinit$SimplePolicy() {
}

$Class* SecurityManagerClinit$SimplePolicy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DEFAULT_POLICY", "Ljava/security/Policy;", nullptr, $STATIC | $FINAL, $staticField(SecurityManagerClinit$SimplePolicy, DEFAULT_POLICY)},
		{"perms", "Ljava/security/Permissions;", nullptr, $PRIVATE, $field(SecurityManagerClinit$SimplePolicy, perms)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/security/Permission;)V", nullptr, $PUBLIC | $TRANSIENT, $method(SecurityManagerClinit$SimplePolicy, init$, void, $PermissionArray*)},
		{"implies", "(Ljava/security/ProtectionDomain;Ljava/security/Permission;)Z", nullptr, $PUBLIC, $virtualMethod(SecurityManagerClinit$SimplePolicy, implies, bool, $ProtectionDomain*, $Permission*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SecurityManagerClinit$SimplePolicy", "SecurityManagerClinit", "SimplePolicy", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SecurityManagerClinit$SimplePolicy",
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
		"SecurityManagerClinit"
	};
	$loadClass(SecurityManagerClinit$SimplePolicy, name, initialize, &classInfo$$, SecurityManagerClinit$SimplePolicy::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SecurityManagerClinit$SimplePolicy);
	});
	return class$;
}

$Class* SecurityManagerClinit$SimplePolicy::class$ = nullptr;