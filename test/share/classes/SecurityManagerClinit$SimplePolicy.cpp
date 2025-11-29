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

$FieldInfo _SecurityManagerClinit$SimplePolicy_FieldInfo_[] = {
	{"DEFAULT_POLICY", "Ljava/security/Policy;", nullptr, $STATIC | $FINAL, $staticField(SecurityManagerClinit$SimplePolicy, DEFAULT_POLICY)},
	{"perms", "Ljava/security/Permissions;", nullptr, $PRIVATE, $field(SecurityManagerClinit$SimplePolicy, perms)},
	{}
};

$MethodInfo _SecurityManagerClinit$SimplePolicy_MethodInfo_[] = {
	{"<init>", "([Ljava/security/Permission;)V", nullptr, $PUBLIC | $TRANSIENT, $method(static_cast<void(SecurityManagerClinit$SimplePolicy::*)($PermissionArray*)>(&SecurityManagerClinit$SimplePolicy::init$))},
	{"implies", "(Ljava/security/ProtectionDomain;Ljava/security/Permission;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SecurityManagerClinit$SimplePolicy_InnerClassesInfo_[] = {
	{"SecurityManagerClinit$SimplePolicy", "SecurityManagerClinit", "SimplePolicy", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SecurityManagerClinit$SimplePolicy_ClassInfo_ = {
	$ACC_SUPER,
	"SecurityManagerClinit$SimplePolicy",
	"java.security.Policy",
	nullptr,
	_SecurityManagerClinit$SimplePolicy_FieldInfo_,
	_SecurityManagerClinit$SimplePolicy_MethodInfo_,
	nullptr,
	nullptr,
	_SecurityManagerClinit$SimplePolicy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SecurityManagerClinit"
};

$Object* allocate$SecurityManagerClinit$SimplePolicy($Class* clazz) {
	return $of($alloc(SecurityManagerClinit$SimplePolicy));
}

$Policy* SecurityManagerClinit$SimplePolicy::DEFAULT_POLICY = nullptr;

void SecurityManagerClinit$SimplePolicy::init$($PermissionArray* permissions) {
	$useLocalCurrentObjectStackCache();
	$Policy::init$();
	$set(this, perms, $new($Permissions));
	{
		$var($PermissionArray, arr$, permissions);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Permission, permission, arr$->get(i$));
			$nc(this->perms)->add(permission);
		}
	}
}

bool SecurityManagerClinit$SimplePolicy::implies($ProtectionDomain* pd, $Permission* p) {
	bool var$0 = $nc(this->perms)->implies(p);
	return var$0 || $nc(SecurityManagerClinit$SimplePolicy::DEFAULT_POLICY)->implies(pd, p);
}

void clinit$SecurityManagerClinit$SimplePolicy($Class* class$) {
	$assignStatic(SecurityManagerClinit$SimplePolicy::DEFAULT_POLICY, $Policy::getPolicy());
}

SecurityManagerClinit$SimplePolicy::SecurityManagerClinit$SimplePolicy() {
}

$Class* SecurityManagerClinit$SimplePolicy::load$($String* name, bool initialize) {
	$loadClass(SecurityManagerClinit$SimplePolicy, name, initialize, &_SecurityManagerClinit$SimplePolicy_ClassInfo_, clinit$SecurityManagerClinit$SimplePolicy, allocate$SecurityManagerClinit$SimplePolicy);
	return class$;
}

$Class* SecurityManagerClinit$SimplePolicy::class$ = nullptr;